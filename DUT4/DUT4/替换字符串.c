////#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////#include<string.h>
////int main()
////{
////	char a[100]= "abcdefghigklmnopqrstuvwxyz";
////	//Ŀ�ģ��滻
////	//�ҵ�˼·�ֽ�Ŀ�꣺1.�ҵ�ab��2.�ж�b��c�ĳ���������ֱ���滻(ע��\0)��b����c��ô�滻������ӣ�
////	//bС��c�Ƚ�����������滻
////	char b[10];
////	char c[10];
////	printf("��������Ҫ�滻���ַ���:");
////	scanf("%s", b);
////	printf("������Ҫ�滻Ϊ���ַ���:");
////	scanf("%s", c);
////	char* p = a;//��ָ���ʼ��Ϊa
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
////				//while (*(p + strlen(b)+i) == 0&& *(p+strlen(b)+i+1)!=0)//˼���Ƿ��ܹ���p�������\0
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
////��ʦд��
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