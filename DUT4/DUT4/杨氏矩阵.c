//有一个数字矩阵每行从左到右递增从上到下递增，编写程序要求时间复杂度小于0（n）
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////int findnum(int k, int arr[3][3],int row ,int col)//一号函数不能返回坐标
////{
//	//int x = 0;
//	//int y = col - 1;
//	//while (x <= row - 1 && y >= 0)
//	//{
//	//	if (arr[x][y] > k)
//	//	{
//	//		y--;
//	//	}
//	//	else if (arr[x][y] < k)
//	//	{
//	//		x++;
//	//	}
//	//	else
//	//	{
//	//		return 1;
//	//	}
//	//}
////}
//int findnum(int k, int arr[3][3], int* px, int* py)//二号函数可以返回坐标
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{   //1 2 3
//	//4 5 6
//	//7 8 9
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	//int ret = findnum(k, arr, 3, 3);//一号函数不返回坐标的调用
//	int x = 3;
//	int y = 3;
//	int ret = findnum(k, arr, &x, &y);
//	if (ret)
//	{
//		printf("找到了");
//		printf("坐标为arr[%d][%d]", x, y);
//	}
//	else
//		printf("没找到");
//	return 0;
//}