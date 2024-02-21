// String_Utility.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String.h"
using namespace std;

void GetLength();
void GetCharAt(int index);
void ConstGetCharAt();
void StringCompare(const char* a, const char* b);
void StringAppend(const char* a, const char* b);

int main()
{
    
    //GetLength();
    //GetCharAt(4);
    //StringCompare("Hello", "Hello");
    StringAppend("Hello", "World");

}

void GetLength()
{
    char name[] = "Hello";
    String* str = new String(name);
    size_t length = str->Length();
    cout << length << endl;

    delete str;
    str = nullptr;
}

void GetCharAt(int index)
{
    char name[] = "Hello";
    String* str = new String(name);
    char charAt = str->CharacterAt(index);
    cout << charAt << endl;

    delete str;
    str = nullptr;
}

void ConstGetCharAt()
{
    char name[] = "Hello";
    String* str = new String(name);

    cout << str->CharacterAt(0);

    delete str;
    str = nullptr;
}

void StringCompare(const char* a ,const char* b)
{
    const char* name[] = { a };
    const char* name2[] = { b };
    String* str = new String(*name);
    String* str2 = new String(*name2);
    bool compare = str->EqualTo(*str2);
    if (compare)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
     

}

void StringAppend(const char* a, const char* b)
{
    const char* name = { a };
    const char* name2 = { b };
    String* str = new String(name);
    String* str2 = new String(name2);
    str->Append(*str2);
    
    
    cout << str->str << endl;

   
}