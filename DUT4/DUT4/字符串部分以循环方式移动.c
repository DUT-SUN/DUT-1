//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char w[80], w1[80] = "", w2[80] = "";
//	int i, m;
//	printf("请输入一个字符串:");
//	gets(w);
//	printf("请输入您要移动的个数（从第一个开始移动）:");
//	scanf("%d", &m);
//	for (i = 0; i < m; i++)
//	{
//		w1[i] = w[i];
//	}
//	for (i = m; i < 80; i++)
//	{
//		w2[i - m] = w[i];
//	}
//	strcpy(w, strcat(w2, w1));
//	printf("移动后的字符串是:");
//	puts(w);
//}