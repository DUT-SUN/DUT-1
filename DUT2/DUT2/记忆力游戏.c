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
//	printf("欢迎来到第%d关\n",x);
//	printf("你所需要记忆的数字：");
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
//	printf("输入刚才那串数字：");
//	scanf("%d",&n); 
//	if (n == sum)
//	{
//		printf("太厉害了！\n");
//		return 1;
//	}
//	else
//	{
//		printf("记忆错误,重新再来\n");
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
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case(0):
//			printf("退出游戏");
//		case(1):
//			printf("游戏开始");
//			x=game( count,input);
//			if (x == 6)
//			{
//				count = 0;
//			}
//			count++;
//			break;
//		default:
//			printf("选择错误，请重新输入！\n");
//		}
//		
//
//	} while (input);
//	return 0;
//}