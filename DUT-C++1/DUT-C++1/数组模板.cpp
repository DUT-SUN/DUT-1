#define _CRT_SECURE_NO_WARNINGS 1
//定义函数模版Sort<T>实现对各种类型数组的排序
#include<iostream>
using namespace std;
template <class T>
void Sort(T* a,int n)
{
	T temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
template<>void Sort(char**a, int n)
{
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(a[i],a[j])>0)
			{
				char* p = new char [n];
				strcpy(p, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], p);
				delete p;
			}
		}
	}
}
int main()

{
	int a[5] = { 2,7,5,1,3 };
	Sort(a, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	char c[5] = { 'd','a','b','a','e' };
	Sort(c, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << c[i] << ' ';
	}
	cout << endl;
	char* b[5];
	b[0] = new char[10];
	strcpy(b[0],"123");
	b[1] = new char[10];
	strcpy(b[1], "12");
	b[2] = new char[10];
	strcpy(b[2], "abde");
	b[3] = new char[10];
	strcpy(b[3], "aaaa");
	b[4] = new char[10];
	strcpy(b[4], "bab");
	Sort(b, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << *(b+i) << endl;
	}
}