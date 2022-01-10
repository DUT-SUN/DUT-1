//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//指针数组int*arr[5]
// 1一维数组传参     以下不可运行
//void test(int arr[])传入一个整形数组
//void test(int arr[10])传入一个大小为10的整形数组
//{}
//void test(int *arr)//传入一个指针
//{}
//void test2(int*arr[20])正好对应
//{}
//void test2(int **arr)指针数组的首元素是个指针，将这个首元素地址传进来当然可以用二级指针来接受
//{}

//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//2二维数组传参
//#include<stdio.h>
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int *arr)
//{}错误
//void test(int**arr)
//{}错误
//void test(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组的首元素地址是第一行的地址
//	return 0;
//}
//3一级指针传参//参数为一级指针那么它能够传过去的是一个变量的地址或者存这个变量地址的一级指针
//4二级指针传参//参数为二级指针那么它能够传过去的是一级指针的地址（比如传过去指针数组数组名）
//或者存这个一级指针地址的二级指针
// 函数指针——指向函数的指针（与数组指针一起记忆）
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int b = 20;
//	int a = 10;
//	printf("%d\n",add(a, b));
//	printf("%p", add);//函数也有地址
//	printf("%p", &add);//这两个意义都是函数的地址
//	int (*pa)(int, int) = add;//pa指向一个函数，返回为int。
//	printf("%d", (*pa)(2, 3));
//	
//	return 0;
//}
//代码1：
//(*(void (*)())0)();
// //把0强制类型转化成函数指针类型，然后对他解引用然后调用0地址处的函数
//代码2
//void(*    signal(int ,void(*)(int))    )(int)；//函数的声明
//将函数指针和一个整形传入signal这个函数，返回类型就是函数指针
//代码二简化
//typedef void(*pfun_t)(int);//注意新起的名字在函数里面，和typedef unsigned int uint;不一样不是放后面
//pfun_t signal(int, pfun_t);
//假如现在有一个add函数，pa是add函数的指针然后调用的时候可以pa(2,3),也可以(*pa)(2,3)括号不能丢额
//或者pa前面*********都可以没有意义

//函数指针数组
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//#include<stdio.h>
//int main()
//{
//	
//	int(*   pa[4]   )(int, int) = { add,sub,mul,div };//这个怎么理解呢？
//	//pa先指向【4】说明pa是个4个元素的数组，然后元素类型是函数指针，函数参数为int int返回值为int
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",pa[i](2, 3));
//	}
//	return 0;
//}

//写一个函数指针pf，能够指向my_strcpy
//写一个函数指针数组pfarr能够存放my_strcpy函数的地址能够存放4个my_strcpy的地址

//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)//添加const为了防止while语句写反两个指针变量，这样就会提示报错，这样就不会出现拷贝失败，但是程序运行成功
////2次优化后的代码，当src是\0的时候就是0这个循环就进不去了。
//{
//		assert(dest != NULL);//顶级代码
//		assert(src != NULL);//断言运行后如果发现了src是空指针就会报错，并且显示报错位置，需要引头文件
//		char*ret = dest;
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	
//	return ret;
//}
//
//int main()
//{
//	char*(*pf)(char*, char*) = &my_strcpy;
//	char a[6] = "abcde";
//	char b[6] = "cdefg";
//	char* x1 = &a;
//	char* x2 = &b;
//	
//	printf("%s\n", (*pf)(x1, x2));
//	char* (*pfarr[5])(char*, char*) = { pf };
//	printf("%s", pfarr[0](x1, x2));
//		return 0;
//}
