//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void test(int* arr, int sz)
//{
//	int i;
//	for (i = 0; i < sz / 2; i++)
//	{
//		int tmp = *(arr + i);
//		*(arr + i) = *(arr + sz - i - 1);
//		*(arr + sz - i - 1) = tmp;
//	}
//}
//int main()
//{
//	int arr[11] = { 12,34,56,98,35,46,78,90,36,23,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr, sz);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d,%d", a, b);
//	return 0;
//}
//#include<stdio.h>
//void sum_diff(float op1, float op2, float* psum, float* pdif)
//{
//	*psum = op1 + op2;
//	*pdif = op1 - op2;
//}
//int main()
//{
//	float a = 1;
//	float b = 2;
//	float c, d;
//	float* psum = &c;
//	float* pdif = &d;
//	sum_diff(a, b, psum, pdif);
//	printf("%f,%f", *psum, *pdif);
//	return 0;
//}
//#include<stdio.h>
//void test(float x)
//{
//	printf("%.1d\n", (int)x);
//	printf("%f", x -(int)x);
//}
//int main()
//{
//	float x;
//	scanf("%f", &x);
//
//	test(x);
//		return 0;
//}
//#define n 10
//#include<stdio.h>
//void test1(int arr[n],float* average,int* max,int *min)
//{
//	int i = 0;
//	float sum = 0;
//	int imin = arr[0];
//	int imax = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i];
//		if (arr[i] < min)
//		{
//			imin = arr[i];
//		}
//		if (arr[i] > max)
//		{
//			imax = arr[i];
//		}
//	}
//	*min = imin;
//	*max = imax;
//	*average = sum/n;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a, b;
//	float c;
//	int* max = &a;
//	int* min = &b;
//	float* average = &c;
//	test1(arr,average,max,min);
//	printf("%d,%d,%f", *max, *min, *average);
//
//	return 0;
//}