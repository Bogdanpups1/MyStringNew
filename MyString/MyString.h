#pragma once
class MyString
{
	char* str;
	int lenght;
	static int count;
public:
	MyString();
	MyString(int size);
	MyString(const char* s);
	MyString(const MyString& obj);
	MyString(MyString&& obj) noexcept;

	~MyString();
	void Print();
	//--------------------------------------------------
	void Input();
	bool MyStrStr(const char* st);// поиск подстроки в строке
	int MyChr(char c); // поиск символа в строке (индекс найденного символа,либо - 1)
	int MyStrLen();// возвращает длину строки
	void MyStrCat(MyString& b); // объединение строк
	void MyDelChr(char c); // удаляет указанный символ
	int MyStrCmp(MyString& b); // сравнение строк

	static int GetCount();

	MyString operator+ (MyString& b);
	MyString operator+ (const char* b);
	MyString operator+ (char c);
	MyString operator- (const char* b);

	bool operator==(MyString& b);
	bool operator!=(MyString& b);
	bool operator>(MyString& b);
	bool operator>=(MyString& b);
	bool operator<(MyString& b);
	bool operator<=(MyString& b);
	bool operator>(const char* b);
	bool operator>=(const char* b);
	bool operator<(const char* b);
	bool operator<=(const char* b);
	bool operator==(const char* b);
	bool operator!=(const char* b);
};
