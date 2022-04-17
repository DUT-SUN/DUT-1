//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int* num;
//	int n;
//	int i;
//	cin >> n;
//	int *ptr = &i;
//	(*ptr) = 10;
//	//引用类型 T& 变量名=已有变量； 
//	//引用类型就是产生一个别名
//	//refi就是i的别名
//	int& refi = i;
//	num = new int[n];//new动态申请空间
//	for (i = 0; i < n; i++)
//	{
//		cin >> num[i];
//	}
//	int maxv = num[0];
//	for (i = 1; i < n; i++)
//	{
//		if (maxv < num[i])maxv = num[i];
//	}
//	cout << maxv;
//	delete[]num;
//	return 0;
//}