#include "MyString.h"
#include <iostream>
#include <limits>
using namespace std;

MyString::MyString()
{
    lenght = 80;
    str = new char[lenght];
    str[0] = '\0';
}

MyString::MyString(int size)
{
    lenght = size;
    str = new char[lenght];
    str[0] = '\0';
}

MyString::MyString(const char* s)
{
    lenght = strlen(s) + 1;
    str = new char[lenght];
    strcpy_s(str, lenght, s);
}

MyString::MyString(const MyString& obj)
{
    lenght = obj.lenght;
    str = new char[lenght];
    strcpy_s(str, lenght, obj.str);
}

MyString::MyString(MyString&& obj) noexcept
{
    str = obj.str;
    lenght = obj.lenght;
    obj.str = nullptr;
    obj.lenght = 0;
}

MyString::~MyString()
{
    delete[] str;
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