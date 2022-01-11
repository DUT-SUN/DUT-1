//#include<stdio.h>
//int main()
//{
//	char arr[5] = { 'C','h','i','n','a' };
//	for (int i = 0; i < 5; i++)
//	{
//		scanf_s("%c", &arr[i]);
//		arr[i] += 4;
//
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%c", arr[i]);
//
//	}
//
//
//
//
//	return 0;
//}
//
//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fx(int x)
{
    if (x < 0)
    {
        return 1;
    }
    else if (x = 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", fx(x));
        return 0;
}