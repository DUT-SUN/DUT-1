//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<math.h>
//using namespace std;
//// 最大公约数：辗转相除法
//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//// 最小公倍数：两数乘积除以最大公约数
//int lcm(int a, int b)
//{
//	return a / gcd(a, b) * b;
//}
//class Rational
//{
//private:
//	int m;
//	int n;
//public:
//	Rational(int nn = 1, int mm = 1);
//	bool setM(int x);//不能为0
//	void setN(int y);
//    Rational R_add(const Rational& A);
//	void R_sub(Rational& A, Rational& B);
//	Rational R_mul(Rational& A);
//	void R_div(Rational& A, Rational& B);
//	void simple();
//	void print();
//};
//Rational::Rational(int nn, int mm)
//{
//
//	if (setM(mm))
//	{
//		m = mm;
//	    setN(nn);
//	}
//
//	
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
//
//void Rational::print()
//{
//	cout << n << '/' << m << endl;
//}
//void Rational::simple()
//{
//
//	// 分子为0，则分母为1
//	if (n == 0)  m= 1;
//	// 如果分母为负数，则分子分母变号
//	if (m < 0)
//	{
//		m = -m;
//      n= -n;
//	}
//
//	// 约分: 分子分母同时除以最大公约数
//	int x = gcd(abs(n), abs(m));
//	n /= x;
//	m /= x;
//
//}
//Rational Rational::R_add(const Rational& A)
//{
//	m = m * A.m;//3
//	n = n * A.m + m * A.n;//5
//	return Rational(n, m);
//}
//void Rational::R_sub(Rational& A, Rational& B)
//{
//	int x, y;
//	n = A.n * B.m - B.n * A.m;
//	m = A.m * B.m;
//	simple();
//	cout << A.n << '/' << A.m << '-' << B.n << '/' << B.m << '=' << n << '/' << m << endl;
//}
//Rational Rational::R_mul(Rational& A)
//{
//	m = m * A.m;
//	n = n * A.n;
//	simple();
//	return Rational (n, m);
//}
//void Rational::R_div(Rational& A, Rational& B)
//{
//	n = A.n * B.m;
//	m = A.m * B.n;
//	simple();
//	cout << A.n << '/' << A.m <<' ' << '/' <<' '<< B.n << '/' << B.m << '=' << n << '/' << m << endl;
//}
//int main()
//{
//	Rational c1(2, 4);
//	Rational c2(1, 1);
//	Rational c3;
//	Rational c4(1, 0);
//	c1.R_add(c2).print();//此时c1值变为3/2
//	c1.simple();
//	c1.print();
//	c3.R_sub(c1, c2);//c3现在由c1-c2为1/2
//	c1.R_mul(c2).print();//c1为3/2*1
//	c2.R_div(c1, c3);//3/2除1/2
//	c2.print();//c2在c2.R_div的时候变成3/1
//}