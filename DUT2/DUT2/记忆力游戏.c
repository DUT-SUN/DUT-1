//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<windows.h>
//#include<math.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.play 0.exit****\n");
//	printf("*********************\n");
//
//}
//int game(int x,int y)
//{
//	int n, sum = 0;
//	printf("��ӭ������%d��\n",x);
//	printf("������Ҫ��������֣�");
//	while (x != 0)
//	{
//		int num = rand() % 10;
//		printf("%d",num );
//		sum +=  num*pow(10,x-1);
//		x--;
//	}
//	printf("\n");
//	Sleep(500);
//	system("cls");
//	printf("����ղ��Ǵ����֣�");
//	scanf("%d",&n); 
//	if (n == sum)
//	{
//		printf("̫�����ˣ�\n");
//		return 1;
//	}
//	else
//	{
//		printf("�������,��������\n");
//		y = 6;
//		return y;
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	int count = 1;
//	int x;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case(0):
//			printf("�˳���Ϸ");
//		case(1):
//			printf("��Ϸ��ʼ");
//			x=game( count,input);
//			if (x == 6)
//			{
//				count = 0;
//			}
//			count++;
//			break;
//		default:
//			printf("ѡ��������������룡\n");
//		}
//		
//
//	} while (input);
//	return 0;
//}