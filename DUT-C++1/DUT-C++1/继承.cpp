//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#define PAI 3.14
//using namespace std;
//class Point
//{
//protected:
//	int x;
//	int y;
//public:
//	Point(int xx , int yy );
//	void set(int xx, int yy);
//	void print();
//};
//Point::Point(int xx, int yy)
//{
//	x = xx;
//	y = yy;
//}
//void Point::set(int xx, int yy)
//{
//	x = xx;
//	y = yy;
//}
//void Point::print()
//{
//	cout << "坐标:" << '(' << x << ',' << y << ')' << endl;
//}
//class Square :protected Point
//{
//protected:
//	double leng;
//public:
//	Square(int xx , int yy , double m);
//	void set(int xx, int yy, double m);
//	void print();
//	double s();
//	void sprint();
//};
//Square::Square(int xx, int yy, double m):Point(xx, yy)
//{
//	leng = m;
//}
//void Square::set(int xx, int yy, double m)
//{
//	Point::set(xx, yy);
//	leng = m;
//}
//void Square::print()
//{
//	cout << "正方形左上角";
//	Point::print();
//	cout << "宽度:" << leng << endl;
//}
//double Square::s()
//{
//	return leng * leng;
//}
//void Square::sprint()
//{
//	cout << "正方形面积为:" << this->s() << endl;
//}
//
//
//class Circle :protected Point
//{
//protected:
//	double r;
//public:
//	Circle(int xx, int yy, double rr);
//	void set(int xx, int yy, double rr);
//	void print();
//	double s();
//	void sprint();
//};
//Circle::Circle(int xx, int yy, double rr):Point(xx, yy)
//{
//	r = rr;
//}
//void Circle::set(int xx, int yy, double rr)
//{
//	Point::set(xx, yy);
//	r = rr;
//}
//void Circle::print()
//{
//	cout << "圆心";
//	Point::print();
//	cout << "半径:" <<r << endl;
//}
//double Circle::s()
//{
//	return PAI * r * r;
//}
//void Circle::sprint()
//{
//	cout << "圆半径为:" << this->s() << endl;
//}
//class Cube :protected Square
//{
//private:
//	double height;
//public:
//	Cube(int xx, int yy, double m, double h);
//	void set(int xx, int yy, double m,double h);
//	void print();
//	double v();
//	double s();
//	void sprint();
//	void vprint();
//};
//Cube::Cube(int xx, int yy, double m, double h):Square(xx, yy, m)
//{
//	
//	height = h;
//}
//void Cube::set(int xx, int yy, double m,double h)
//{
//	Square::set(xx, yy, h);
//	height = h;
//}
//void Cube::print()
//{
//	cout << "正方体底面";
//	Square::print();
//	cout << "正方体高度:" << height << endl;
//}
//double Cube::v()
//{
//	return Square::s() * height;
//}
//double Cube::s()
//{
//	return Square::s() * 6;
//}
//void Cube::sprint()
//{
//	cout << "正方体表面积为:" << this->s()<<endl;
//}
//void Cube::vprint()
//{
//	cout << "正方体体积为:" << this->v()<<endl;
//}
//class Cylinder :protected Circle
//{
//private:
//	double height;
//public:
//	Cylinder(int xx, int yy, double r, double h);
//	void set(int xx, int yy, double rr, double h);
//	void print();
//	double v();
//	double s();
//	void sprint();
//	void vprint();
//};
//Cylinder::Cylinder(int xx, int yy, double r, double h):Circle(xx, yy, r)
//{
//	
//	height = h;
//}
//void Cylinder::set(int xx, int yy, double rr, double h)
//{
//	Circle::set(xx, yy, rr);
//	height = h;
//}
//void Cylinder::print()
//{
//	cout << "圆柱底面";
//	Circle::print();
//	cout << "圆柱高为:" << height << endl;
//}
//double Cylinder::v()
//{
//	return Circle::s() * height;
//}
//double Cylinder::s()
//{
//	return 2 * Circle::s() + 2*PAI * r * height;
//}
//void Cylinder::sprint()
//{
//	cout << "圆柱的表面积为:" << this->s() << endl;
//}
//void Cylinder::vprint()
//{
//	cout << "圆柱的体积为:" << this->v() << endl;
//}
//int main()
//{
//	Cube a(2, 2, 2, 2);
//	a.print();
//	a.set(1, 1, 1, 1);
//	a.print();
//	a.sprint();
//	a.vprint();
//	Cylinder b(3, 4, 5, 6);
//	b.print();
//	b.set(1, 1, 1, 1);
//	b.print();
//	b.sprint();
//	b.vprint();
//}