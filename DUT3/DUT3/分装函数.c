//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#define N 100
//void test(int a[N+1])
//{
//	int i;
//srand(time(0));             //(1)放在循环里面怎么样 
//for (i = 1; i <= N; i++)
//{
//	a[i] = rand() % 1000 + 1;    //(2)生成随机数不重复怎么做 
//}
//for (i = 1; i <= N; i++)
//{
//	printf("%5d", a[i]);
//	if (i % 10 == 0)printf("\n");
//}
//
//a[37] = 100;}
//void test1(int value,int a[N+1])
//{
//	int address = 0;  
//	int i;
//	for (i = 1; i <= N; i++)
//	{
//		if (a[i] == value)
//			address = i;
//	}
//	if (address)
//		printf("顺序查找，位置在%d\n", address);
//	else
//		printf("顺序查找没有找到\n");
//}
//int main() {
//	int a[N + 1];
//	int  j, l, r, m, t;
//	int value = 100; //查找值
//	int address = 0;
//	int i;
//	test(a);
//	test1(value, a);
//	return 0;
//}