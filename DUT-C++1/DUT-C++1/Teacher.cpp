//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class Student
//{
//private:
//	char* name;
//	char* discipline;
//	int id;
//public:
//	Student();
//	void show(int z);
//	~Student();
//};
//Student::Student()
//{
//	char Stu_name[20];
//	char Stu_discipline[50];
//	cout << "请输入研究生的信息(名字 专业 学号):";
//
//	cin >> Stu_name >> Stu_discipline >> id;
//	name = new char[strlen(Stu_name) + 1];
//	discipline = new char[strlen(Stu_discipline) + 1];
//	strcpy(name,Stu_name);
//	strcpy(discipline, Stu_discipline);
//
//}
//void Student::show(int z)
//{
//	cout <<z<<"号研究生姓名:"<<name << ' '<<"专业:" << discipline << ' ' <<"学号:" << id << endl;
//}
//Student::~Student()
//{
//	delete[]name;
//	delete[]discipline;
//}
//class Teacher
//{
//private:
//	char* name;
//	char* direction;
//	Student* sArray;
//	int n;
//public:
//	Teacher();
//	~Teacher();
//	void show();
//	void printStudent(int j);
//};
//Teacher::Teacher()
//{
//	char Teacher_name[20];
//	char Teacher_direction[50];
//	cout << "输入教师的(姓名 方向 所带研究生人数):";
//	cin >> Teacher_name >> Teacher_direction>>n;
//	name = new char[strlen(Teacher_name) + 1];
//	direction = new char[strlen(Teacher_direction) + 1];
//	strcpy(name, Teacher_name);
//	strcpy(direction, Teacher_direction);
//	sArray = new Student[n];
//}
//void Teacher::show()
//{
//	cout << "教师姓名:" << name << ' ' << "研究方向:" << direction << ' ' << "研究生所带人数:" << n << endl;
//	for (int i = 0; i < n; i++)
//	{
//		sArray[i].show(i+1); cout << endl;
//	}
//}
//void Teacher::printStudent(int j)
//{
//	if (j > n)
//	{
//		cout << "所带研究生人数不足" << endl;
//		return;
//	}
//	cout << name << "老师的第" << j << "个研究生的信息如下" << endl;
//	sArray[j - 1].show(j); cout << endl;
//}
//Teacher::~Teacher()
//{
//	delete[]sArray;
//	delete[]name;
//	delete[]direction;
//}
//int main()
//{
//	Teacher t[3];
//	t[0].show();
//	t[1].printStudent(2);
//}






