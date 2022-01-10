//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int count_1(int n)
//{
//
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_1(a);
//	printf("%d", count);
//
//	return;
//第二种方法
//#include<stdio.h>
//int main()
//{
//	int n, count = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//变式考察
//考你输入2个数有多少位不同
//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	scanf("%d,%d", &a,& b);
//	int c = a ^ b;
//	int count = 0;
//		while (c != 0)
//		{
//			c = c & (c - 1);
//			count++;
//		}
//		printf("%d", count);
//
//
//	return 0;
//}