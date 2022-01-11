//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//	int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//可以把1的拷贝到2，覆盖
//
//	return 0;
//}
//memset 就是memory内存set设置
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr[] = "helloworld";
//	memset(arr, 'a', 5);
//		printf("%s", arr);
//	return 0;
//}
//注意用自定义swap函数intxinty这样是不能交换swap（a，b）的因为它只是交换了x和y的值
////
//void swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
//void swap2(int* pa, int* pb)
//{
//
//int	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	scanf_s("%d,%d", &a,& b);
//	//int a = 10;
//	//int *pa = &a;
//	//*pa = 20;
//	//printf("%d", a);
//	swap1(a, b);
//	printf("%d,%d", a, b);
//	swap2(&a,& b);
//	printf("%d,%d", a, b);
//	return 0;
//}
////注意了！！！！！！外部传参进函数时，为了避免内存浪费，只会传递形参数组的首位的地址
//int binary_search(int arr[], int k,int right)//将right在函数外部声明多传一个right进来就行；不然你用数组大小比其中一个整形其实是为1；
//{
//	int left = 0;
//	
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = binary_search(arr, k,right);
//	if(ret==-1)
//	{
//		printf("找不到指定的数字");
//	}
//	else
//	{
//		printf("找到了下标是：%d", ret);
//	}
//	return 0;
//}
//void add(int* p)
//{
//	++* p;//*p++是不可以的因为加加优先级高于*，所以*p的值没改变，++*p或者（*p）++都是可以的
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d", num);
//	add(&num);
//	printf("%d", num);
//	return 0;
//}
////函数可以嵌套调用
////链式访问把一个函数的返回值作为另一个函数的参数。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
///*	int len = 0;
//	len=strlen("abc");
//	printf("%d\n", len)*/;
//	printf("%d\n",strlen("abc"))
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d",printf("%d", printf("%d", printf("%d", 43))));//每个printf都有输出值和返回值，最里面的printf输出43，返回2，次一层输出2返回1，最后一层输出1返回1后来加个printf验证猜想
//
//	return 0;
//}
//
//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int n = add(a, b);
//	printf("%d\n", n);
//
//	return 0;
//}
//
////按理来说不能运行来着，vs这个版本还是可以运行，如果以后报错说add没定义可以在使用前声明
////例如int Add（int，int）;
