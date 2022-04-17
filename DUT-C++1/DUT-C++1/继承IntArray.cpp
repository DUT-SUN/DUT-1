//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class IntArray
//{
//public:
//	IntArray(int s = 10);
//	~IntArray();
//	IntArray(const IntArray& c);
//	int& operator[](int i);
//	friend ostream& operator <<(ostream& os, IntArray& c);
//	friend istream& operator >>(istream& is, IntArray& c);
//	IntArray& operator --();
//	IntArray& operator --(int);
//	IntArray& operator=(IntArray& c);
//protected:
//	int* pArr;  //数组首地址
//	int size;    //数组大小
//};
//IntArray::IntArray(int s)
//{
//	size = s;
//	pArr = new int[size];
//}
//IntArray::~IntArray()
//{
//	delete[]pArr;
//}
//IntArray::IntArray(const IntArray& c)
//{
//	size = c.size;
//	pArr = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		pArr[i] = c.pArr[i];
//	}
//}
//int& IntArray::operator[](int i)
//{
//	if (i > size || i < 1)
//	{
//		cout << "超出空间" << endl;
//		return pArr[0];
//	}
//	else
//	{
//		return pArr[i - 1];
//	}
//}
//ostream& operator <<(ostream& os, IntArray& c)
//{
//	os << "数组大小:" << c.size << endl;
//	os << "数组元素:";
//	for (int i = 0; i < c.size; i++)
//	{
//		os << c.pArr[i] << ' ';
//	}
//	os << endl;
//	return os;
//}
//istream& operator >>(istream& is, IntArray& c)
//{
//	cout << "输入数组大小:";
//	is >> c.size;
//	c.pArr = new int[c.size];
//	cout << "逐个输入数组元素:";
//	for (int i = 0; i < c.size; i++)
//	{
//		is >> c.pArr[i];
//	}
//	return is;
//}
//IntArray& IntArray::operator --()
//{
//	for (int i = 0; i < size; i++)
//	{
//		pArr[i]--;
//	}
//	return *this;
//}
//IntArray& IntArray::operator --(int)
//{
//	for (int i = 0; i < size; i++)
//	{
//		pArr[i]--;
//	}
//	return *this;
//}
//IntArray& IntArray::operator=(IntArray& c)
//{
//	size = c.size;
//	pArr = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			pArr[i] = c.pArr[i];
//		}
//	}
//	return *this;
//}
//class intSet :public IntArray
//{
//private:
//	int n ;
//public:
//	intSet(int s=0,int n=0);
//	intSet(int* x, int nn);
//	intSet(const intSet& c);
//	void add(int data);
//	bool del(int data);
//	intSet operator*(intSet& c);
//	intSet operator+(intSet& c);
//	friend ostream& operator <<(ostream& os, intSet& c);
//	friend istream& operator >>(istream& is, intSet& c);
//
//};
//intSet::intSet(int s,int n) :IntArray(s)
//{
//	this->n = n;
//}
//intSet::intSet(int* x, int nn) : IntArray(nn)
//{
//	n = nn;
//	for (int i = 0; i < n; i++)
//	{
//		pArr[i] = x[i];
//	}
//}
//void intSet::add(int data)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (pArr[i] == data)
//		{
//			return;
//		}
//	}
//	if (n < size)
//	{
//	
//		pArr[n++] = data;
//
//	}
//	else
//	{
//		int* x = new int[size * 2];
//		for (int i = 0; i < size; i++)
//		{
//			x[i] = pArr[i];
//		}
//		delete[]pArr;
//		
//		pArr = new int[size*2];
//		for (int i = 0; i < size; i++)
//		{
//			pArr[i] = x[i];
//		}
//		size *= 2;
//		pArr[n++] = data;
//	}
//
//
//}
//bool intSet::del(int data)
//{
//	if (data > n)
//	{
//		cout << "数组没有" << data << "号元素" << endl;
//		return false;
//	}
//	else
//	{
//			for (int i = 0; i < n; i++)
//			{
//				if (data == pArr[i])
//				{
//					pArr[i] = pArr[n - 1];
//					n--;
//					return true;
//				}
//			}
//	}
//}
//intSet::intSet(const intSet& c):IntArray(c)
//{
//	n = c.n;
//}
//intSet intSet:: operator*(intSet& c)
//{
//	int* x = new int[n> c.n?n:c.n];
//		int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < c.size; j++)
//		{
//			if (pArr[i] == c.pArr[j])
//			{
//				x[count++] = pArr[i];
//			}
//		}
//	}
//	intSet tmp(x, count);
//	delete[]x;
//	return tmp;
//}
//
//intSet intSet::operator+(intSet& c)
//{
//	int* x = new int[n + c.n];
//	int count = 0;
//	
//		for (int i = 0; i < n; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < count; j++)
//		{
//			if (pArr[i] == x[j])
//			{
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			x[count++] = pArr[i];
//		}
//	}
//	for (int i = 0; i < c.n; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < count; j++)
//		{
//			if (c.pArr[i] == x[j])
//			{
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			x[count++] = c.pArr[i];
//		}
//	}
//	intSet tmp(x, count);
//	delete[]x;
//    return tmp;
//}
//istream& operator >>(istream& is, intSet& c)
//{
//	cout << "输入构造数组大小和初始化元素个数：";
//	cin >> c.size >> c.n;
//		c.pArr = new int[c.size];
//		cout << "逐个输入数组元素:";
//		for (int i = 0; i < c.size; i++)
//		{
//			is >> c.pArr[i];
//		}
//		return is;
//}
//ostream& operator <<(ostream& os, intSet& c)
//{
//	os << "数组大小:" << c.size << endl;
//	os << "数组元素:";
//	for (int i = 0; i < c.n; i++)
//	{
//		os << c.pArr[i] << ' ';
//	}
//	os << endl;
//	return os;
//}
//int main()
//{
//	intSet a;
//	intSet b;
//	cin >> a;
//	a.add(1);
//	a.add(2);
//	a.add(3);
//	a.add(4);
//	a.add(5);
//	a.add(6);
//	a.del(4);
//	cout << a;
//	cin >> b;
//	intSet c= a + b;
//	intSet d = a * b;
//	cout << c;
//	cout << d;
//}