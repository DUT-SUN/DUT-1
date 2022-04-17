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
//
//	Date(int x, int y, int z);
//	Date(Date& x);
//	void print_time();
//};
//Date::Date(int x = 2019, int y = 8, int z = 28)
//{
//	year = x;
//	month = y;
//	day = z;
//}
//Date::Date(Date& x)
//{
//	year = x.year;
//	month = x.month;
//	day = x.day;
//}
//
//
//void Date::print_time()
//{
//	cout <<  year << '/' << month << '/' << day;
//}
//
//class Publication
//{
//protected:
//	char* name;
//public:
//	Publication(const char* name);//��ʼ��name
//	Publication(const Publication& p);//��ӵ�ʱ�����
//	virtual void show();//���ָ�����show
//	virtual ~Publication();
//};
//Publication::Publication(const char* name1)
//{
//	name = new char[strlen(name1) + 1];
//	strcpy(this->name, name1);
//}
//Publication::Publication(const Publication& p)
//{
//	name = new char[strlen(p.name) + 1];
//	strcpy(this->name, p.name);
//}
//Publication::~Publication()
//{
//	delete[]name;
//}
//void Publication::show()
//{
//	cout << name;
//}
//class Library {
//
//	Publication* publications[100];  //���йݲأ�����ݲ�����Ϊ100
//	static int total;                //ʵ�ʹݲ���
//public:
//	void add(Publication& p);      //����¹ݲأ��˺�������ɣ�
//	void show();//               //������йݲص���Ӧ��Ϣ
//};
//int Library::total = 0;
//void Library::add(Publication& p)
//{
//	publications[total] = &p;
//	total++;
//}
//void Library::show()
//{
//	for (int i = 0; i < total; i++)
//	{
//		publications[i]->show();
//	}
//}
//class Book :virtual public Publication
//{
//protected:
//	char* anthorname;
//public:
//	Book(const char* name, const char* anthorname);
//	void show();
//	~Book();
//};
//Book::Book(const char* name, const char* anthorname1) :Publication(name)
//{
//	anthorname = new char[strlen(anthorname1) + 1];
//	strcpy(anthorname, anthorname1);
//}
//void Book::show()
//{
//	cout << name << ' ' << anthorname << endl;
//}
//Book::~Book()
//{
//	delete[]anthorname;
//}
//class Newspaper :virtual public Publication
//{
//protected:
//	Date z;
//
//public:
//	Newspaper(const char* name, Date& x);
//	void show();
//	friend class Date;
//};
//Newspaper::Newspaper(const char* name, Date& x) :Publication(name)
//{
//	z = x;
//}
//void Newspaper::show()
//{
//	Publication::show();
//	cout << ' ';
//	z.print_time();
//	cout << endl;
//}
//class Magzine :virtual public Publication
//{
//protected:
//	Date z;
//	int n;
//public:
//	friend class Date;
//	Magzine(const char* name, Date x, int n);
//	void show();
//};
//Magzine::Magzine(const char* name, Date x, int m) :Publication(name)
//{
//	z = x;
//	n = m;
//}
//void Magzine::show()
//{
//	Publication::show();
//	cout << ' ';
//	z.print_time();
//	cout << ' ';
//	cout << ' ' << "��" << n << "��" << endl;
//}
//int main()
//{
//	Library a;
//	Book x("C++", "yulaoshi");
//	a.add(x);
//	Date x1(2022, 4, 6);
//	Newspaper y("���ھ���", x1);
//	a.add(y);
//	Date x2(2011, 5, 1);
//	Magzine z("����", x2, 10);
//	a.add(z);
//	a.show();
//}