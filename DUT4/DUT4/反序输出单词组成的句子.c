

//#define _CRT_SECURE_NO_WARNINGS 1//对的裂解输出
//#include<stdio.h>
//#include<string.h>
//int split(char* a, char(*b)[80])
//{
//	char c[80];
//	strcpy(c, a);
//	char* q;
//	char* p = c;
//	int num = 0;
//	while (p)
//	{
//		q = p;
//		p = strstr(q, " ");
//		if (p)
//		{
//			*p = '\0';
//			strcpy(b[num++], q);
//			*p = ' ';
//			while (*p == ' ')//找到下一个非空格的字符
//			{
//				p++;
//			}
//		}
//		else
//		{
//			strcpy(b[num++], q);
//		}
//	}
//	return num;
//}
//	int main()
//	{
//		char a[80];
//		gets(a);
//		char b[20][80];
//	
//		int num = split(a, b);
//		int i;
//	
//		for (i = num-1; i >= 0; i--)
//		{
//			printf("%s ",b[i]);
//		}
//
//		return 0;
//	}
//
//#include<stdio.h>
//#include<string.h>
//void reverse(char* a)
//{
//	char b[80];
//	char c[80] = { 0 };
//	int i, j = 0, k, m = 0, alen = strlen(a);
//	for (i = alen - 1; i >= 0; i--)
//	{
//		if (a[i] != ' ')
//			b[j++] = a[i];
//
//		else
//		{
//			if (j != 0)
//			{
//				for (k = j - 1; k >= 0; k--)
//				{
//					c[m++] = b[k];
//
//				}
//				j = 0;
//			}
//				c[m++] = ' ';
//		}
//	}
//	if (j != 0)
//	{
//		for (k = j - 1; k >= 0; k--)
//		{
//			c[m++] = b[k];
//
//		}
//		j = 0;
//	}
//	strcpy(a, c);
//}
//int main()
//{
//	char a[80] = " i love you";
//	reverse(a);
//	puts(a);
//	return 0;
//}
