//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void sortstr(char(*s)[30])
//{
//	int i, j, min;
//	char temp[30];
//	for (i = 0; i < 9; i++)
//	{
//		min = i;
//		for (j = i + 1; j < 10; j++)
//		{
//			if (strcmp(s+min,s + j)>0)
//			{
//				min = j;
//			}
//			if (min != i)
//			{
//				strcpy(temp,s+i);
//				strcpy(s+i, s + j);
//				strcpy(s + j, temp);
//			}
//		}
//	}
//}
//int main()
//{
//	char arr[10][30] = { "c language","php","go","python","java","javascript","shell","http","c++","c#" };
//	sortstr(arr);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}