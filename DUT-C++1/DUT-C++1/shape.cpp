//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<math.h>
//#define PAI 3.14
//using namespace std;
//class Point2D
//{
//protected:
//	int x, y;
//public:
//	Point2D(int x1 = 0, int y1 = 0)
//	{
//		x = x1;
//		y = y1;
//	}
//	Point2D(const Point2D& s)
//	{
//		x = s.x;
//		y = s.y;
//	}
//	void print()
//	{
//		cout << '(' << x << ',' << y << ')' << endl;
//	}
//};
//class Shape
//{
//protected:
//	char* name;
//
//public:
//	Shape(const char* name1)
//	{
//		name = new char(strlen(name1) + 1);
//	}
//	virtual void show()
//	{
//		cout << "图形名:" << name << endl;
//	}
//};
//class twomensionalShape : public Shape
//{
//public:
//	twomensionalShape(const char* name1) :Shape(name1)//把name传进来
//	{}
//	virtual void show()
//	{
//		cout << "图形名:" << name << endl;
//	}
//};
//class Circle :virtual public twomensionalShape
//{
//protected:
//	double r;
//	Point2D x;
//public:
//	Circle(const char* name1, double r1, Point2D p1) : twomensionalShape(name1), x(p1)
//	{
//		r = r1;
//	}
//	void puts()
//	{
//		cout << "圆的面积为:" << PAI * r * r << endl;
//	}
//	void putc()
//	{
//		cout << "圆的周长为:" << 2 * PAI * r << endl;
//	}
//	void show()
//	{
//		cout << "图形名: 圆" << endl;
//		cout << "圆心坐标为:"; x.print();
//		putc();
//		puts();
//	}
//};
//class Square :virtual public twomensionalShape
//{
//protected:
//	double x;
//	Point2D z;
//public:
//	Square(const char* name1, double x1, Point2D p) :twomensionalShape(name1), z(p)
//	{
//		x = x1;
//	}
//	void puts()
//	{
//		cout << "正方形面积为" << x * x << endl;
//	}
//	void putc()
//	{
//		cout << "正方形的周长为:" << 4 * x << endl;
//	}
//	void show()
//	{
//		cout << "图形名: 正方形" << endl;
//		cout << "正方形左上角坐标为:"; z.print();
//		putc();
//		puts();
//	}
//};
//class Triangle :virtual public twomensionalShape
//{
//protected:
//	double x[3];
//	Point2D z[3];
//public:
//	Triangle(const char* name1, double x1[3], Point2D p[3]) :twomensionalShape(name1)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			z[i] = p[i];
//			x[i] = x1[i];
//		}
//
//	}
//	void puts()
//	{
//		double p = putc() / 2;
//		cout << "三角形面积:" << sqrt(p * (p - x[0]) * (p - x[1]) * (p - x[2])) << endl;
//	}
//	double putc()
//	{
//		double c = x[0] + x[1] + x[2];
//		cout << "三角形周长为：" << c << endl;
//		return c;
//	}
//	void show()
//	{
//		cout << "图形名: 三角形" << endl;
//		cout << "三角形的三点坐标分别为:" << endl;
//		for (int i = 0; i < 3; i++)
//		{
//			z[i].print();
//		}
//		putc();
//		puts();
//	}
//};
//class Point3D
//{
//protected:
//	int x, y, z;
//public:
//	Point3D(int x1 = 0, int y1 = 0, int z1 = 0)
//	{
//		x = x1;
//		y = y1;
//		z = z1;
//	}
//	Point3D(const Point3D& s)
//	{
//		x = s.x;
//		y = s.y;
//		z = s.z;
//	}
//	void print()
//	{
//		cout << '(' << x << ',' << y << ',' << z << ')' << endl;
//	}
//};
//class threemensionalShape : public Shape
//{
//public:
//	threemensionalShape(const char* name1) :Shape(name1)//把name传进来
//	{}
//	virtual void show()
//	{
//		cout << "图形名:" << name << endl;
//	}
//};
//class Cube :public threemensionalShape
//{
//protected:
//	Point3D s;
//	double n;
//public:
//	Cube(const char* name1, double x, Point3D p) :threemensionalShape(name1), s(p)
//	{
//		n = x;
//	}
//	void puts()
//	{
//		cout << "正方体表面积:" << 6 * n * n << endl;
//	}
//	void putv()
//	{
//		cout << "正方体体积:" << n * n * n << endl;
//	}
//	void show()
//	{
//		cout << "图形名: 正方体" << endl;
//		cout << "正方体左上角坐标为:" << endl;
//		s.print();
//		puts();
//		putv();
//	}
//};
//class Sphere :public threemensionalShape
//{
//protected:
//	Point3D p;
//	double r;
//public:
//	Sphere(const char* name1, double r1, Point3D p1):threemensionalShape(name1),p(p1)
//	{
//		r = r1;
//	}
//	void puts()
//	{
//		cout << "球表面积:" << 4*PAI*r*r << endl;
//	}
//	void putv()
//	{
//		cout << "球体积:" << 4*PAI*r*r*r/3 << endl;
//	}
//	void show()
//	{
//		cout << "图形名: 球体" << endl;
//		cout << "球心坐标为:" << endl;
//		p.print();
//		puts();
//		putv();
//	}
//};
//int main()
//{
//	Shape* p[5];
//	Point2D x(1, 2);
//	Circle n1("Circle", 1, x);
//	Point2D x1(2, 2);
//	Square n2("Square", 2, x1);
//	Point2D px[3] = { (1,0),(-1.0),(0,1) };
//	double a[3] = { 1.414,2,1.414 };
//	Triangle n3("Triangle", a, px);
//	Point3D z(1, 1, 1);
//	Cube n4("Cube", 1, z);
//	Point3D z1(1, 1, 1);
//	Sphere n5("Sphere", 1, z1);
//	p[0] = &n1;
//	p[1] = &n2;
//	p[2] = &n3;
//	p[3] = &n4;
//	p[4] = &n5;
//	for (int i = 0; i < 5; i++)
//	{
//		p[i]->show();
//	}
//	return 0;
//}

