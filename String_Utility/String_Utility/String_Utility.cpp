// String_Utility.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String.h"
#include <string>
#include <fstream>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

size_t GetLength(const char* a);
char GetCharAt(const char * a, int index);
void ConstGetCharAt(const char* a, int index);
bool StringCompare(const char* a, const char* b);
String StringAppend(const char* a, const char* b);
String StringPrepend(const char* a, const char* b);
char StringCstr(const char* a);
String ToLower(const char* a);
String ToUpper(const char* a);
size_t StringFind(const char* a, const char* b);
size_t StringFindIndex(const char* a, const char* b, int index);
String StringReplace(const char* a, const char* b, const char* c);
String ReadFromConsole();
bool WriteToConsole(const char* a);
bool Equals(const char* a, const char* b);
bool NotEquals(const char* a, const char* b);
bool StringAssign(const char* a, const char* b);
char StringIndex(const char* a, int index);
void ConstStringIndex(const char* a, int index);
bool LessThan(const char* a, const char* b);
String Add(const char* a, const char* b);
bool PlusEquals(const char* a, const char* b);


int main()
{
    vector<string> Tests = { 20, " " };
    float Successful = 0.00f;

    if (GetLength("Hello") == 5)
    {
        Successful += 5;
        Tests[0] = "Test 1: Length Successful";
        
    }
    else Tests[0] = "Test 1: Length Failed";

    if (GetCharAt("Hello", 4) == 'o')
    {
        Successful += 5;
        Tests[1] = "Test 2: CharacterAt Successful";
    }
    else Tests[1] = "Test 2: CharacterAt Failed";
    
    if (StringCompare("Hello", "Hello"))
    {
        Successful += 5;
        Tests[2] = "Test 3: EqualTo Successful";
    }
    else Tests[2] = "Test 3: EqualTo Successful";

    if (StringAppend("Hello", "World") == "HelloWorld")
    {
        Successful += 5;
        Tests[3] = "Test 4: Append Successful";
    }
    else Tests[3] = "Test 4: Append Failed";

    if (StringPrepend("Hello", "World") == "WorldHello")
    {
        Successful += 5;
        Tests[4] = "Test 5: Prepend Successful";
    }
    else Tests[4] = "Test 5: Prepend Failed";

    String* Hello = new String("Hello");
    if (StringCstr("Hello") == *Hello->CStr())
    {
        Successful += 5;
        Tests[5] = "Test 6: CStr Successful";
    }
    else Tests[5] = "Test 6: CStr Failed";

    if (ToLower("HELLO") == "hello")
    {
        Successful += 5;
        Tests[6] = "Test 7: ToLower Successful";
    }
    else Tests[6] = "Test 7: ToLower Failed";
    
    if (ToUpper("hello") == "HELLO")
    {
        Successful += 5;
        Tests[7] = "Test 8: ToUpper Successful";
    }
    else  Tests[7] = "Test 8: ToUpper Failed";

    if (StringFind("Hello World", "World") == 6)
    {
        Successful += 5;
        Tests[8] = "Test 9: Find Successful";
    }
    else Tests[8] = "Test 9: Find Failed";
    
    if (StringFindIndex("Hello World", "World", 8) == -1)
    {
        Successful += 5;
        Tests[9] = "Test 10: FindAtIndex Successful";
    }
    else Tests[9] = "Test 10: FindAtIndex Failed";

    if (StringReplace("Hello World Hello World", "World", "Hello") == "Hello Hello Hello Hello")
    {
        Successful += 5;
        Tests[10] = "Test 11: Replace Successful";
    }
    else Tests[10] = "Test 11: Replace Failed";

    if (ReadFromConsole() != "")
    {
        Successful += 5;
        Tests[11] = "Test 12: ReadFromConsole Successful";
    }
    else Tests[11] = "Test 12: ReadFromConsole Failed";

    if (WriteToConsole("Hello World"))
    {
        Successful += 5;
        Tests[12] = "Test 13: WriteToConsole Successful";
    }
    else Tests[12] = "Test 13: WriteToConsole Failed";

    if (Equals("Hello", "Hello"))
    {
        Successful += 5;
        Tests[13] = "Test 14: == Operator Overload Successful";
    }
    else Tests[13] = "Test 14: == Operator Overload Failed";
    
    if (NotEquals("Hello", "World"))
    {
        Successful += 5;
        Tests[14] = "Test 15: != Operator Overload Successful";
    }
    else Tests[14] = "Test 15: != Operator Overload Failed";

    if (StringAssign("Hello", "World"))
    {
        Successful += 5;
        Tests[15] = "Test 16: = Operator Overload Successful";
    }
    else Tests[15] = "Test 16: = Operator Overload Failed";

    if (StringIndex("Hello", 4) == 'o')
    {
        Successful += 5;
        Tests[16] = "Test 17: [] Operator Overload Successful";
    }
    else Tests[16] = "Test 17: [] Operator Overload Failed";

    if (LessThan("Hello", "World"))
    {
        Successful += 5;
        Tests[17] = "Test 18: < Operator Overload Successful";
    }
    else Tests[17] = "Test 18: < Operator Overload Failed";

    if (Add("Hello", "World") == "HelloWorld")
    {
        Successful += 5;
        Tests[18] = "Test 19: + Operator Overload Successful";
    }
    else Tests[18] = "Test 19: + Operator Overload Failed";

    if (PlusEquals("Hello", "World"))
    {
        Successful += 5;
        Tests[19] = "Test 20: += Operator Overload Successful";
    }
    else Tests[19] = "Test 20: += Operator Overload Failed";

    fstream file;

    file.open("Tests.txt", ios_base::app);
    struct tm newtime;
    time_t now = time(0);
    localtime_s(&newtime, &now);
    int min = newtime.tm_min;
    int sec = newtime.tm_sec;
   

    
    if (file.is_open())
    {
        file << "Date: " << newtime.tm_mday << "/" << 1 + newtime.tm_mon << "/" << 1900 + newtime.tm_year << " ";
        file << "Time: " << newtime.tm_hour << ":";
        if (min >= 0 && min < 10)
        {
            file << setw(2) << setfill('0') << min << ":";
        }
        else file << min << ":";
        if (sec >= 0 && sec < 10)
        {
            file << setw(2) << setfill('0') << sec << ":";
        }
        else file << newtime.tm_sec << " ";
        
        file << "Successful Tests: " << Successful << "%" << endl;

        for (int i = 0; i < Tests.size(); i++)
        {
            file << Tests[i] << endl;
        }
        file << endl;
    }
    else cout << "File not open.";
    file.close();
    return 0;
}

size_t GetLength(const char* a) //testing Length Function
{
    
    String* str = new String(a);
    size_t length = str->Length();
    cout << length << endl;
    return length;
    
}

char GetCharAt(const char* a, int index) //testing CharacterAt Function
{
   
    String* str = new String(a);
    char charAt = str->CharacterAt(index);
    cout << charAt << endl;
    return charAt;
    
}

void ConstGetCharAt(const char* a, int index)
{
    
    String* str = new String(a);
    char charAt = str->CharacterAt(index);
    cout << charAt << endl;

    
}

bool StringCompare(const char* a ,const char* b) //testing EqualTo Function
{
    
    String* str = new String(a);
    String* str2 = new String(b);
    bool compare = str->EqualTo(*str2);
    if (compare)
    {
        cout << "true" << endl;
        return true;
    }
    else
    {
        cout << "false" << endl;
        return false;
    }
     

}

String StringAppend(const char* a, const char* b) //testing Append Function
{
    
    String* str = new String(a);
    String* str2 = new String(b);
    str->Append(*str2);
    
    
    cout << str->CStr() << endl;
    return *str;
   
}

String StringPrepend(const char* a, const char* b) //testing Prepend Function
{
    
    String* str = new String(a);
    String* str2 = new String(b);
    str->Prepend(*str2);


    cout << str->CStr() << endl;
    return *str;
}

char StringCstr(const char* a) //testing CStr Function
{
   
    String* str = new String(a);
    cout << str->CStr() << endl;
    return *str->CStr();
}

String ToLower(const char* a) //testing ToLower Function
{
    
    String* str = new String(a);
    str->ToLower();
    cout << str->CStr() << endl;
    return *str;
}

String ToUpper(const char* a) //testing ToUpper Function
{
   
    String* str = new String(a);
    str->ToUpper();
    cout << str->CStr() << endl;
    return *str;
}

size_t StringFind(const char* a, const char* b) //testing Find Function
{
   
    String* str = new String(a);
    size_t find = str->Find(b);
    cout << find << endl;
    return find;
}

size_t StringFindIndex(const char* a, const char* b, int index) //testing Find Function with index
{
    
    String* str = new String(a);
    int find = str->Find(index, b);
    cout << find << endl;
    return find;
}

String StringReplace(const char* a, const char* b, const char* c) //testing Replace Function
{
    
    String* str = new String(a);
    String* str2 = new String(b);
    String* str3 = new String(c);
    str->Replace(*str2, *str3);
    cout << str->CStr() << endl;
    return *str;
}

String ReadFromConsole() //testing ReadFromConsole Function
{
    String* str = new String();
    str->ReadFromConsole();
    cout << str->CStr() << endl;
    return *str;
}

bool WriteToConsole(const char* a) //testing WriteToConsole Function
{
    
    String* str = new String(a);
    if (str->WriteToConsole() == a)
    {
        return true;
    }
    else return false;
    
}

bool Equals(const char* a, const char* b) //testing == operator overload
{
    String* str = new String(a);
    String* str2 = new String(b);
    bool compare = (*str == *str2);
    if (compare)
    {
        cout << "true" << endl;
        return true;
    }
    else
    {
        cout << "false" << endl;
        return false;
    }
}

bool NotEquals(const char* a, const char* b) //testing != operator overload
{
    String* str = new String(a);
    String* str2 = new String(b);
    bool compare = (*str != *str2);
    if (compare)
    {
        cout << "true" << endl;
        return true;
    }
    else
    {
        cout << "false" << endl;
        return false;
    }
}

bool StringAssign(const char* a, const char* b) //testing = operator overload
{
    String* str = new String(a);
    String* str2 = new String(b);
    str = str2;
    cout << str->CStr() << endl;
    if (str == str2)
    {
        return true;
    }
    else return false;
}

char StringIndex(const char* a, int index) //testing [] operator overload
{
    String* str = new String(a);
    char charAt = (*str)[index];
    cout << charAt << endl;
    return charAt;
}

void ConstStringIndex(const char* a, int index)
{
    String* str = new String(a);
    char charAt = (*str)[index];
    cout << charAt << endl;
}

bool LessThan(const char* a, const char* b) //testing < operator overload
{
    String* str = new String(a);
    String* str2 = new String(b);
    bool compare = (*str < *str2);
    if (compare)
    {
        cout << "true" << endl;
        return true;
    }
    else
    {
        cout << "false" << endl;
        return false;
    }
}

String Add(const char* a, const char* b) //testing + operator overload
{
    String* str = new String(a);
    String* str2 = new String(b);
    String* str3 = new String();
    *str3 = (*str + *str2);
    cout << str3->CStr() << endl;
    return *str3;
}

bool PlusEquals(const char* a, const char* b) //testing += operator overload
{
    String* str = new String(a);
    String* str2 = new String(b);
    *str += *str2;
    cout << str->CStr() << endl;
    if (*str == str->Append(*str2))
    {
        return true;
    }
    else return false;
}