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
