//#define _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//
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
//    int year, month, day;
//
//public:
//
//    Date(int y, int m, int d) :year(y), month(m), day(d)
//    {
//        cout << "construct date" << endl;
//    }
//
//    void printDate()
//    {
//        cout << year << "-" << month << "-" << day << endl;
//    }
//
//    ~Date()
//    {
//        cout << "date bye" << endl;
//    }
//
//};
//
//
//
//class Student {
//
//private:
//
//    char* name; //姓名  注意，这是指针数据成员
//
//    int id;  //学号
//
//    Date birthday; //生日   注意，这是类对象作为数据成员
//
//public:
//
//    Student(int y, int m, int d, const char* na = "no name", int = 1) :birthday(y, m, d)
//    {
//        int len;
//        if (strlen(na) > 0)
//        {
//            len = strlen(na) + 1;
//            name = new char[len];
//            strcpy(name, na);
//        }
//        else
//        {
//            len = strlen("no name") + 1;
//            name = new char[len];
//            strcpy(name, "no name");
//        }
//        id = 1;
//    }//(1)给出构造函数定义
//
//    Student(const Student& another) :birthday(another.birthday)
//    {
//        int len;
//        len = strlen(another.name) + 1;
//        name = new char[len];
//        strcpy(name, another.name);
//        id = another.id;
//    }//(2)给出深拷贝构造函数定义
//
//    void disp()
//    {
//        cout << name << ' ' << id << ' ';
//        birthday.printDate();
//    }//（3）显示姓名、学号、生日
//
//    ~Student();
//
//
//
//};
//
//Student::~Student() {
//
//    if (name)
//
//    {
//
//        cout << name << " bye" << endl;
//
//        delete[] name;
//
//        name = 0;
//
//    }
//
//}
//
//
//
//int main() {
//
//    Student s1(2004, 6, 1, "xiaoming", 1);
//
//    Student s2(s1);
//
//
//    s2.disp();// 显示如下：xiaoming 1 2004-6-1
//
//
//
//    cout << "end of main" << endl;
//
//    return 0;
//
//}
