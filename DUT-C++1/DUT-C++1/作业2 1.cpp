//#define _CRT_SECURE_NO_WARNINGS 1
//#include"Stu.h"
//#include<iostream>
//#include<String>
//using namespace std;
//class Student
//{
//private:
//	int id;
//	char name[20];
//	Date roll;
//	static int number;
//public:
//	Student();
//	Student(int Stu_id, const char*Stu_p, Date Stu_roll);
//	void show(); 
//	int geNum();
//};
// int Student::number = 0;
// Student::Student() :roll(2019, 8, 28)
//{
//	id = 201901 + number;
//	strcpy(name, "ssdut");
//
//	number++;
//}
//Student::Student(int Stu_id, const char*Stu_p, Date Stu_roll):roll(Stu_roll)
//{
//	id = Stu_id;
//	strcpy(name, Stu_p);
//
//	number++;
//}
//void Student::show()
//{
//	cout << "学生学号:" << id << '\t' << "学生姓名:" << name << '\t' << "入学时间:";
//	roll.print_time();
//	cout << endl;
//}
//int Student::geNum()
//{
//	cout << "创建学生对象个数为：" << number<<endl;
//	return number;
//}
//int main()
//{
//	Student a;
//	a.show();
//	Date x(1, 2, 3);
//	Student b(201701, "nb", x);
//	b.show();
//	a.geNum();
//}