//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int split(char* a, char(*b)[80])
//{
//	char c[80];
//	strcpy(c, a);
//	char* q;
//	char* p = c;
//	int num = 0;
//	while (p)
//	{
//		q = p;
//		p = strstr(q, " ");
//		if (p)
//		{
//			*p = '\0';
//			strcpy(b[num++], q);
//			*p = ' ';
//			while (*p == ' ')//找到下一个非空格的字符
//			{
//				p++;
//			}
//		}
//		else
//		{
//			strcpy(b[num++], q);
//		}
//	}
//	return num;
//}
//void alltrim(char a[])
//{
//	if (*a == ' ')
//	{
//		char* p = a;
//		while (*p++ == ' ');
//		p--;
//		*a = '\0';
//		strcpy(a, p);
//	}
//
//	int sz = strlen(a);
//	if (*(a + sz - 1) == ' ')
//	{
//		while (a[sz--] != ' ');
//		*(a + sz) = '\0';
//	}
//}
//void sort(char(*b)[80], int num)
//{
//	int i, j, min;
//	char t[80];
//	for (i = 0; i < num - 1; i++)
//	{
//		min = i;
//		for (j = i + 1; j < num; j++)
//		{
//			if (strlen(b[min]) > strlen(b[j]))
//			{
//				min = j;
//			}
//			if (min != i)
//			{
//				strcpy(t, b[min]);
//				strcpy(b[min], b[i]);
//				strcpy(b[i], t);
//			}
//
//		}
//	}
//}
	//int main()
	//{
	//	char a[80] = "   abcd ab cd sdas   ";   //前后有空格alltrim()干掉空格
	//	char b[20][80];
//		alltrim(a);//干掉前后空格
		//int num = split(a, b);
		//int i;
//		sort(b, num);
		/*for (i = 0; i < num; i++)
		{
			puts(b[i]);
		}

		return 0;
	}*/
