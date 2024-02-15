#include "String.h"
#include <iostream>
#include <string>
using namespace std;

String::String()
{
	str[15] = {};
}

String::String(const char* _str)
{
	const char* ptArray = _str;
	for (int i = 0; i < 15; i++)
	{
		str[i] = *(ptArray + i);
	}
	
}

String::String(const String& _other)
{
}

String::~String()
{
}

size_t String::Length() const
{
	return size_t(strlen(str));
}

char& String::CharacterAt(size_t _index)
{
	cout << strlen(str);
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

	const char& charAT = str[_index];
	return charAT;
}
