//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<math.h>
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int x1, int y1);
//	Point(Point& n);
//	friend class Circle;
//};
//Point::Point(int x1=0, int y1=0)
//{
//	x = x1;
//	y = y1;
//}
//Point::Point(Point& n)
//{
//	x = n.x;
//	y = n.y;
//}
//
//class Circle
//{
//private:
//	Point center;
//	double radium;
//	static double Pi;
//public:
//	Circle();
//	Circle(double x1);
//	Circle(double x1, Point p);
//	void show();
//	double area();
//	bool judge(Point p);
//
//};
//double Circle::Pi = 3.14159;
//Circle::Circle()
//{
//	Point center(0, 0);
//	radium = 1;
//}
//Circle::Circle(double x1)
//{
//	Point center(0, 0);
//	radium = x1;
//}
//Circle::Circle(double x1, Point p):center(p)//Ҫ�ڳ�ʼ���б���д���ڲ��ڶ���Ĺ��캯��������͵����޲�������
//{
//	radium = x1;
//}
//void Circle::show()
//{
//	cout << "Բ��:" << '(' << center.x << ',' << center.y << ')' << endl;
//	cout << "�뾶:" << radium<<endl;
//	cout << "���:" << area() << endl;
//}
//double Circle::area()
//{
//	return Pi * radium * radium;
//}
//bool Circle::judge(Point p)
//{
//	if (sqrt(pow(p.x - center.x, 2) + pow(p.y - center.y, 2)) <= radium)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	Circle a;
//	a.show();
//	Circle b(2);
//	b.show();
//	Point x(3, 3);
//	Circle c(3, x);
//	c.show();
//	if (a.judge(x))
//	{
//		cout << "��Բ�ڻ�Բ��" << endl;
//	}
//	else
//	{
//		cout << "��Բ��" << endl;
//	}
//	Point y(1, 0);
//	if (a.judge(y))
//	{
//		cout << "��Բ�ڻ�Բ��" << endl;
//	}
//	else
//	{
//		cout << "��Բ��" << endl;
//	}
//}