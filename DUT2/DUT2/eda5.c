//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i;
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	char arr[101];
//	scanf("%s", arr1);
//	scanf("%s", arr2);
//	for (i = 99; i >=0 ; i--)
//	{
//		if (arr1[i] + arr2[i] > '0' + '9')
//		{
//			arr[i] = arr1[i] + arr2[i] - '9' - 1;
//			if (i >= 1)
//			{
//				++arr1[i - 1];
//			}
//		}
//		else
//		{
//			arr[i] = arr1[i] + arr2[i]-'0';
//
//		}
//
//	}
//	printf("%s", arr);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//    char a[10];
//    char* p;
//    int i;
//    /*��һ�������ַ���a*/
//    scanf("%s", a);
//    /*�ڶ��������ַ���a*/
//    p = a;
//    scanf("%s", p);
//    /*�����������ַ���a*/
//    p = (char*)malloc(sizeof(char) * 20);
//    scanf("%s", p);/*û�п���'\0'*/
//    /*�����������ַ���a*/
//    for (i = 0; i < 10; i++)
//        scanf("%c", &a[i]);/*û�п���'\0'*/
//    /*�����������ַ���a*/
//    gets(a);
//    /*�����������ַ���a*/
//    p = a;
//    gets(p);
//    printf("%s\n", a);
//    printf("%s\n", p);
//}


