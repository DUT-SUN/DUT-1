//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("****************************\n");
//	printf("****  1.play   0.exit   ****\n");
//	printf("****************************\n");
//}
//void game()
//{
//	//生成随机数，猜数字rand范围0到32767（0x7fff）
//	srand((unsigned int)time(NULL));//时间戳：当前计算机时间减去计算机的起始时间（1970.1.1.0:0:0)=()秒，用时间戳当变量一直改变time是long int
//	int ret = rand() % 100 + 1;
//	printf("%d", ret);
//	int guess = 0;
//	while (1)
//	{
//		printf("猜数字：>");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//	printf("%d\n", ret);
//
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//
//		menu();
//		printf("请选择>：\:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case(1):
//			game();
//			break;
//		case(0):
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
