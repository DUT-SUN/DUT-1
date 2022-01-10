////程序调用自身的编程技巧称为递归,递归常见错误栈溢出（stack overflow）
////内存分为栈区（放局部变量函数形参）堆区（放动态开辟的内存malloc calloc）
////还有静态区（全局变量，static修饰的变量）
//#include<stdio.h>
//int main()
//{
//printf("hehe\n");
//main();
//return 0;
//}//那么这样main函数一直互相调用那么这样就会将栈区占满，就会出现报错
//#include<stdio.h>//倒序输出
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//do
//	{
//		printf("%d", num%10);
//		num = num / 10;
//} while (num!= 0);
//
//
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	
//
//	}
//	printf("%d ", n % 10);
//}
//#include < stdio.h>
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	return 0;
//}
//题目不能创建临时变量，来输出字符串长度；下面这个使用了临时变量count；
//int my_strlen(char *str)//1
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		(*str)++;
//	}
//	return count;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int my_strlen(char* str)//2
//{
//	if (*str != '\0')
//	{
//		return 	1 + my_strlen(str + 1);
//
//	}
//	else
//		return 0;
//
//
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	
//} 
////求n的阶层（递归）
//
//#include<stdio.h>//循环
//int main()
//{
//	int ret = 1;
//	int n;
//	scanf_s("%d",& n);
//	for (int i = 1; i <= n; i++)
//		ret *= i;
//	printf("%d", ret);
//
//	return 0;
//}
//int fac(int n)//(递归)（没写全）
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//

//求斐波那契数列的第n个值
//1 1 2 3 5 8 13 21 34
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret =fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int FIB(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = a + b;
//	/*for (int i = 3; i < n; i++)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}//我写的，后面这两种为什么要写呢，因为用递归运算及其负责，光是调用n=3的数就调用上千万次（可打印证明）
//	return c;*/
//	while(n > 2)
//	{
//	c = a + b;
//	a = b;
//	b = c;
//	n--;//老师写的（少写变量）
//}
//	return c;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int nb = FIB(n);
//	printf("%d", nb);
//	return 0;
//}
//汉诺塔问题和青蛙跳台阶（1次跳一个台阶也可以一次跳2个台阶，跳到第n个台阶有多少种跳法）《剑指offer》
