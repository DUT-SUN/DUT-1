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
//	int id;// ѧ��
//	char name[20];//ѧ��������
//	Date birth;//����
//public:
//	Student(int i,const char* na, Date dt) : birth(dt)
//	{
//		if (strlen(na) + 1 > 20)
//		{
//			cout << "��������" << endl;
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
//		cout << "ѧ�ţ�" << id << endl;
//		cout << "������" << name << endl;
//		cout << "��������:";
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
//	char name[20]; //����
//	int number;// ����
//public:
//	Card(int td,const char* na)
//	{
//		if (strlen(na) + 1 > 20)
//		{
//			cout << "��������" << endl;
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
//		cout << "ִ����:" << name << " " << "����:" << number<<endl;
//	}
//};
//
//class  YuLanCard : public Card //����������
//{
//private:
//	double amount;//���
//	Date dt;//����ʱ��
//	Student s; //���иÿ���ѧ����Ϣ
//	char* institute;//ѧԺ������
//public:
//	YuLanCard(const char* na, int id, Date dt, double p,const char* it, Student& st) :Card(id, na), s(st), dt(dt)
//	{
//		institute = new char[strlen(it) + 1];
//		strcpy(institute, it);
//		amount = p;
//	}
//	//pΪ���,itΪѧԺ������,st ��ʾ���иÿ���ѧ��
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
//		cout << "���:" << amount << endl;
//		cout << "����ʱ��:";
//		dt.print();
//		s.print();
//		cout << "ѧԺ����:" << institute << endl;
//	}
//
//	//(8)���ս��Ƚ������������Ĵ�С,��������ͬ���ٰ��ճֿ���ѧ����ѧ�Ŵ�С�Ƚ�
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
//		YuLanCard z1("sun", 123, date1x, 23.40, "��������ѧ", m1);
//		Date date2(2004, 12, 26);
//		Student m2(2, "niuma", date2);
//		YuLanCard z2("niuma", 321, date2x, 23.40, "��������ѧ������", m2);
//		if (z1>z2)
//		{
//			cout << "z1��z2��" << endl;
//		}
//		else
//		{
//			cout << "z2��z1��" << endl;
//		}
//			z1.print();
//			z1 = z2;
//			z1.print();
//		return 0;
//	}