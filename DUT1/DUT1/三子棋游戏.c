//
////游戏测试及初始化部分(大佬写的)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include "game.h"
//void menu()
//{
//	printf("**********************\n");
//	printf("*** 1.play  0.exit ***\n");
//	printf("**********************\n");
//}
////游戏算法实现
//void game()
//{
//	char ret = 0;
//	//采用数组存储走出的棋盘信息
//	char board[ROW][COL] = { 0 };
//	//棋盘初始化为空格
//	InitBoard(board, ROW, COL);
//	//打印棋盘边框
//	DisplayBoard(board, ROW, COL);
//	//下棋程序，玩家先下，电脑后下
//	//既然是在棋盘内下棋，那么形参列表应该有棋盘的相关信息
//	//调用需要行列信息，棋盘信息
//
//	while (1)
//	{
//		//玩家走步记录函数及打印
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//判断玩家是否赢
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//电脑走步记录函数及打印
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//判断电脑是否赢
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	//通过Iswin输赢判断函数的返回值输出游戏结果
//	if (ret == '*')
//	{
//		printf("玩家赢\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑赢\n");
//	}
//	else
//	{
//		printf("平局\n");
//	}
//}
//
//void test()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		default:
//			printf("选择错误，请重新选择!\n");
//			break;
//		}
//
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
