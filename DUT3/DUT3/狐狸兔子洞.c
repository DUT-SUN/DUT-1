//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[1000];
//	int quit[11] = { 0 };
//	int start = 1;
//	int n = 2;
//	int count = 1;
//	arr[0] = 1;
//	quit[1] = 1;
//	for (n = 1; n < 1000; n++)
//	{
//		arr[n] = arr[n - 1] + n + 1;
//	}
//	for (n = 0; n < 1000; n++)
//	{
//		if (quit[2] != 2 && arr[n] % 10 == 2)
//		{
//			quit[2] = 2;
//			
//		}
//   		if (quit[3] != 3 && arr[n] % 10 == 3)
//		{
//
//			quit[3] = 3;
//			
//		}
//		if (quit[4] != 4 && arr[n] % 10 == 4)
//		{
//
//			quit[4] = 4;
//			
//		}
//		if (quit[5] != 5 && arr[n] % 10 == 5)
//		{
//
//			quit[5] = 5;
//			
//		}
//		if (quit[6] != 6 && arr[n] % 10 == 6)
//		{
//
//			quit[6] = 6;
//			
//		}
//		if (quit[7] != 7 && arr[n] % 10 == 7)
//		{
//
//			quit[7] = 7;
//			
//		}
//		if (quit[8] != 8 && arr[n] % 10 == 8)
//		{
//
//			quit[8] = 8;
//		
//		}
//		if (quit[9] != 9 && arr[n] % 10 == 9)
//		{
//
//			quit[9] = 9;
//			
//		}
//		if (quit[10] != 10 && arr[n] % 10 == 0)
//		{
//
//			quit[10] = 10;
//	
//		}
//
//
//
//	}
//	int j;
//	for (j = 1; j <= 10; j++)
//	{
//		if (quit[j] == 0)
//		{
//			printf("兔子可能躲在%d号洞\n", j);
//		}
//	}
//	return 0;
//}