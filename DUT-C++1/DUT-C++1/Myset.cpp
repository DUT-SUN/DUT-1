//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//const int NUM = 10; // 集合最大容量 
//
//class MySet {
//	int s[NUM];
//	int* p;
//	int size = 0;  //集合中有效元素的个数
//public:
//	MySet(int n = 0);  // int n为集合大小，空集合元素都为0
//	MySet(int n[], int sz);
//	MySet(const MySet& c);
//	bool add(int data);
//	bool del(int data);
//	MySet operator*(MySet& c);
//	MySet operator+(MySet& c);
//	void operator=(MySet& c);
//	void print();
//};
//
//MySet::MySet(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s[i];
//		size++;
//	}
//}
//MySet::MySet(int n[], int sz)
//{
//	if (sz > NUM)
//	{
//		p = new int[sz];
//		size = sz;
//		for (int i = 0; i < sz; i++)
//		{
//			p[i] = n[i];
//		}
//	}
//	else
//	{
//		size = sz;
//		for (int i = 0; i < sz; i++)
//		{
//			s[i] = n[i];
//		}
//	}
//}
//
//MySet::MySet(const MySet& c)
//{
//for (int i = 0; i < c.size; i++)
//	{
//		s[i] = c.s[i];
//	}
//	size = c.size;
//}
//bool MySet::add(int data)
//{
//	if (size < NUM)
//	{
//		s[size++] = data;
//		return true;
//	}
//	else if (size > NUM && size < 2*NUM)
//	{
//		p[size++] = data;
//	}
//	else 
//	{
//		cout << "集合已满,error!" << endl;
//		return false;
//	}
//}
//bool MySet::del(int data)
//{
//	if (size <= NUM)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			if (data == s[i])
//			{
//				s[i] = s[size - 1];
//				size--;
//				return true;
//			}
//		}
//	}
//	else
//	{
//		for (int i = 0; i < size; i++)
//		{
//			if (data == p[i])
//			{
//				p[i] = p[size - 1];
//				size--;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//MySet MySet::operator*(MySet& c)
//{
//	int count = 0;
//	int x[NUM];
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < c.size; j++)
//		{
//			if (s[i] == c.s[j])
//			{
//				x[count++] = s[i];
//			}
//		}
//	}
//	MySet tmp(x, count);
//	return tmp;
//}
//MySet MySet::operator+(MySet& c)
//{
//
//	/*MySet tmp(size + c.size);*/
//	int x[2*NUM];
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < count; j++)
//		{
//			if (s[i] == x[j])
//			{
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			x[count++] = s[i];
//		}
//	}
//	for (int i = 0; i < c.size; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < count; j++)
//		{
//			if (c.s[i] == x[j])
//			{
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			x[count++] = c.s[i];
//		}
//	}
//	MySet tmp(x, count);
//	return tmp;
//}
//void MySet::operator=(MySet& c)
//{
//	int* s = new int[c.size];
//	for (int i = 0; i < c.size; i++)
//	{
//		s[i] = c.s[i];
//	}
//	size = c.size;
//}
//void MySet::print()
//{
//	if (size <= NUM)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << s[i]<<' ';
//		}
//		cout << endl;
//	}
//	else
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << p[i]<<' ';
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	MySet a(7);
//	MySet b(9);
//	a.add(14);
//	a.del(2);
//	MySet c = a * b;
//	c.print();
//	MySet d = a + b;
//	d.print();
//}
