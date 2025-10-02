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

    MyString obj2(" world");
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

    MyString rez4 = obj - "world"; // Hello world - world = Hello
	rez4.Print();

	if (obj > obj2)
	{
		cout << "\n1 bigger" << endl;
	}
	else
	{
		cout << "2 bigger" << endl;
	}
	if (obj == obj2)
	{
		cout << "1 == 2" << endl;
	}
	if (obj != obj2)
	{
		cout << "1 != 2" << endl;
	}
	if (obj >= obj2)
	{
		cout << "1 >= 2" << endl;
	}
	if (obj < obj2)
	{
		cout << "1 < 2" << endl;
	}
	if (obj <= obj2)
	{
		cout << "1 <= 2" << endl;
	}
	cout << endl;
	if (obj > "Hello")
	{
		cout << "1 bigger" << endl;
	}
	else
	{
		cout << "2 bigger" << endl;
	}
	if (obj >= "Hello")
	{
		cout << "1 >= string" << endl;
	}
	if (obj < "Hello")
	{
		cout << "1 < string" << endl;
	}
	if (obj <= "Hello")
	{
		cout << "1 <= string" << endl;
	}
	if (obj == "Hello")
	{
		cout << "1 == string" << endl;
	}
	if (obj != "Hello")
	{
		cout << "1 != string" << endl;
	}

	MyString rez5 = obj + obj2; // Hello + " " + world = Hello world
	rez5.Print();
}
