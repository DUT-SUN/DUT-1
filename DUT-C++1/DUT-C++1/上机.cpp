//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//#include <cstring>
//
//using namespace std;
//
//class Date
//
//{
//
//private:
//
//	int year, month, day;
//
//public:
//
//	Date(int y, int m, int d) :year(y), month(m), day(d) { cout << "construct date" << endl; }
//
//	void printDate() { cout << year << "-" << month << "-" << day << endl; }
//
//	~Date() { cout << "date bye" << endl; }
//
//};
//
//
//
//class Student {
//
//private:
//
//	char* name; //����  ע�⣬����ָ�����ݳ�Ա
//
//	int id;  //ѧ��
//
//	Date birthday; //����   ע�⣬�����������Ϊ���ݳ�Ա
//
//public:
//
//	Student(int y, int m, int d, const char* Stu_name = "no name", int n= 1);//(1)�������캯������
//
//	Student(const Student& another);//(2)����������캯������
//
//	void disp();//��3����ʾ������ѧ�š�����
//
//	~Student();
//
//
//
//};
//Student::Student(int y, int m, int d, const char* Stu_name, int n) :birthday(y, m, d)
//{
//	if (strlen(Stu_name) > 0)
//	{
//		name = new char[strlen(Stu_name) + 1];
//		strcpy(name, Stu_name);
//		id = n;
//	}
//	else
//	{
//		int len = strlen("no game") + 1;
//		name = new char[len];
//		strcpy(name, "no name");
//		id = n;
//	}
//}
//Student::Student(const Student& another) :birthday(another.birthday)
//{
//	int len = strlen(another.name) + 1;
//	name = new char[len];
//	strcpy(name, another.name);
//	id = another.id;
//}
//void Student::disp()//��3����ʾ������ѧ�š�����
//{
//	cout << "������" << name << ' ' << "ѧ�ţ�" << id << ' ' << "���գ�";
//    birthday.printDate();
//	cout << endl;
//}
//Student::~Student() {
//
//	if (name)
//	{
//		cout << name << " bye" << endl;
//		delete [] name;
//		name = 0;
//	}
//}
//int main() {
//
//	Student s1(2004, 6, 1, "xiaoming", 1);
//	Student s2(s1);
//	s2.disp();// ��ʾ���£�xiaoming 1 2004-6-1
//	cout << "end of main" << endl;
//	return 0;
//}
