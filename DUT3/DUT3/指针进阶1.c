//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>//数组指针
//int main()
//{
//	int* p = NULL;//整形指针
//	char* pc = NULL;//字符指针
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*int* p = &arr; 对吗？肯定不对
//		int* p[10] = &arr;对吗？那肯定不对*/
//	int(*p)[10] = &arr;//*和方括号，p会先和【】结合所以加括号就阔以了
//	
//	return 0;
//}
////char* arr[5];
////char* (*pa)[5]=&arr;那么这个pa怎么表示呢
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{//这个pa放的是首元素的地址但是解引用其实是数组，而且加1也是跳过这么大个数组的空间
//		printf("%d", (*pa)[i]);//如果只是打印那真的就离谱了int*p=arr;就阔以实现了
//
//	}
//	return 0;
//}
//参数是数组的形式
//#include<stdio.h>
//printf1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//参数是指针的形式
//void printf2(int(*p)[5], int x, int y)//这个p现在存的第一行的数组地址，但是加一就直接就是第二行数组的地址了
//{
//
//	int i = 0;
//	for (i = 0; i < x; i++)//经我验证p和*p一样印证猜想
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));//p是首元素地址,解引用后拿到这个数组，而这个数组也就是首元素地址
//			printf("%d", (*(p+i))[j]);//这里的*(p+i)是每一行首元素地址，就和int *p=a[5],打印p[5]一样
//		}
//		printf("\n");
//	
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7,} };
//	//printf1(arr, 3, 5);
//	printf("\n");
//	printf2(arr, 3, 5);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 1,2,3,4,5 };
//	int(*p) = &a;
//	int(*q) = &b;
//	int(*parr3[10])[5] = {p,q};
//	printf("%d", (*parr3[0])[1]);//这个parr是一个10个元素的数组，每个元素类型是一个数组指针
//	//每个数组指针指向的是元素为5的数组，数组元素类型为整形，我现在打印的就是
//	//parr3【0】解引用拿到第一个数组，然后【1】拿到那个数组第二个元素
//	return 0;
//}
