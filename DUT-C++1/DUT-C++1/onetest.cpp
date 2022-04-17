#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
private:
	char* name;
	char* aim;
	int id;
public:
	
	//Student(const char* na = NULL, const char* ai = NULL, int i = 2021)
	//{
	//	if (na)
	//	{
	//		name = new char[strlen(na) + 2];
	//		strcpy(name, na);
	//	}
	//	else
	//	{
	//		name = new char[8];
	//		strcpy(name, "no name");
	//	}
	//	if (ai)
	//	{
	//		aim = new char[strlen(ai) + 2];
	//		strcpy(aim, ai);
	//	}
	//	else
	//	{
	//		aim = new char[5];
	//		strcpy(name, "math");
	//	}
	//	id = i;
	//}
	//
	void changInfo(const char* na, const char* ai, int i)
	{
		cout << strlen(na);
		name = new char[strlen(na) + 2];
		strcpy(name, na);
		aim = new char[strlen(ai) + 2];
		strcpy(aim, ai);
		id = i;
	}
	void show();
	~Student()
	{
		delete[]name;
		delete[]aim;
	}
};
void Student::show()
{
	cout << "�����ǣ�" << name << endl;
	cout << "ѧ����" << id << endl;
}
class Teacher
{
private:
	char* name;
	char* aim;
	Student* std;
	int n;
public:
	Teacher(const char* na = NULL, const char* ai = NULL, int n = 3);
	void show();
	void setStd();
	~Teacher()
	{
		delete[]name;
		delete[]aim;
		delete[]std;
	}
};
Teacher::Teacher(const char* na, const char* ai, int in)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	else
	{
		name = new char[8];
		strcpy(name, "no name");
	}
	if (ai)
	{
		aim = new char[strlen(ai) + 1];
		strcpy(aim, ai);
	}
	else
	{
		aim = new char[5];
		strcpy(aim, "math");
	}
	n = in;
}
void Teacher::show()
{
	cout << "�����ǣ�" << name << endl;
	cout << "�о������ǣ�" << aim << endl;
	cout << "ָ����" << n << "���о���" << endl;
	cout << "���Ƿֱ��ǣ�" << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		std[i].show();
	}
}
void Teacher::setStd()
{
	cout << "����ʦ�ǣ�" << name << endl;
	cout << "��ָ����" << n << "��ѧ��" << endl;
	cout << "�������ѧ���Ļ�����Ϣ" << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		char nam[20];
		char am[20];
		int ii;
		cin >> nam >> am >> ii;
		std[i].changInfo(nam, am, ii);
	}
	system("cls");
}

int main()
{
	Teacher T[3] = { Teacher(),Teacher("xiaocrane","yingyu",4),Teacher("dacrane","zhengzhi",2) };
	int i;
	for (i = 0; i < 3; i++)
	{
		T[i].setStd();
	}
}
