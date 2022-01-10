//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void hanoi(int n, char x, char y, char z)
//{
//	if (n == 1)
//		printf("%d:%c-->%c\n", n, x, z);
//	else
//	{
//		hanoi(n - 1, x, z, y);
//		printf("%d:%c-->%c\n", n, x, z);
//		hanoi(n - 1, y,x, z);
//	}
//}
//int main()
//{
//
//	hanoi(3, 'A', 'B', 'C');
//	return 0;
//}
//#include<stdio.h>
//void test(int n, char x, char y, char z)
//{
//	if (n == 1)
//	{
//		printf("%d:%c->%c\n", n, x, z);
//	}
//	if (n > 1)
//	{
//		test(n - 1,x, z, y);
//		printf("%d:%c->%c\n", n,x ,z);
//		test(n - 1, y, x, z);
//
//	}
//}
//int main()
//{
//	int n;
//	char a = 'A'; 
//	char b = 'B';
//	char c='C';
//	test(2, a, b, c);
//	return 0;
//}