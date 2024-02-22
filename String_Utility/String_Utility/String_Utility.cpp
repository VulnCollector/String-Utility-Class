// String_Utility.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String.h"
using namespace std;

void GetLength(const char* a);
void GetCharAt(const char * a, int index);
void ConstGetCharAt(const char* a, int index);
void StringCompare(const char* a, const char* b);
void StringAppend(const char* a, const char* b);
void StringPrepend(const char* a, const char* b);
void StringCstr(const char* a);
void ToLower(const char* a);
void ToUpper(const char* a);


int main()
{
    
    //GetLength("Hello");
    //GetCharAt("Hello", 4);
    //ConstGetCharAt("Hello", 3);
    //StringCompare("Hello", "Hello");
    //StringAppend("Hello", "World");
    //StringPrepend("Hello", "World");
    //StringCstr("Hello");
    //ToLower("HELLO");
    //ToUpper("hello");
    
}

void GetLength(const char* a)
{
    const char* name = { a };
    String* str = new String(name);
    size_t length = str->Length();
    cout << length << endl;

    
}

void GetCharAt(const char* a, int index)
{
    const char* name = {a};
    String* str = new String(name);
    char charAt = str->CharacterAt(index);
    cout << charAt << endl;

    
}

void ConstGetCharAt(const char* a, int index)
{
    const char* name = { a };
    String* str = new String(name);
    char charAt = str->CharacterAt(index);
    cout << charAt << endl;

    
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
    
    
    cout << str->CStr() << endl;

   
}

void StringPrepend(const char* a, const char* b)
{
    const char* name = { a };
    const char* name2 = { b };
    String* str = new String(name);
    String* str2 = new String(name2);
    str->Prepend(*str2);


    cout << str->CStr() << endl;
}

void StringCstr(const char* a)
{
    const char* name = { a };
    String* str = new String(name);
    cout << str->CStr() << endl;
}

void ToLower(const char* a)
{
    const char* name = { a };
    String* str = new String(name);
    str->ToLower();
    cout << str->CStr() << endl;
}

void ToUpper(const char* a)
{
    const char* name = { a };
    String* str = new String(name);
    str->ToUpper();
    cout << str->CStr() << endl;
}