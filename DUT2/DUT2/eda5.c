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
//    /*第一种输入字符串a*/
//    scanf("%s", a);
//    /*第二种输入字符串a*/
//    p = a;
//    scanf("%s", p);
//    /*第三种输入字符串a*/
//    p = (char*)malloc(sizeof(char) * 20);
//    scanf("%s", p);/*没有考虑'\0'*/
//    /*第四种输入字符串a*/
//    for (i = 0; i < 10; i++)
//        scanf("%c", &a[i]);/*没有考虑'\0'*/
//    /*第五种输入字符串a*/
//    gets(a);
//    /*第六种输入字符串a*/
//    p = a;
//    gets(p);
//    printf("%s\n", a);
//    printf("%s\n", p);
//}


