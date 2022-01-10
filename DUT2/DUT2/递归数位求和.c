////#define _CRT_SECURE_NO_WARNINGS 1//下面才是递归
////#include<stdio.h>
////int sum = 0;
////int  Digitsum(int num)
////{
////	while (num)
////	{
////		 sum += num % 10;
////		 num /= 10;
////		 
////	}
////	return sum;
////}
////int main()
////{
////	unsigned int num = 0;
////	scanf("%d", &num);
////	int sum=Digitsum(num);
////	printf("%d", sum);
////	return 0;
////
////}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int  Digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return Digitsum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = Digitsum(num);
//	printf("%d\n", ret);
//	return 0;
//}