//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Date
//{
//private:
//	int year;
//	int month;
//	int day;
//public:
//	Date(int y, int m, int d)
//	{
//		year = y; month = m; day = d;
//	}
//	//Date(const Date& x)
//	//{
//	//	year = x.year;
//	//	month = x.month;
//	//	day = x.day;
//	//}
//	void print()
//	{
//		cout << year << '-' << month << '-' << day << endl;
//	}
//};
//class Student
//{
//private:
//	int id;// 学号
//	char name[20];//学生的姓名
//	Date birth;//生日
//public:
//	Student(int i,const char* na, Date dt) : birth(dt)
//	{
//		if (strlen(na) + 1 > 20)
//		{
//			cout << "姓名过长" << endl;
//			return;
//		}
//		else
//		{
//			id = i;
//			strcpy(name, na);
//		}
//	}
//	//Student(const Student& s):birth(s.birth)
//	//{
//	//	strcpy(name, s.name);
//	//	id = s.id;
//	//}
//	void print()
//	{
//		cout << "学号：" << id << endl;
//		cout << "姓名：" << name << endl;
//		cout << "出生日期:";
//		birth.print();
//	}
//
//	bool operator>(Student& s)
//	{
//		if (id > s.id)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//
//	}
//
//};
//
//class Card
//{
//protected:
//	char name[20]; //姓名
//	int number;// 卡号
//public:
//	Card(int td,const char* na)
//	{
//		if (strlen(na) + 1 > 20)
//		{
//			cout << "姓名过长" << endl;
//			return;
//		}
//		else
//		{
//			number = td;
//			strcpy(name, na);
//		}
//	}
//	void print()
//	{
//		cout << "执卡人:" << name << " " << "卡号:" << number<<endl;
//	}
//};
//
//class  YuLanCard : public Card //定义玉兰卡
//{
//private:
//	double amount;//金额
//	Date dt;//开卡时间
//	Student s; //持有该卡的学生信息
//	char* institute;//学院的名称
//public:
//	YuLanCard(const char* na, int id, Date dt, double p,const char* it, Student& st) :Card(id, na), s(st), dt(dt)
//	{
//		institute = new char[strlen(it) + 1];
//		strcpy(institute, it);
//		amount = p;
//	}
//	//p为金额,it为学院的名字,st 表示持有该卡的学生
//
//	YuLanCard(const YuLanCard& b) :Card(b.number, b.name), dt(b.dt), s(b.s)
//	{
//		institute = new char[strlen(b.institute) + 1];
//		strcpy(institute, b.institute);
//	}
//
//	void print()
//	{
//		Card::print();
//		cout << "余额:" << amount << endl;
//		cout << "开卡时间:";
//		dt.print();
//		s.print();
//		cout << "学院名称:" << institute << endl;
//	}
//
//	//(8)按照金额比较两张玉兰卡的大小,如果金额相同，再按照持卡的学生的学号大小比较
//
//	bool operator>(YuLanCard& ylc)
//	{
//		if (amount > ylc.amount)
//		{
//			return true;
//		}
//		else if (amount < ylc.amount)
//		{
//			return false;
//		}
//		else
//		{
//			if (number > ylc.number)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//	}
//
//	YuLanCard& operator=(YuLanCard& b)
//	{
//		
//		number = b.number;
//		strcpy(name,b.name);
//		dt = b.dt;
//		s = b.s;
//		institute = new char[strlen(b.institute) + 1];
//		strcpy(institute, b.institute);
//		return *this;
//	}
//	~YuLanCard()
//	{
//		if (institute)
//		{
//			delete[]institute;
//		
//		}
//	}
//};                                                                                              
//	int main()
//	{
//		Date date1(2003, 9, 20);
//		Date date1x(2022, 1, 1);
//		Date date2x(2022, 2, 2);
//		Student m1(1, "sun", date1);
//		YuLanCard z1("sun", 123, date1x, 23.40, "大连理工大学", m1);
//		Date date2(2004, 12, 26);
//		Student m2(2, "niuma", date2);
//		YuLanCard z2("niuma", 321, date2x, 23.40, "大连理工大学开发区", m2);
//		if (z1>z2)
//		{
//			cout << "z1比z2大" << endl;
//		}
//		else
//		{
//			cout << "z2比z1大" << endl;
//		}
//			z1.print();
//			z1 = z2;
//			z1.print();
//		return 0;
//	}