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
//Circle::Circle(double x1, Point p):center(p)//要在初始化列表中写下内部内对象的构造函数，否则就调用无参数构造
//{
//	radium = x1;
//}
//void Circle::show()
//{
//	cout << "圆心:" << '(' << center.x << ',' << center.y << ')' << endl;
//	cout << "半径:" << radium<<endl;
//	cout << "面积:" << area() << endl;
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
//		cout << "在圆内或圆上" << endl;
//	}
//	else
//	{
//		cout << "在圆外" << endl;
//	}
//	Point y(1, 0);
//	if (a.judge(y))
//	{
//		cout << "在圆内或圆上" << endl;
//	}
//	else
//	{
//		cout << "在圆外" << endl;
//	}
//}