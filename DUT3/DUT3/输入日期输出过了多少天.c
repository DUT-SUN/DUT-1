//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int test1(int year)
//{
//
//
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("%d年为闰年\n", year);
//		return 1;
//	}
//	else if (year % 400 == 0)
//	{
//		printf("%d年为闰年\n", year);
//		return 1;
//	}
//	else
//		printf("%d年为平年\n", year);
//		return 0;
//}
//int test2(int year, int mon, int day, int x)
//{
//	if (x)
//	{
//		int i, sum = 0;
//		int a[12] = { 31,29,31,30,31,30,31,31 ,30 ,31 ,30 ,31 };
//		for (i = 0; i < mon - 1; i++)
//		{
//			sum += a[i];
//		}
//		return sum + day;
//	}
//	else
//	{
//		int i, sum = 0;
//		int a[12] = { 31,28,31,30,31,30,31,31 ,30 ,31 ,30 ,31 };
//		for (i = 0; i < mon - 1; i++)
//		{
//			sum += a[i];
//		}
//		return sum + day;
//	}
//}
//int main()
//{
//	int year, mon, day;
//	scanf("%d,%d,%d", &year, &mon, &day);
//	int x = test1(year);
//	int m=test2(year, mon, day, x);
//	printf("%d", m);
//
//}