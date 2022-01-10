//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////int main()
////{
////	int a, b, i;
////	printf("输入一个数：");
////	scanf("%d", &a);
////	for (b = 2; b < a; b++)
////	{
////		if (a % b == 0)
////		{
////			break;
////		}
////	}
////	if (b == a)
////	{
////		printf("它是素数");
////	}
////	else
////	{
////		printf("它不是素数\n%d=", a);
////		for (i = 2; i <= a;)
////		{
////			if (a % i == 0)
////			{
////				a = a / i;
////				printf("%d*", i);
////			}
////			else
////			{
////				i++;
////			}
////		}
////	}
////	printf("\b ");
////	return 0;
////}
//
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	int c;
//	printf("请输入一个值：");
//	scanf("%d", &n);
//	printf("%d=",n);
//	c = n;
//	for (i = 2; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//
//			printf("%d*", i);
//			n = n / i;
//			i--;
//		}
//		
//	}
//	printf("\b");
//	if (n== 1)
//	{
//		printf("它是素数");
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, i, sum;
//	for (i = 2; i <= 1000; i++)
//	{
//		sum = 0;
//		for (n = 1; n < i; n++)
//		{
//			if(i%n==0)
//			sum += n;
//		}
//		if (sum == i)
//			printf("%d ", i);
//
//	}
//}