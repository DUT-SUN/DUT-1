//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = "bcdesadsd";
//	char b[] = "abcd";
//	char c[20] = "\0";//��ʼ��Ϊ�˺����Ƚ�
//	char* p = b;
//	int i, j;
//	int sz = strlen(b);
//	for (i = 0; i <sz; i++)
//	{
//		*(p + sz - i) = '\0';//ÿ�ΰ����һ���ĳ�\0
//		for (j = 0; j < sz - i; j++)//ǰ��ÿ������һ
//		{
//			char*q=strstr(a, p + j);//��a��ȥ��p+j����ַ���
//			if (q != NULL)
//			{
//				if (strlen(c)<strlen(p+j))//ע��strlen���ܼ����޷�������
//				{
//					strcpy(c, p+j);
//				}
//			}
//		}
//	}
//	printf("%s", c);
//
//	return 0;
//}
