//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()//38
//{
//	int i;
//	char s[100]; int c;
//	scanf("%c", &c);
//	
//	scanf("%d", &i);
//	scanf("%s", s);
//	printf("%c,%d,%s\n", c, i, s);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i;
//	char s[] = "ab\n\012\\\"";
//	for (i = 0; i < 7; i++)
//	{
//		printf("%c", s[i]);
//	}
//	printf("%d", strlen(s));
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[] = "\\141\141abc\t";
//	printf("%d", strlen(s));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	static char str[] = "beijing";
//	printf("%d\n", strlen(strcpy(str, "china")));
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	char cf[3][5] = { "AAAA","BBB","CC" };
//	printf("\"%s\"\n", cf[1]);
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	printf("%d", a[2]);
//
//}
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int k;
//	char w[][10] = { "abcd","efgh","igkl","mnop" };
//	for(k=0;k<3;k++)
//	printf("%s\n", &w[k][k]);
//	return 0;
//}
//#include<stdio.h>
//#define   N   5
//
//main()
//{int  i,j,number,top,bott,min,loca,a[N],flag;
//char  c;//这是一串特别长的代码，输入顺序数再输入一个数就可以显示他的位置
//printf("please  input  5 numbers  a[i]>a[i-1]\n");
//scanf("%d",&a[0]);   i=1;while(i<N){scanf("%d",&a[i]);  if(a[i]>=a[i-1])   i++;}  printf("\n");for(i=0;i<N;i++)    printf("%4d",a[i]);  printf("\n");flag=1;while(flag){ scanf("%d",&number);  loca=0; top=0;  bott=N-1;if ((number<a[0])||(number>a[N-1]))   loca=-1;while((loca==0)&&(top<=bott)){min=(bott+top)/2;if(number==a[min]){loca=min;printf("%d is the %dth  number\n",number,loca+1);}else if  (number<a[min])   bott=min-1;else top=min+1;}if (loca==0||loca==-1)   printf("%d  is not  in the list \n",number);c=getchar();if (c=='N' || c == 'n')   flag = 0; } }
//#include<stdio.h>
//int main()
//{
//	int  a[3][3] = { 1,2,3,4,5,6,7,8,9 }, i, s1 = 0, s2 = 1;
//	for (i = 0; i <= 2; i++)
//	{
//		s1 = s1 + a[i][i];
//		s2 = s2 * a[i][i];
//	}; printf("s1=%d,s2=%d", s1, s2);
//
//	return 0;
//}
//1. 以下程序运行结果是 ___s1=15,s2=45_____.
//#include<stdio.h>
//main()
//{
//	int  a[3][3] = { 1,2,3,4,5,6,7,8,9 }, i, s1 = 0, s2 = 1;
//	for (i = 0; i <= 2; i++)
//	{
//		s1 = s1 + a[i][i];
//		s2 = s2 * a[i][i];
//	}
//	printf("s1=%d,s2=%d", s1, s2);
//}
//12. 以下程序完成功能是：计算两个3 * 4阶矩阵相加，并打印出结果。请填空。
//#include<stdio.h>
//main()
//{
//	int  a[3][4] = { {3,-2,1,2},{0,1,3,-2},{3,1,0,4} };
//	int  b[3][4] = { {-2,3,0,-1},{1,0,-2,3},{-2,0,1,-3} };
//	int  i, j, c[3][4];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			c[i][j] = a[i][j] + b[i][j];
//		}
//	}
//			for (i = 0; i < 3; i++)
//			{
//				for (j = 0; j < 4; j++)
//				{
//					printf("%d", c[i][j]); 
//					printf("\n");
//				}
//			}
//}
////13. 以下程序的运行结果是________.
//#include<stdio.h>
//main()
//{
//	int  i, j, a[3][3];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i == 3)  a[i][j] = a[i - 1][a[i - 1][j]] + 1;
//			else      a[i][j] = j; printf("%4d", a[i][j]);
//		}       printf("\t");
//	}
//}
////14. 阅读下列程序:
//#include<stdio.h>
//main() {
//	int i, j, row, column, m;
//	static int array[3][3] = { { 100, 200, 300 }, { 28, 72, -30 }, { -850, 2, 6 } };
//	m = array[0][0];
//	for (i = 0; i < 3; i++
//		)for (j = 0; j < 3; j++)
//		if (array[i][j] < m) {
//			m = array[i][j]; row = i; column = j;
//		}printf("%d,%d,%d\n", m, row, column);
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char x[] = "abcdefg";
//	char y[] = { 'a','b','c','d','e','f','g' };
//	printf("%d\n", strlen(x));
//	printf("%d\n", strlen(y));
//	return 0;
//}
//#include<stdio.h>
//#define   N  6
//main()
//{
//    char  c[N];
//    int   i = 0;
//    for (; i < N; c[i] = getchar(), i++);
//    for (i = 0; i < N; i++)   putchar(c[i]);
//    printf("\n");
//}
//
//#include <string.h>
//main()
//{
//    char  a[] = "clanguage", t;
//    int  i, j, k;
//    k = strlen(a);
//    for (i = 0; i <= k - 2; i += 2)
//        for (j = i + 2; j <= k;j+=2 )
//            if (a[i]>a[j])
//            {
//                t = a[i]; a[i] = a[j]; a[j] = t;
//            }
//    puts(a);
//    printf("\n");
//}
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char  str[10], temp[10]; int  i;
//	gets(temp);
//	for (i = 0; i < 4; i++)
//	{
//		gets(str);
//		if (strcmp(temp, str) > 0) strcpy(temp, str);
//	}
//	printf("\nThe first string is:%s\n", temp);
//}
//#include <stdio.h>
//main()
//{
//    char   str1[100], str2[100], c;
//    int  i, s;
//    printf("\n input string 1:\n");    gets(str1);
//    printf("\n input string 2:\n");    gets(str2);
//    i = 0;
//    while ((str1[i] == str2[i]) && (str1[i] !="\0"))
//        i++;
//    s =str1[i] -str2[i];
//    printf("%d\n", s);
//}
//
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	int i;
//	char str[10], temp[10];
//	gets(temp);
//	for (i = 0; i < 4; i++)
//	{
//		gets(str);
//		if (strcmp(temp, str) < 0) strcpy(temp, str);
//	}
//	printf("%s\n", temp);
//}
//

//#include <stdio.h>
//#include <ctype.h>
//main()
//{
//    int num[26], i; char c;
//    for (i = 0; i < 26; i++) num[i] = 0;
//    while ( != '#')    /*统计从终端输入的大写字母个数*/
//        if (isupper(c))  num[c - 65] += 1;
//    for (i = 0; i < 26; i++)            /*输出大写字母和该字母的个数*/
//        if (num[i]) printf("%c:%d\n", i  【2】, num[i]);
//#include<stdio.h>
//int main()
//{
//	char   x[] = "language";
//	char   y[] = "llngga";
//	int   i = 0;
//	while (x[i] != '\0' && y[i] != '\0')
//	{
//		if (x[i] == y[i])  printf("%c", x[i]);
//		 i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//main()
//{
//    char  s[81];
//    int   i, c, num = 0, word = 0;
//    gets(s);
//    for (i = 0; (c = s[i]) !='\0'; i++)
//        if (c == 32)  word = 0;
//        else if (word == 0) { word = 1; num++; }
//    printf("there  are  %d  words.\n", num);
//}
//
//fun(int  x, int  y, int  z)
//{
//	z = x * x + y * y;
//}
//
//#include<stdio.h>
//int main()
//{
//
//	
//		int  a = 31;
//		fun(5, 2, a);
//		printf("%d", a);
//		return 0;
//	
//}//!!!!!!!!!!!!!!!!!!
//#include<stdio.h>
//void func1(int  i);
//void func2(int  i);
//char st[] = "hello,friend!";
//void func1(int  i)
//{
//	printf("%c", st[i]);
//	if (i < 3) { i += 2; func2(i); }
//}
//void func2(int  i)
//{
//	printf("%c", st[i]);
//	if (i < 3) { i += 2; func1(i); }
//}
//main()
//{
//	int i = 0;
//	func1(i);
//	printf("\n");
//}
//#include<stdio.h>
//
//float fun(int x, int y)
//{
//	return(x + y);
//}
//main()
//{
//	int a = 2, b = 5, c = 8;
//	printf("%3.0f\n", fun((int)fun(a + c, b), a - c));//保留3位有效数字，然后那个.0是保留到小数点后0位
//}
//#include "stdio.h"
//int  abc(int u, int v);
//main()
//{
//	int a = 24, b = 16, c;
//	c = abc(a, b);
//	printf("%d\n", c);
//}
//int abc(int u, int v)
//{
//	int  w;
//	while (v)
//	{
//		w = u % v;  u = v;  v = w;
//	}
//	return u;
//}
//#include<stdio.h>
//f(int  b[], int  m, int  n)
//{
//	int  i, s = 0;
//	for (i = m; i < n; i = i + 2)  s = s + b[i];
//	return  s;
//}
//main()
//{
//	int  x, a[] = { 1,2,3,4,5,6,7,8,9 };
//	x = f(a, 3, 7);
//	printf("%d\n", x);
//}
//#include<stdio.h>
//void reverse(int a[], int n)
//{
//	int  i, t;
//	for (i = 0; i < n / 2; i++)
//	{
//		t = a[i]; a[i] = a[n - 1 - i]; a[n - 1 - i] = t;
//	}
//}
//main()
//{
//	int  b[10] = { 1,2,3,4,5,6,7,8,9,10 }; int i, s = 0;
//	reverse(b, 8);
//	for (i = 6; i < 10; i++) s += b[i];
//	printf("%d\n", s);
//}
//#include<stdio.h>
//func(int a, int b)
//{
//	int c;
//	c = a + b;
//	return c;
//}
//main()
//{
//	int x = 6, y = 7, z = 8, r;
//	r = func((x--, y--, x + y), z--);???????????
//	printf("%d\n", r);
//}
//#include<stdio.h>
//f(int b[], int n)
//{
//	int i, r;
//	r = 1;
//	for (i = 0; i <= n; i++) r = r * b[i];
//	return r;
//}
//main()
//{
//	int x, a[] = { 2,3,4,5,6,7,8,9 };
//	x = f(a, 3);
//	printf("%d\n", x);
//}
//
//  
//#include<stdio.h>
//main()
//{
//	int t = 1;
//	fun(fun(t));
//}
//fun(int h)
//{
//	static int a[3] = { 1,2,3 };
//	int k;
//	for (k = 0; k < 3; k++) a[k] += a[k] - h;
//	for (k = 0; k < 3; k++) printf("%d", a[k]);
//	printf("\n"); return(a[h]);
//}
//#include<stdio.h>
//func(int x)
//{
//	int p;
//	if (x == 0 || x == 1) return 3;
//	p = x - func(x - 2);
//	return p;
//}
//main()
//{
//	printf("%d\n", func(9));
//}
//#include "stdio.h"
//int i = 5;
//main()
//{
//	int i = 3;
//	{ int i = 10; i++; }
//	f1();
//	i += 1;
//	printf("%d\n", i);
//}
//int f1()
//{
//	i = i + 1;
//	return(i);
//}
//#include<stdio.h>
//int  a, b;
//void fun()
//{
//	a = 100; b = 200;
//}
//main()
//{
//	int  a = 5, b = 7;
//	fun();
//	printf("%d%d\n", a, b);
//}
//#include<stdio.h>
//main()
//{
//	int i;
//	for (i = 0; i < 2; i++)  add();
//}
//add()
//{
//	int x = 0; static int y = 0;
//	printf("%d,%d\n", x, y);
//	x++; y = y + 2;
//}
//#include<stdio.h>
//f(int a)
//{
//	int b = 0;
//	static int c = 3;
//	b++;  c++;
//	return(a + b + c);
//}
//main()
//{
//	int a = 2, i;
//	for (i = 0; i < 3; i++)  printf("%d\n", f(a));
//}
//#include<stdio.h>
//int a = 3;
//main()
//{
//	int s = 0;
//	{ int a = 5;  s += a++; }
//	s += a++; printf("%d\n", s);
//}
//#include<stdio.h>
//int m = 13;
//int fun2(int x, int y)
//{
//	int m = 3;
//	return(x * y - m);
//}
//main()
//{
//	int a = 7, b = 5;
//	printf("%d\n", fun2(a, b) / m);
//}
//
//#include <stdio.h>
//f(int a)
//{
//	int b = 0; static c = 3;
//	a = c++, b++;
//	return (a);
//}
//main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)  k = f(a++);
//	printf("%d\n", k);
//}
//#include<stdio.h>
//int d = 1;
//fun(int p)
//{
//	int d = 5;
//	d += p++;
//	printf("%d", d);
//}
//main()
//{
//	int a = 3;
//	fun(a);
//	d += a++;  printf("%d\n", d);
//}
//#include<stdio.h>
//int   d = 1;
//fun(int  p)
//{
//    static int d = 5;
//    d += p;
//    printf("%d ", d);
//    return(d);
//}
//main()
//{
//    int a = 3;
//    printf("%d \n", fun(a + fun(d)));
//}
//void a(int b, int arr[10])
//{
//	int i;
//	b = 3;
//	for (i = 0; i < 10; i++)
//		arr[i]++;
//}
//#include<stdio.h>//数组会被改变但是传进去的数如果被赋值但是没有被接受那照样还是他本来的值
//int main()
//{
//int	b = 2;
//int arr[10] = {0};
//a(b, arr);
//printf("%d",b);
//int i = 0;
//for (; i < 10; i++)
//	printf("%d", arr[i]);
//
//	return 0;
//}
//19．下面函数的功能是计算 ，请填空。
//#include<stdio.h>
//double fun(int n)
//{
//	double s = 0.0, fac = 1.0;
//	int  i;
//	for (i = 1; i <= n; i++)
//	{
//		fac = 1/i;
//		s = s + fac;
//	}
//	return s;
//}
//main()
//{
//	int x=fun(2);
//	printf("%d", x);
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[10] = " ", *st = "abcde"; strcat(str, st);
//	printf("%s", str);
//}
//#include<stdio.h>//strcpy需要拷贝\0
//strcpy1(char* p1, char* p2) { while (*p2) *p1++ = *p2++; }
//int main()
//{
//	char a[] = "abcdefg";
//	char b[] = "cde";
//	strcpy1(a, b);
//	printf("%s", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char s[] = "\ta\041bc";
//	printf("%s", s);
//	return 0;
//	
//}