//#define _CRT_SECURE_NO_WARNINGS 1
////指针数组int *arr[5]
////数组指针int(*p)[5]=&arr;
////函数指针int(*p)(int,int)=&add
////函数指针数组int(*p[5])(int,int)
////函数指针数组指针int(*(*p)[5])(int,int)
//#include<stdio.h>
//#include<stdlib.h>
////void bubble_sort(int arr[], int sz)
////{
////	int i = 0;
////	int j;
////	for (i = 0; i < sz-1; i++)
////	{
////	
////		for (j = 0; j < sz - i-1; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////			}
////		}
////	}
////}
//
//void swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort1(void*base,int sz,int width,int (*cmp)(void*e1,void*e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{//两个元素的比较
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				//交换
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	bubble_sort1(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
