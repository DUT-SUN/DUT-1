////#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////#include<string.h>
////int main()
////{
////	char a[100]= "abcdefghigklmnopqrstuvwxyz";
////	//目的：替换
////	//我的思路分解目标：1.找到ab，2.判断b和c的长度如果相等直接替换(注意\0)，b大于c那么替换完后连接，
////	//b小于c先将数组后移再替换
////	char b[10];
////	char c[10];
////	printf("输入你需要替换的字符串:");
////	scanf("%s", b);
////	printf("输入你要替换为的字符串:");
////	scanf("%s", c);
////	char* p = a;//将指针初始化为a
////	char* s = &a[strlen(a)];
////	char* linkafter = a;
////	while (p != NULL)
////	{
////		p = strstr(linkafter, b);
////		if (p != NULL)
////		{
////			if (strlen(b) == strlen(c))
////			{
////				strcpy(p, c);
////				strcat()
////				//int i = 0;
////				//while (*(p + strlen(b)+i) == 0&& *(p+strlen(b)+i+1)!=0)//思考是否能够改p最后面有\0
////				//{
////				//	*(p + strlen(b)+i) = *(p + strlen(b)+i + 1);
////				//	*(p + strlen(b)+i + 1) = 0;
////				//	i++;
////				//}
////			}
////		}
////	}
////	printf("%s", a);
////	return 0;
////}
////
////#include<stdio.h>
////#include<string.h>
////#include<stdlib.h>
////int main()
////{
////	char a[100] = "abcdef";
////	char b[10] = "ab";
////	char* p = strstr(a, b);
////	int i, j;
////	char *p1=(char*)calloc(1,)
////	for (i = p + strlen(b), j = 0; i < strlen(a) + 1; i++)
////	{
////
////	}
////
////	printf("%s", c);
////	return 0;
////}
//
//
////老师写的
//#include<stdio.h>
//#include<string.h>
//char* replace(char* a, char* b, char* c)
//{
//	char* q, * p;
//	int blength = strlen(b);
//	p = a;
//	q = a;
//	char d[80] = { '\0' };
//	while (p)
//	{
//		q = p;
//		p = strstr(q, b);
//		if (p)
//		{
//			*p = '\0';
//			strcat(d, q);
//			strcat(d, c);
//			p += blength;
//		}
//		else
//		{
//			strcat(d, q);
//		
//		}
//	}
//	strcpy(a, d);
//	return a;
//}
//int main()
//{
//	char a[80] = "abcdebc12121bcdw";
//	char b[20] = "bc";
//	char c[20] = "4567";
//	replace(a, b, c);
//	puts(a);
//	return 0;
//}