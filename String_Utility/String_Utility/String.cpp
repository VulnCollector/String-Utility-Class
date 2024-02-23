#include "String.h"
#include <iostream>
#include <string>
using namespace std;

String::String()
{
	str = nullptr;
	str = new char[1];
	str[0] = '\0';
}

String::String(const char* _str)
{
	// copy string into char* array
	int size = (int)strlen(_str);
	str = new char[size + 1];
	memcpy(str, _str, size + 1);


	
}

String::String(const String& _other)
{
	// copy string into char* array
	int size = (int)strlen(_other.str);
	str = new char[size + 1];
	memcpy(str, _other.str, size + 1);
}

String::~String()
{
	delete str;
	str = nullptr;
}

size_t String::Length() const
{
	return size_t(strlen(str));
}

char& String::CharacterAt(size_t _index)
{
	
	if (_index < 0 || _index > strlen(str))
	{
		
		return str[strlen(str)];
	}
	else
	{
		
		return str[_index];
	}
	
}

const char& String::CharacterAt(size_t _index) const
{

	if (_index < 0 || _index > strlen(str))
	{

		return str[strlen(str)];
	}
	else
	{

		return str[_index];
	}
}

bool String::EqualTo(const String& _other) const
{
	if (strcmp(str, _other.str) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

String& String::Append(const String& _str)
{
	int length = (int)strlen(str) + (int)strlen(_str.str);
	strcat_s(str, length + 1, _str.str);
	return *this;
	
}

String& String::Prepend(const String& _str)
{
	int length = (int)strlen(str) + (int)strlen(_str.str);
	strcat_s(_str.str, length + 1, str);
	str = _str.str;
	return *this;
}

const char* String::CStr() const
{
	return str;
}

String& String::ToLower()
{
	for (size_t i = 0; i < Length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	return *this;
}

String& String::ToUpper()
{
	for (size_t i = 0; i < Length(); i++)
	{
		str[i] = toupper(str[i]);
	}
	return *this;
}

size_t String::Find(const String& _str)
{
	return Find(0, _str);
}

size_t String::Find(size_t _startIndex, const String& _str)
{
	if (_startIndex >= Length())
	{
		return -1;
	}
	const char* pos = strstr(str + _startIndex, _str.str);
	if (pos != nullptr)
	{
		return pos - str;
	}
	else
	{
		return -1;
	}
}

String& String::Replace(const String& _find, const String& _replace)
{
	size_t startPos = 0;
	while ((startPos = Find(startPos, _find)) != -1)
	{
		string Replace = string(str, str + startPos) + _replace.CStr() + string(str + startPos + _find.Length());

		char* newStr = new char[Replace.length() + 1];

		strcpy_s(newStr,strlen(newStr + 1), Replace.c_str());

		str = newStr;

		startPos += _replace.Length();
	}

	return *this;
}

String& String::ReadFromConsole()
{
	
	string input;
	getline(cin, input);
	char* newStr = new char[input.length() + 1];
	strcpy_s(newStr, strlen(newStr + 1), input.c_str());
	str = newStr;
	return *this;
}

String& String::WriteToConsole()
{
	cout << str;
	return *this;
}

bool String::operator==(const String& _other)
{
	
	return this->EqualTo(_other);
}

bool String::operator!=(const String& _other)
{
	return !(*this == _other);
}

String& String::operator=(const String& _str)
{
	
	str = new char[_str.Length() + 1];
	strcpy_s(str, this->Length() + 1, _str.str);
	
	return *this;
		
}

char& String::operator[](size_t _index)
{
	
	return str[_index];
}

const char& String::operator[](size_t _index) const
{
	return str[_index];
}

bool String::operator<(const String& _other)
{
	return strcmp(str, _other.str) < 0;
}

String& String::operator+(const String& _str)
{
	return this->Append(_str);
}

String& String::operator+=(const String& _str)
{
	return this->Append(_str);
}
