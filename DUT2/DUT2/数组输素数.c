//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i, j, a[101] = { 0 };
//	for (i = 2; i < 50; i++)//在2到50中排掉2的倍数，3的倍数。。。。
//	{
//		if (!a[i])
//			for (j = 2; i * j < 100; j++)
//				a[i * j] = 1;
//	}
//	for (i = 2; i < 100; i++)//上一步将有因子的变成了1那么现在能打印的都是素数
//		if (!a[i])
//			printf("%d\t", i);
//
//}