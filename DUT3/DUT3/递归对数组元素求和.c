//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define N 5
//
//
////必须传长度进去，不然如果你就算设一个全局变量或者局部变量等于N-1也没用，他会
////一直改使循环一直执行下去
//int test(int arr[N],int len)
//{
//	
//	while (len >=1)
//	{
//		return test(arr,len - 1) + arr[len];
//	}
//	if (len == 0)
//		return arr[0];
//
//}
//int main()
//{
//	int arr[N];
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	int len = N - 1;
//	int sum = test(arr,len);
//	printf("%d", sum);
//	return 0;
//}