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
//	char* name; //姓名  注意，这是指针数据成员
//
//	int id;  //学号
//
//	Date birthday; //生日   注意，这是类对象作为数据成员
//
//public:
//
//	Student(int y, int m, int d, const char* Stu_name = "no name", int n= 1);//(1)给出构造函数定义
//
//	Student(const Student& another);//(2)给出深拷贝构造函数定义
//
//	void disp();//（3）显示姓名、学号、生日
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
//void Student::disp()//（3）显示姓名、学号、生日
//{
//	cout << "姓名：" << name << ' ' << "学号：" << id << ' ' << "生日：";
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
//	s2.disp();// 显示如下：xiaoming 1 2004-6-1
//	cout << "end of main" << endl;
//	return 0;
//}
