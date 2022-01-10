//#include<stdio.h>
//int main()
//{
//	int y, m, d, x = 0;
//	scanf_s("%d,%d,%d", &y, &m, &d);
//	if (y > 0)
//	{
//		printf("年份合格\n");
//	}
//	else
//	{
//		printf("年份不合格\n");
//	}
//	if (y % 4 == 0 && y % 100 != 0)
//	{
//		printf("年份为闰年\n");
//		x = 1;
//	}
//	else if (y % 400 == 0)
//	{
//		printf("年份为闰年\n");
//		x = 1;
//	}
//	else
//	{
//		printf("年份为平年\n");
//	}
//	if (m >= 1 && m <= 12)
//	{
//		printf("月份合格\n");
//	}
//	else
//	{
//		printf("月份不合格\n");
//	}
//	switch (m)
//	{
//	case(1):if (d >= 1 && d <= 31)
//	{
//		printf("日期合格"); break;
//	}
//
//	case(2):
//		if (x == 1)
//		{
//			if (d >= 1 && d <= 29)
//			{
//				printf("日期合格"); break;
//			}
//		}
//		else
//		{
//			printf("日期不合格"); break;
//		}
//
//	case(3):
//		if (d >= 1 && d <= 31)
//		{
//			printf("日期合格"); break;
//		}
//		else
//		{
//			printf("日期不合格"); break;
//		}
//	case(4):
//		if (d >= 1 && d <= 30)
//		{
//			printf("日期合格"); break;
//		}
//
//		else
//		{
//			printf("日期不合格"); break;
//		}
//	case(5):
//		if (d >= 1 && d <= 31)
//		{
//			printf("日期合格"); break;
//		}
//		else
//		{
//			printf("日期不合格"); break;
//		}
//	case(6):
//		if (d >= 1 && d <= 30)
//		{
//			printf("日期合格"); break;
//		}
//
//		else
//		{
//			printf("日期不合格"); break;
//		}
//	case(7):
//		if (d >= 1 && d <= 31)
//		{
//			printf("日期合格"); break;
//		}
//		else
//		{
//			printf("日期不合格"); break;
//		}
//	case(8):
//		if (d >= 1 && d <= 31)
//		{
//			printf("日期合格"); break;
//		}
//		else
//		{
//			printf("日期不合格"); break;
//		}
//	case(9):
//		if (d >= 1 && d <= 30)
//		{
//			printf("日期合格"); break;
//		}
//
//		else
//		{
//			printf("日期不合格"); break;
//		}
//	case(10):
//		if (d >= 1 && d <= 31)
//		{
//			printf("日期合格"); break;
//		}
//		else
//		{
//			printf("日期不合格"); break;
//		}
//	case(11):
//		if (d >= 1 && d <= 30)
//		{
//			printf("日期合格"); break;
//		}
//
//		else
//		{
//			printf("日期不合格"); break;
//		}
//	case(12):
//		if (d >= 1 && d <= 31)
//		{
//			printf("日期合格"); break;
//		}
//		else
//		{
//			printf("日期不合格"); break;
//		}
//	}
//	return 0;
//}