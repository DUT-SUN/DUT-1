//��һ�����־���ÿ�д����ҵ������ϵ��µ�������д����Ҫ��ʱ�临�Ӷ�С��0��n��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////int findnum(int k, int arr[3][3],int row ,int col)//һ�ź������ܷ�������
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
//int findnum(int k, int arr[3][3], int* px, int* py)//���ź������Է�������
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
//	//int ret = findnum(k, arr, 3, 3);//һ�ź�������������ĵ���
//	int x = 3;
//	int y = 3;
//	int ret = findnum(k, arr, &x, &y);
//	if (ret)
//	{
//		printf("�ҵ���");
//		printf("����Ϊarr[%d][%d]", x, y);
//	}
//	else
//		printf("û�ҵ�");
//	return 0;
//}