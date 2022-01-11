//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	INT_MAX;//整形最大值上面引入头文件，然后查看这个的定义你就会发现它的最大值
//	int a = 2;
//	int b = 3;
//	//int 4个字节-32bit的空间，-最大值
//	a = a + b;//!!!!!!!!!!这种方法有一定问题，假如a和b是两个特别大的整形相加后超出了整形最大值，那么就会出现问题
//	b = a - b;
//	a = a - b;
//
//	printf("%d", a);
//	printf("%d", b);
//}
//2方法也可以可以取按位异或相同为0相异为1