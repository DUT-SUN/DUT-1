//#include<stdio.h>
//int main()
//{
//	int y, m, d, x = 0;
//	scanf_s("%d,%d,%d", &y, &m, &d);
//	if (y > 0)
//	{
//		printf("��ݺϸ�\n");
//	}
//	else
//	{
//		printf("��ݲ��ϸ�\n");
//	}
//	if (y % 4 == 0 && y % 100 != 0)
//	{
//		printf("���Ϊ����\n");
//		x = 1;
//	}
//	else if (y % 400 == 0)
//	{
//		printf("���Ϊ����\n");
//		x = 1;
//	}
//	else
//	{
//		printf("���Ϊƽ��\n");
//	}
//	if (m >= 1 && m <= 12)
//	{
//		printf("�·ݺϸ�\n");
//	}
//	else
//	{
//		printf("�·ݲ��ϸ�\n");
//	}
//	switch (m)
//	{
//	case(1):if (d >= 1 && d <= 31)
//	{
//		printf("���ںϸ�"); break;
//	}
//
//	case(2):
//		if (x == 1)
//		{
//			if (d >= 1 && d <= 29)
//			{
//				printf("���ںϸ�"); break;
//			}
//		}
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//
//	case(3):
//		if (d >= 1 && d <= 31)
//		{
//			printf("���ںϸ�"); break;
//		}
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//	case(4):
//		if (d >= 1 && d <= 30)
//		{
//			printf("���ںϸ�"); break;
//		}
//
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//	case(5):
//		if (d >= 1 && d <= 31)
//		{
//			printf("���ںϸ�"); break;
//		}
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//	case(6):
//		if (d >= 1 && d <= 30)
//		{
//			printf("���ںϸ�"); break;
//		}
//
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//	case(7):
//		if (d >= 1 && d <= 31)
//		{
//			printf("���ںϸ�"); break;
//		}
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//	case(8):
//		if (d >= 1 && d <= 31)
//		{
//			printf("���ںϸ�"); break;
//		}
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//	case(9):
//		if (d >= 1 && d <= 30)
//		{
//			printf("���ںϸ�"); break;
//		}
//
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//	case(10):
//		if (d >= 1 && d <= 31)
//		{
//			printf("���ںϸ�"); break;
//		}
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//	case(11):
//		if (d >= 1 && d <= 30)
//		{
//			printf("���ںϸ�"); break;
//		}
//
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//	case(12):
//		if (d >= 1 && d <= 31)
//		{
//			printf("���ںϸ�"); break;
//		}
//		else
//		{
//			printf("���ڲ��ϸ�"); break;
//		}
//	}
//	return 0;
//}