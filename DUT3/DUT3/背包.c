//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int knap(int a[], int n, int s)
//{
//	if (s == 0)
//	{
//		return 1;
//	}
//	else if (s < 0 || s>0 && n < 1)
//		return 0;
//	else if (knap(a, n - 1, s - a[n]))
//	{
//		printf("%d\t", a[n]);
//		return 1;
//	}
//	else
//
//		return knap(a, n - 1, s);
//
//}
//	
//int main()
//{
//	int s = 14;
//	int a[7] = { 0,5, 3,6,2,3,6 }; 
//	knap(a, 6, 14); 
//	return 0;
//}