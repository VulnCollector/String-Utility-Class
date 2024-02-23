// String_Utility.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String.h"
#include <string>
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
void StringFind(const char* a, const char* b);
void StringFindIndex(const char* a, const char* b, int index);
void StringReplace(const char* a, const char* b, const char* c);
void ReadFromConsole();
void WriteToConsole(const char* a);
void Equals(const char* a, const char* b);
void NotEquals(const char* a, const char* b);
void StringAssign(const char* a, const char* b);
void StringIndex(const char* a, int index);
void ConstStringIndex(const char* a, int index);
void LessThan(const char* a, const char* b);
void Add(const char* a, const char* b);
void PlusEquals(const char* a, const char* b);


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
    //StringFind("Hello World", "World");
    //StringFindIndex("Hello World", "World", 8);
    //StringReplace("Hello World Hello World", "World", "Hello");
    //ReadFromConsole();
    //WriteToConsole("Hello World");
    //Equals("Hello", "Hello");
    //NotEquals("Hello", "World");
    //StringAssign("Hello", "World");
    //StringIndex("Hello", 4);
    //ConstStringIndex("Hello", 4);
    //LessThan("Hello", "World");
    //Add("Hello", "World");
    //PlusEquals("Hello", "World");
}

void GetLength(const char* a)
{
    
    String* str = new String(a);
    size_t length = str->Length();
    cout << length << endl;

    
}

void GetCharAt(const char* a, int index)
{
   
    String* str = new String(a);
    char charAt = str->CharacterAt(index);
    cout << charAt << endl;

    
}

void ConstGetCharAt(const char* a, int index)
{
    
    String* str = new String(a);
    char charAt = str->CharacterAt(index);
    cout << charAt << endl;

    
}

void StringCompare(const char* a ,const char* b)
{
    
    String* str = new String(a);
    String* str2 = new String(b);
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
    
    String* str = new String(a);
    String* str2 = new String(b);
    str->Append(*str2);
    
    
    cout << str->CStr() << endl;

   
}

void StringPrepend(const char* a, const char* b)
{
    
    String* str = new String(a);
    String* str2 = new String(b);
    str->Prepend(*str2);


    cout << str->CStr() << endl;
}

void StringCstr(const char* a)
{
   
    String* str = new String(a);
    cout << str->CStr() << endl;
}

void ToLower(const char* a)
{
    
    String* str = new String(a);
    str->ToLower();
    cout << str->CStr() << endl;
}

void ToUpper(const char* a)
{
   
    String* str = new String(a);
    str->ToUpper();
    cout << str->CStr() << endl;
}

void StringFind(const char* a, const char* b)
{
   
    String* str = new String(a);
    size_t find = str->Find(b);
    cout << find << endl;
}

void StringFindIndex(const char* a, const char* b, int index)
{
    
    String* str = new String(a);
    int find = str->Find(index, b);
    cout << find << endl;
}

void StringReplace(const char* a, const char* b, const char* c)
{
    
    String* str = new String(a);
    String* str2 = new String(b);
    String* str3 = new String(c);
    str->Replace(*str2, *str3);
    cout << str->CStr() << endl;
}

void ReadFromConsole()
{
    String* str = new String();
    str->ReadFromConsole();
    cout << str->CStr() << endl;
}

void WriteToConsole(const char* a)
{
    
    String* str = new String(a);
    str->WriteToConsole();
}

void Equals(const char* a, const char* b)
{
    String* str = new String(a);
    String* str2 = new String(b);
    bool compare = (*str == *str2);
    if (compare)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

void NotEquals(const char* a, const char* b)
{
    String* str = new String(a);
    String* str2 = new String(b);
    bool compare = (*str != *str2);
    if (compare)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

void StringAssign(const char* a, const char* b)
{
    String* str = new String(a);
    String* str2 = new String(b);
    str = str2;
    cout << str->CStr() << endl;
}

void StringIndex(const char* a, int index)
{
    String* str = new String(a);
    char charAt = (*str)[index];
    cout << charAt << endl;;
}

void ConstStringIndex(const char* a, int index)
{
    String* str = new String(a);
    char charAt = (*str)[index];
    cout << charAt << endl;;
}

void LessThan(const char* a, const char* b)
{
    String* str = new String(a);
    String* str2 = new String(b);
    bool compare = (*str < *str2);
    if (compare)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

void Add(const char* a, const char* b)
{
    String* str = new String(a);
    String* str2 = new String(b);
    String* str3 = new String();
    *str3 = (*str + *str2);
    cout << str3->CStr() << endl;
}

void PlusEquals(const char* a, const char* b)
{
    String* str = new String(a);
    String* str2 = new String(b);
    *str += *str2;
    cout << str->CStr() << endl;
}