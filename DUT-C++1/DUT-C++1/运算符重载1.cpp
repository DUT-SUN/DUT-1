//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<math.h>
//using namespace std;
//int gcd(int a, int b)
//{
//    return b == 0 ? a : gcd(b, a % b);
//}
//// 最小公倍数：两数乘积除以最大公约数
//int lcm(int a, int b)
//{
//    return a / gcd(a, b) * b;
//}
//class Rational {
//
//	int m;   // 分母
//
//	int n;   // 分子
//
//	double d;   //  n/m
//
//	void simple(); //约分
//
//public:
//	Rational(int nn = 1, int mm = 1);
//	bool setM(int x);//不能为0
//	void setN(int y);
//	
//	void print();
//	Rational operator *(const Rational& c);
//	bool operator >(const Rational& c);
//	bool operator <(const Rational& c);
//	void operator -(void);
//	void operator -(double x);
//	void operator -(const Rational& c);
//};
////请给出重载以下运算符的函数的定义形式
////
////1）重载算术运算符“ * ”，实现分数的乘法操作
////
////2）重载比较运算符“ > ”"<"，实现分数的比较操作
////
////3）重载单目运算符“ - ”，实现分数的取反操作
////
////4）重载双目运算符“ - ”，实现一个double数据与分数的减法, 两个分数的减法
//Rational Rational::operator*(const Rational& c)
//{
//	m = m * c.m;
//	n = n * c.n;
//	simple();
//	return Rational(n, m);
//}
//bool Rational::operator >(const Rational& c)
//{
//	
//	int z=lcm(m, c.m);
//	if (n * z / m > c.n * z / c.m)
//		return true;
//	else
//		return false;
//}
//bool Rational::operator <(const Rational& c)
//{
//
//	int z = lcm(m, c.m);
//	if (n * z / m < c.n * z / c.m)
//		return true;
//	else
//		return false;
//}
//void Rational::operator -(void)
//{
//
//	m = -m;
//}
//void Rational::operator -(double x)
//{
//	double c = x - (int)x;
//	int i = 0;
//	while (c != 0)
//	{
//		x *= 10;
//		i++;
//	    c = x - (int)x;
//	}
//	Rational m(x, pow(10, i));
//	m.simple();
//	*this - m;
//}
//void Rational::operator-(const Rational& c)
//{
//	int nn = n;
//	int mm = m;//储存没减之前的值
//	n = n * c.m - c.n * m;
//	m = m * c.m;
//	simple();
//	cout << nn << '/' << mm << '-' << c.n << '/' << c.m << '=' << n << '/' << m << endl;
//}
//Rational::Rational(int nn, int mm)
//{
//
//	if (setM(mm))
//	{
//		m = mm;
//		setN(nn);
//	}
//}
//bool Rational::setM(int x)
//{
//	if (x == 0)
//	{
//		cout << "分母为0不合法" << endl;
//		return false;
//	}
//	else
//	{
//		m = x;
//		return true;
//	}
//}
//void Rational::setN(int y)
//{
//	n = y;
//}
//void Rational::print()
//{
//	cout << n << '/' << m << endl;
//}
//void Rational::simple()
//{
//
//	// 分子为0，则分母为1
//	if (n == 0)  m = 1;
//	// 如果分母为负数，则分子分母变号
//	if (m < 0)
//	{
//		m = -m;
//		n = -n;
//	}
//
//	// 约分: 分子分母同时除以最大公约数
//	int x = gcd(abs(n), abs(m));
//	n /= x;
//	m /= x;
//
//}
//int main()
//{
//	Rational a(1, 2);
//	Rational b(2, 3);
//	a* b;
//	a.print();//此时a为1/3
//	-a;
//	a.print();//此时a为-1/3
//	if (a < b)
//	{
//		cout << "a比b小" << endl;
//	}
//	else
//	{
//		cout << "a比b大" << endl;
//	}
//	if (a > b)
//	{
//		cout << "a比b大" << endl;
//	}
//	else
//	{
//		cout << "a比b小" << endl;
//	}
//	a-2.73;
//	a.print();
//}