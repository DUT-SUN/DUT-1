//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////int main()
////{
////    int a[10] = { 3,2,-6,4,7,-3,5,-2,-1,-1 };
////    int i, j, k, s = 0, max = 0;
////    for (i = 0; i < 10; i++)
////        for (j = i; j < 10; j++)
////        {
////            if (i == j)
////                s = a[i] / 2;
////            else
////                for (k = i; k <= j; k++)
////                    s += a[k];
////            if (s >= max)
////                max = s;
////            s = 0;
////        }
////    for (i = 0; i < 10; i++)
////        for (j = i; j < 10; j++)
////        {
////            if (i == j)
////                s = a[i] / 2;
////            else
////                for (k = i; k <= j; k++)
////                    s += a[k];
////            if (max == s)
////            {
////                for (k = i; k <= j; k++)
////                    printf("%d,", a[k]);
////            }
////            s = 0;
////        }
////    return 0;
////}
//
//int x(int arr[])
//{
//	int i;
//	int cur = 0;
//	int max = -999999;
//	for (i = 0; i < 10; i++)
//	{
//		cur += arr[i];
//		max = (max > cur ? max : cur);
//		cur = cur < 0 ? 0 : cur;//前面和为负舍去前面的数
//	}
//	return max;
//}
//
//void find(int arr[10], int max)//通过之前我定义求出的最大值反过来找这些元素
//{
//	int i, start = 0, end = 0;
//	int cur = 0;
//	int max1 = -999999;
//	for (i = 0; i < 10; i++)
//	{
//		cur += arr[i];
//
//		max1 = (max1 > cur ? max1 : cur);
//		if (cur < 0)//通过cur的是否转变就可以知道start的开始值
//		{
//			start = i + 1;
//			if (i == 9)
//				start = 9;
//		}
//		
//		cur = cur < 0 ? 0 : cur;
//
//		if (max1 == max)
//		{
//			end = i;
//			int count;
//			for (count = start; count <= end; count++)
//			{
//				printf("%d ", arr[count]);
//			}
//			break;
//		}
//	
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = x(arr);
//	find(arr, max);
//	printf("最大值是%d\n", max);
//
//	return 0;
//}