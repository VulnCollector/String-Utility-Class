// String_Utility.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String.h"
using namespace std;

void GetLength();
void GetCharAt();
void ConstGetCharAt();

int main()
{
    
    //GetLength();
    GetCharAt();
    


}

void GetLength()
{
    char name[15] = "Hello";
    String* str = new String(name);
    size_t length = str->Length();
    cout << length;
}

void GetCharAt()
{
    char name[15] = "Hello";
    String* str = new String(name);
    
    cout << str->CharacterAt(4);
}

void ConstGetCharAt()
{
    char name[15] = "Hello";
    String* str = new String(name);

    cout << str->CharacterAt(0);
}
