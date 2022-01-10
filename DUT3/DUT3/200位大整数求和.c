//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i;
//	int j = 0;
//	static char arr1[201];
//	static char arr2[201];
//	static char arr[202];
//	scanf("%s", arr1);
//	int len1 = strlen(arr1);
//	for (j = 0,i=len1-1; j < len1&&i>=0; j++,i--)
//	{
//		char temp = arr1[i];
//		arr1[i] = arr1[200 - j];
//		arr1[200 - j] = temp;
//	}
//	scanf("%s", arr2);
//	int len2 = strlen(arr2);
//	for (j = 0, i = len2 - 1; j< len2&&i>=0; j++,i--)
//	{
//		char temp = arr2[i];
//		arr2[i] = arr2[200 - j];
//		arr2[200 - j] = temp;
//	}
//	if (len1 >= len2)
//	{
//		for (i = 200 - len1+1; i <= 200 - len2; i++)
//		{
//			arr2[i] = '0';
//		}
//		for (i = 200; i > 200 - len1; i--)
//		{
//		
//			if (arr1[i] + arr2[i] > '9' + '0')
//			{
//				arr[i] = arr1[i] + arr2[i] - '9' - 1;
//				arr1[i - 1]++;
//				if ((arr1[i - 1] == ':') && (arr2[i - 1] == '0'))
//					arr[i - 2] = '1';
//
//			}
//	
//			else
//				arr[i] = arr1[i] + arr2[i] - '0';
//		}
//		for (i = 201 - len1-1; i <= 200; i++)
//		{
//			printf("%c", arr[i]);
//		}
//	}
//	else 
//	{
//		for (i = 200 - len2 + 1; i <= 200 - len1; i++)
//		{
//			arr1[i] = '0';
//		}
//		for (i = 200; i > 200 - len2; i--)
//		{
//			if (arr1[i] + arr2[i] > '9' + '0')
//			{
//				arr[i] = arr1[i] + arr2[i] - '9'-1;
//				arr2[i - 1]++;
//				if ((arr2[i - 1] == ':') && (arr1[i - 1] == '0'))
//					arr[i - 2] = '1';
//
//			}
//			else
//				arr[i] = arr1[i] + arr2[i] - '0';
//		}
//		for (i = 201 - len2-1; i <= 200; i++)
//		{
//			printf("%c", arr[i]);
//		}
//	}
//
//
//
//
//	return 0;
//}