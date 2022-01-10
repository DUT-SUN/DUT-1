//#define _CRT_SECURE_NO_WARNINGS 1
//#define N 10
//#include<stdio.h>
//int main()
//{
//	int i;
//	char arr1[N];
//	int arr2[26] = { 0 };
//	for (i = 0; i < N; i++)
//		scanf("%c", &arr1[i]);
//	for (i = 0; i < N; i++)
//	{
//		if (arr1[i] >= 'A' && arr1[i] <= 'Z')
//			arr2[arr1[i] - 'A']++;
//		if (arr1[i] >= 'a' && arr1[i] <= 'z')
//			arr2[arr1[i] - 'a']++;
//	}
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c\t%d\n", i + 65, arr2[i]);
//	}
//	
//	return 0;
//}