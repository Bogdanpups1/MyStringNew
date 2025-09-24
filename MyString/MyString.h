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
	bool MyStrStr(const char* st);// ����� ��������� � ������
	int MyChr(char c); // ����� ������� � ������ (������ ���������� �������,���� - 1)
	int MyStrLen();// ���������� ����� ������
	void MyStrCat(MyString& b); // ����������� �����
	void MyDelChr(char c); // ������� ��������� ������
	int MyStrCmp(MyString& b); // ��������� �����

	static int GetCount();

};