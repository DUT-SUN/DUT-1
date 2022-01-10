////#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////int main()
////{
////	int length = 11;
////	int fibonacci[10] = { 0,1 };
////	for (int i = 2; i < length; ++i)
////		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
////	for (int i = 0; i < length; ++i)
////	{
////		if (i % 8 == 0)
////			printf("\n");
////		printf("%d\t", fibonacci[i]);
////		
////	}
////	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	int i;
//	int arr[10] = { 0,1 };//第一次自己写错因为定义的时候没有给定数组大小
//	for (i = 2; i < x; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	for (i = 0; i < x; i++)
//	{
//		printf("%d\t", arr[i]);
//		if (i % 5 == 0)
//			printf("\n");
//
//	}
//	return 0;
//}