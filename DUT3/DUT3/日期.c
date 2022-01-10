//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//
//int run(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0)
//	{
//		return 366;
//	}
//	else if (x % 400 == 0)
//	{
//		return 366;
//	}
//	else
//	{
//		return 365;
//	}
//}
//int datetodays(int x, int y, int z)
//{
//	int i, sum = 0;
//	//2021.11.23从1970到2021
//	for (i = 1970; i < x; i++)
//	{
//		sum += run(i);
//	}
//	if (run(i) == 366)
//	{
//		int arr[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//		for (i = 0; i < y - 1; i++)
//		{
//			sum += arr[i];
//		}
//		return sum + z;
//	}
//	else
//	{
//		int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//		for (i = 0; i < y - 1; i++)
//		{
//			sum += arr[i];
//		}
//		return sum + z;
//	}
//
//}
//
//void daytodates(int n,int a[3])
//{
//	//18617
//	int i;
//	int x, y, z;
//	for (x = 1970; n > run(x); x++)
//	{
//		n -= run(x);
//	}
//	
//	a[0] = x;
//	if (run(x) == 366)
//	{
//		int arr[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//		for (y = 0; n > arr[y]; y++)
//		{
//			n -= arr[y];
//		}
//		a[1] = y + 1;
//		z = n;
//		a[2] = z;
//	}
//	else
//	{
//		int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//		for (y = 0; n > arr[y]; y++)
//		{
//			n -= arr[y];
//		}
//		a[1] = y + 1;
//		z = n;
//		a[2] = z;
//	}
//}
//datevalidity(int x, int y, int z)
//{
//	int flag = 0;
//	if (x >= 1970 && x <= 2050)
//	{
//		if (y >= 1 && y <= 12)
//		{
//			if (x % 4 == 0 && x % 100 != 0)
//			{
//				printf("年份合法为闰年\n");
//				flag = 1;
//			}
//			else if (x % 400 == 0)
//			{
//				printf("年份合法为闰年\n");
//				flag = 1;
//			}
//			else
//			{
//				printf("年份合法为平年\n");
//			}
//			if (flag)
//			{
//
//				int arr[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//				if (z > 0 && z <= arr[y - 1])
//				{
//					printf("日期合格\n");
//				}
//				else
//				{
//					printf("日期不合格\n");
//
//				}
//			}
//			else
//			{
//
//			}
//		}
//		else
//		{
//			printf("月份不合法\n");
//			return 0;
//		}
//	}
//	else
//	{
//		printf("年份不合法");
//		return 0;
//	}
//
//}
//
//int main()
//{
//	//int x, y, z;
//	//int sum;
//	//scanf("%d.%d.%d", &x, &y, &z);
//	//datevalidity(x, y, z);
//	//sum=datetodays(x, y, z);
//	//printf("%d\n", sum);
//	//int*p=daytodates(18617);
//	//printf("%d年%d月%d日", *p, *(p + 1), *(p + 2));
//	int x1, y1, z1;
//	int x2, y2, z2;
//	int x3, y3, z3;
//	int a[3] = { 0 };
//	int n;
//	scanf("%d.%d.%d", &x1, &y1, &z1);
//	scanf("%d.%d.%d", &x2, &y2, &z2);
//	int days1 = datetodays(x1, y1, z1);
//	int days2 = datetodays(x2, y2, z2);
//	printf("%d\n", days1 - days2 > 0 ? days1 - days2 : days2 - days1);
//	scanf("%d.%d.%d", &x3, &y3, &z3);
//	int days3=datetodays(x3, y3, z3)-1;
//	printf("%d\n", days3);
//	daytodates(days3+1,a);
//	printf("%d年%d月%d日\n", a[0], a[1], a[2]);
//	printf("星期%d\n", (days3+3)%7+1);
//	scanf("%d",&n);
//	daytodates(days3+ 1+ n, a);
//	printf("%d年%d月%d日\n", a[0], a[1], a[2]);
//	
//	return 0;
//}
