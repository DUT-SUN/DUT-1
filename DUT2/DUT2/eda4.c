#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<string.h>
////void swap(char* buf1, char* buf2)
////{
////	int i;
////	for (i = 0; i < 1; i++)
////	{
////		char tmp = *buf1;
////		*buf1 = *buf2;
////		*buf2 = tmp;
////		buf1++;
////		buf2++;
////	}
////}
////
////int cmp(const void* e1, const void* e2)
////{
////	return strcmp(*(char*)e1, *(char*)e2);
////}
////void sortstr(char** base)
////{
////
////	int i = 0;
////	for (i = 0; i < 7; i++)
////	{
////		int j = 0;
////		for (j = 0; j <  7-i; j++)
////		{//两个元素的比较
////			if (cmp((char*)base + j , (char*)base + (j + 1) ) > 0)
////			{
////				//交换
////				swap((char*)base + j , (char*)base + (j + 1) );
////			}
////		}
////	}
////
////}
////void sortstr(char**s)
////{
////
////		int j = 0;
////		for (j = 0; j < 4; j++)
////		{
////			 
////		}
////	
////}
//int main()
//{
//	int i;
//	int j;
//	char arr[5][8] = { "Tom","Leo","Charlie","Sunny","Sundy" };
//
//
//	
//	//sortstr(arr);
//	char* s = &arr;//arr是第一行的地址
//	char** ss = &s;
//	printf("%c", **ss);
//	//int a = 1;
//	//int* p = &a;
//	//int** p1 = &p;
//	
//
///*if (strcmp(**ss, *(*ss+1)) < 0)
//	{
//		printf("1");
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	return 0;
//}
//
////#include<stdio.h>
////#include<stdlib.h>
//////void bubble_sort(int arr[], int sz)
//////{
//////	int i = 0;
//////	int j;
//////	for (i = 0; i < sz-1; i++)
//////	{
//////	
//////		for (j = 0; j < sz - i-1; j++)
//////		{
//////			if (arr[j] > arr[j + 1])
//////			{
//////				int temp = arr[j];
//////				arr[j] = arr[j + 1];
//////				arr[j + 1] = temp;
//////			}
//////		}
//////	}
//////}
////
////void swap(char* buf1, char* buf2,int width)
////{
////	int i = 0;
////	for (i = 0; i < width; i++)
////	{
////		char tmp = *buf1;
////		*buf1 = *buf2;
////		*buf2 = tmp;
////		buf1++;
////		buf2++;
////	}
////}
////void bubble_sort1(void*base,int sz,int width,int (*cmp)(void*e1,void*e2))
////{
////	int i = 0;
////	for (i = 0; i < sz - 1; i++)
////	{
////		int j = 0;
////		for (j = 0; j < sz - i - 1; j++)
////		{//两个元素的比较
////			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
////			{
////				//交换
////				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
////			}
////		}
////	}
////}
////int cmp_int(const void*e1, const void*e2)
////{
////	return *(int*)e1 - *(int*)e2;
////}
////int main()
////{
////	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	//bubble_sort(arr, sz);
////	bubble_sort1(arr, sz, sizeof(arr[0]), cmp_int);
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d", arr[i]);
////	}
////	return 0;
////}

//

//void sortstr(char** s)
//{
//	int i, j;
//	char tmp[5] = { 0 };
//	for (i = 0; i < 4; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (strcmp(*s+i, *s + j) > 0)
//			{
//				
//				strcpy(tmp, *s + j);
//				strcpy(*s + j, *s + i);
//				strcpy(*s + i, tmp);
//			}
//		}
//	}
////	printf("%c\n", *s);
////	printf("%c", );
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//	char arr[5][8] = { "Tom","Leo","Charlie","Sunny","Sundy" };
//	char** s = arr;
//	//printf("%c",*((char*)s+8));
//	printf("%x\n", s);
//	printf("%x\n", arr);
//	printf("%x\n", *s);
//	return 0;
//
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void sort1(char(*p1)[10], int num)       //用数组指针的方法
//{
//	for (int i = num - 1; i >= 1; --i)      //冒泡排序法，排列出字符串的大小
//	{
//		for (int j = 0; j < i; ++j)         //每次将排序序列最大的字符串放在最后一位
//		{
//			if (strcmp(p1[j], p1[j + 1]) > 0)  //如果p1[j]的字符串长度大于p1[j+1],则进行字符串地址的交换
//			{
//				char Tmp[10];
//				strcpy(Tmp, p1[j]);
//				strcpy(p1[j], p1[j + 1]);
//				strcpy(p1[j + 1], Tmp);
//			}
//		}
//	}
//	for (int i = 0; i < num; ++i)
//	{
//		puts(p1[i]);
//	}
//}
//void sort2(char** p2, int num)          //用二级指针的方法
//{
//	for (int i = num - 1; i >= 1; --i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			if (strcmp(p2[j], p2[j + 1]) > 0)
//			{
//				char* Tmp = p2[j];
//				p2[j] = p2[j + 1];
//				p2[j + 1] = Tmp;
//			}
//		}
//	}
//	for (int i = 0; i < num; ++i)
//	{
//		puts(p2[i]);
//	}
//}
//int main()
//{
//	char arr[5][10] = { "wwwwwww", "aaaaaaaa", "ffffffff", "eeeeeeeee", "yyyyyyyy" };
//	sort1(arr, 5);
//	char* p[5] = { "wwwwwww", "aaaaaaaa", "ffffffff", "eeeeeeeee", "yyyyyyyy" };    //二级指针参数位置传入指针数组的地址
//	for (int i = 0; i < 5; ++i) {
//		p[i] = arr[i];      //p[i]中的每个p值都是每个字符串的首地址
//	}
//	sort2(p, 5);
//	return 0;
//}


#include<stdio.h>
int  main()
{
	printf("%d",-5%3 );
	return 0;
}