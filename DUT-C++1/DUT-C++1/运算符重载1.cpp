//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<math.h>
//using namespace std;
//int gcd(int a, int b)
//{
//    return b == 0 ? a : gcd(b, a % b);
//}
//// ��С�������������˻��������Լ��
//int lcm(int a, int b)
//{
//    return a / gcd(a, b) * b;
//}
//class Rational {
//
//	int m;   // ��ĸ
//
//	int n;   // ����
//
//	double d;   //  n/m
//
//	void simple(); //Լ��
//
//public:
//	Rational(int nn = 1, int mm = 1);
//	bool setM(int x);//����Ϊ0
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
////�������������������ĺ����Ķ�����ʽ
////
////1����������������� * ����ʵ�ַ����ĳ˷�����
////
////2�����رȽ�������� > ��"<"��ʵ�ַ����ıȽϲ���
////
////3�����ص�Ŀ������� - ����ʵ�ַ�����ȡ������
////
////4������˫Ŀ������� - ����ʵ��һ��double����������ļ���, ���������ļ���
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
//	int mm = m;//����û��֮ǰ��ֵ
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
//		cout << "��ĸΪ0���Ϸ�" << endl;
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
//	// ����Ϊ0�����ĸΪ1
//	if (n == 0)  m = 1;
//	// �����ĸΪ����������ӷ�ĸ���
//	if (m < 0)
//	{
//		m = -m;
//		n = -n;
//	}
//
//	// Լ��: ���ӷ�ĸͬʱ�������Լ��
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
//	a.print();//��ʱaΪ1/3
//	-a;
//	a.print();//��ʱaΪ-1/3
//	if (a < b)
//	{
//		cout << "a��bС" << endl;
//	}
//	else
//	{
//		cout << "a��b��" << endl;
//	}
//	if (a > b)
//	{
//		cout << "a��b��" << endl;
//	}
//	else
//	{
//		cout << "a��bС" << endl;
//	}
//	a-2.73;
//	a.print();
//}