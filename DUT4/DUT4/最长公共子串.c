//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = "bcdesadsd";
//	char b[] = "abcd";
//	char c[20] = "\0";//初始化为了后续比较
//	char* p = b;
//	int i, j;
//	int sz = strlen(b);
//	for (i = 0; i <sz; i++)
//	{
//		*(p + sz - i) = '\0';//每次把最后一个改成\0
//		for (j = 0; j < sz - i; j++)//前面每次起点加一
//		{
//			char*q=strstr(a, p + j);//在a中去找p+j这个字符串
//			if (q != NULL)
//			{
//				if (strlen(c)<strlen(p+j))//注意strlen不能减是无符号整形
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
