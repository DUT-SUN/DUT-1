//#define _CRT_SECURE_NO_WARNINGS 1
//1.字符指针(char*)  

//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char*pc=arr;
//	printf("%s", *pc);
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串,它并不是说把字符串放到p里了
// //想想都知道，这个字符串7个字节，一个指针才4个字节拿猴子搞进去
// //那么这个其实是把a的首地址放到了p中
// 
//	//*p = 'w';//这个是根本无法运行的，因为这个字符串是常量字符串不可以更改
//	// segmentfault段错误：访问非法内存、需要怎么样呢，写程序就应该在char前加const
//	// 这样*p就不能被改了
//	//其实是把a的地址存给p
//	printf("%c", *p);
//     printf("%s",p);
//	return 0;
//}
//#include<stdio.h>//面试题
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char *p2 = "abcdef";
//
//	if (arr1 == arr2)//这两个a的地址可不同啊我曹
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)//我曹了，因为"abcdef"是常量字符串，所以不会存2份，所以两个指针都是指向同一块区域
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//指针数组
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形数组的数组-指针数组
//	char* pch[5];//存放字符指针的数组-指针数组
//	return 0;
//}
//#include<stdio.h>//指针数组不能用这么低级的太拉了
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int i;
//	int* arr[4] = { &a,&b,&c,&d };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", *arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
