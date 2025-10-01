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

MyString MyString::operator+(MyString& b)
{
    int projLenght = lenght + b.lenght;
    char* projStr = new char[projLenght + 1];
    strcpy_s(projStr, projLenght + 1, str);
    strcat_s(projStr, projLenght + 1, b.str);

    delete[] str;
    str = projStr;
    lenght = projLenght;
    MyString rez(projStr);
    return rez;
}

MyString MyString::operator+(const char* b)
{
    int projLenght = lenght + strlen(b);
    char* projStr = new char[projLenght + 1];
    strcpy_s(projStr, projLenght + 1, str);
    strcat_s(projStr, projLenght + 1, b);

    MyString rez2(projStr);
    rez2.lenght = projLenght;
    return rez2;
}

MyString MyString::operator+(char c)
{
    int projLenght = lenght + 1;
    char* projStr = new char[projLenght + 1];
    strcpy_s(projStr, projLenght + 1, str);
    char temp[2] = { c,'\0' };
    strcat_s(projStr, projLenght + 1, temp);

    MyString rez3(projStr);
    rez3.lenght = projLenght;
    return rez3;
}

MyString MyString::operator-(const char* b)
{
    int projLenght = lenght - strlen(b);
    char* projStr = new char[projLenght + 1];
    strncpy_s(projStr, projLenght + 1, str, lenght - strlen(b));

    MyString rez4(projStr);
    rez4.lenght = projLenght;
    return rez4;
}

bool MyString::operator==(MyString& b)
{
    if (strcmp(str, b.str) == 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator!=(MyString& b)
{
    if (strcmp(str, b.str) != 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator>(MyString& b)
{
    if (strcmp(str, b.str) > 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator>=(MyString& b)
{
    if (strcmp(str, b.str) >= 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator<(MyString& b)
{
    if (strcmp(str, b.str) < 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator<=(MyString& b)
{
    if (strcmp(str, b.str) <= 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator>(const char* b)
{
    int result = strcmp(str, b);
    if (result > 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator>=(const char* b)
{
    int result = strcmp(str, b);
    if (result >= 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator<(const char* b)
{
    int result = strcmp(str, b);
    if (result < 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator<=(const char* b)
{
    int result = strcmp(str, b);
    if (result <= 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator==(const char* b)
{
    int result = strcmp(str, b);
    if (result == 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator!=(const char* b)
{
    int result = strcmp(str, b);
    if (result != 0)
    {
        return true;
    }
    return false;
}
