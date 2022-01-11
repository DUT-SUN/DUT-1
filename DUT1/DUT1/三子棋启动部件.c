//
////game.c游戏实现部分
//#include "game.h"
////棋盘初始化为空格的函数
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
////打印棋盘的函数
////void DisplayBoard(char board[ROW][COL], int row, int col)
////{
////	int i = 0;
////	for (i = 0; i < row; i++)
////	{
////		//打印一行的数据
////		printf(" %c | %c | %c \n",board[i][0], board[i][1], board[i][2]);
////		//打印分割行
////		if (i < row - 1)
////			printf("---|---|---\n");
////	}
////}
////这个打印函数写死了棋盘边框，只有3*3的棋盘边框，因此不是很合适
//
//
////改进后的棋盘打印函数
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			//打印一行的数据
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		//打印分割行:行数减一个分隔行
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//			printf("\n");
//		}
//	}
//}
////保存下棋步骤的函数
////玩家走步记录函数
////这里要站在玩家角度设计代码，3*3列棋盘玩家一般会认为是3行（1，2，3行）*3列（1，2，3列）
////实际上在计算机思维上应该是3行（0，1，2行）*3列（0，1，2列）
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("玩家先走：(行+空格+列）\n");
//	while (1)
//	{
//		printf("请输入要下的坐标:>");
//		scanf("%d%d", &x, &y);
//		//判断x,y坐标的合法性
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("该坐标被占用\n");
//			}
//		}
//		else
//		{
//			printf("坐标非法，请重新输入!\n");
//		}
//	}
//}
////电脑走步记录函数
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
// srand((unsigned int)time(NULL));//用时间戳控制生成随机值
//	printf("电脑走：>\n");
//	while (1)
//	{
//		x = rand() % row;//模3只能产生0，1，2
//		y = rand() % col;//模3只能产生0，1，2
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
//
////棋盘是否下满的判断函数
////返回1表示棋盘满了
////返回0，表示棋盘没满
//int IsFull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')//当二维数组中存在空格时，说明棋盘没满
//			{
//				return 0;//没满
//			}
//		}
//	}
//	return 1;//满了
//}
//
////检查横三行，竖三列，对角线是否有三个相同的棋子
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	//横三行
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			//当有三个棋子相同时，返回三个棋子中的一个即可
//			//设定中，玩家下棋是‘*’，电脑下棋是'#’，玩家赢 返回，'*'电脑赢返回'#'
//			//不用判断电脑下棋还是人下棋，直接返回就行
//			return board[i][1];
//		}
//	}
//	//竖三列
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//		{
//			//当有三个棋子相同时，返回三个棋子中的一个即可
//			//设定中，玩家下棋是‘*’，电脑下棋是'#’，玩家赢 返回，'*'电脑赢返回'#'
//			//不用判断电脑下棋还是人下棋，直接返回就行
//			return board[1][i];
//		}
//	}
//	//两个对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//		return board[1][1];
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
//		return board[1][1];
//	//判断是否平局
//	if (1 == IsFull(board, ROW, COL))
//	{
//		//当棋盘满了没有结果说明平局
//		return 'Q';
//	}
//	//判断完，输赢，平局，只剩下一种继续的可能性
//	return 'C';
//}
