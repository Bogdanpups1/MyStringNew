#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
    MyString obj("Hello world!");
    obj.Print();

    cout << "Search for 'world': " << obj.MyStrStr("world") << endl;
    cout << "Search for 'test': " << obj.MyStrStr("test") << endl;

    return 0;
}