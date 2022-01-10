//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//char* mystrcat(char a[], char b[])
//{
//	char* p1 = a;
//	char* p2 = b;
//	while (*p1++);
//	p1--;
//	while (*p1++ = *p2++);
//	return a;
//}
//int main()
//{
//	char a[100] = "hello";
//	char b[90];
//	printf("输入你要连接hello到后面的字符串：");
//	scanf("%s", b);
//	printf("%s\n", mystrcat(a, b));
//	return 0;
//}
// //老师写的
//#include<stdio.h>
//char* mycat(char* a, char* b)
//{
//	int i = 0, j = 0;
//	while (a[i])
//		i++;
//	while (b[j])
//	{
//		a[i++] = b[j++];
//	}
//	a[i] = '\0';
//}
//int main()
//{
//	char a[80] = "abcde";
//	char b[20] = "123";
//	mycat(a, b);
//	printf("%s", a);
//	return 0;
//}
