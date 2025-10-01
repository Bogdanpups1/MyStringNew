#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
    MyString obj("Hello");
    obj.Print();

    /*cout << "Search for 'ello': " << obj.MyStrStr("ello") << endl;
    cout << "Search for 'xyz': " << obj.MyStrStr("xyz") << endl;

    cout << "Search for 'e': " << obj.MyChr('e') << endl;
    cout << "Search for 'z': " << obj.MyChr('z') << endl;

    cout << "Length: " << obj.MyStrLen() << endl;*/

    MyString obj2(" World");
    /*obj.MyStrCat(obj2);*/
    obj2.Print();

    /*obj.MyDelChr('o');
    cout << "After deleting 'o': ";
    obj.Print();

    MyString a("abc");
    MyString b("abd");
    cout << "Compare 'abc' with 'abd': " << a.MyStrCmp(b) << endl;

    cout << "Initial count: " << MyString::GetCount() << endl;

    return 0;*/

    MyString rez = obj + obj2;
    rez.Print();

    MyString rez2 = obj + "!!!";
    rez2.Print();

    MyString rez3 = obj + '?';
    rez3.Print();

    //MyString rez3 = obj - "world"; // Hello world - world = Hello
}
