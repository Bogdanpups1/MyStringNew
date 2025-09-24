#include "MyString.h"
#include <iostream>
#include <limits>
using namespace std;

int MyString::count = 0;

MyString::MyString()
{
    lenght = 80;
    str = new char[lenght];
    str[0] = '\0';
    count++;
}

MyString::MyString(int size)
{
    lenght = size;
    str = new char[lenght];
    str[0] = '\0';
    count++;
}

MyString::MyString(const char* s)
{
    lenght = strlen(s) + 1;
    str = new char[lenght];
    strcpy_s(str, lenght, s);
    count++;
}

MyString::MyString(const MyString& obj)
{
    lenght = obj.lenght;
    str = new char[lenght];
    strcpy_s(str, lenght, obj.str);
    count++;
}

MyString::MyString(MyString&& obj) noexcept
{
    str = obj.str;
    lenght = obj.lenght;
    obj.str = nullptr;
    obj.lenght = 0;
    count++;
}

MyString::~MyString()
{
    delete[] str;
    count--;
}

void MyString::Print()
{
    cout << "String: " << str << endl;
}

void MyString::Input()
{
    cout << "Enter a string (max " << lenght - 1 << " characters): ";
    cin.getline(str, lenght);

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

bool MyString::MyStrStr(const char* st)
{
    char* temp = strstr(str, st);
    return temp != nullptr;
}

int MyString::MyChr(char c)
{
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c)
            return i;
    }
    return -1;
}

int MyString::MyStrLen()
{
    return strlen(str);
}

void MyString::MyStrCat(MyString& b)
{
    int newLenght = strlen(str) + strlen(b.str) + 1;
    char* newStr = new char[newLenght];

    strcpy_s(newStr, newLenght, str);
    strcat_s(newStr, newLenght, b.str);

    delete[] str;
    str = newStr;
    lenght = newLenght;
}

void MyString::MyDelChr(char c)
{
    int newLen = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            str[newLen++] = str[i];
        }
    }
    str[newLen] = '\0';
}

int MyString::MyStrCmp(MyString& b)
{
    return strcmp(str, b.str);
}

int MyString::GetCount()
{
    return count;
}