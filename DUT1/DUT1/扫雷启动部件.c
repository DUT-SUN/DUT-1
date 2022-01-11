//#define _CRT_SECURE_NO_WARNINGS 1
//#include "saolei.h"
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROWS; i++)
//	{
//		for (j = 0; j < COLS; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//
//}
//void DisplayBoard(char board[ROWS][COLS], int row, int col)//传递的数组必须和定义的一致，定义是11x11那么我这必须写ROWS和COLS但是我传过来的行和列是9因为我们只要操作9行9列
//{
//	int i = 0;
//	int j = 0;//打印列号
//	for (i = 0; i <= col; i++)
//	{
//		printf("%d", i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d", i);//打印行号
//		for (j = 1; j <= col; j++)
//		{
//
//			printf("%c", board[i][j]);
//		}
//		printf("\n");
//	}
//
//
//}
//void SetMine(char board[ROWS][COLS], int row, int col)
//{
//	int count = EASY_COUNT;
//	while (count)
//	{
//		int x = rand()% row+1;
//		int y = rand() % col+1;
//		if (board[x][y] == '0')
//		{
//			board[x][y] = '1';
//			count--;
//		}
//	}
//}
//int get_mine_count(char mine[ROWS][COLS], int x ,int y)
//{
//	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1]
//		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]
//		+ mine[x][y + 1] + mine[x - 1][y - 1] - 8 * '0';
//	
//}
//void diguizankai(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y,int* p)
//{
//	int row = 9;
//	int col = 9;
//	show[x][y] = get_mine_count(mine, x, y) + '0';
//	(*p)++;
//	
//	if (show[x][y] == '0')
//	{
//		diguizankai(mine,show,x-1,y,p);
//		diguizankai(mine, show, x - 1, y-1,p);
//		diguizankai(mine, show, x - 1, y+1,p);
//		diguizankai(mine, show, x , y-1,p);
//		diguizankai(mine, show, x , y+1,p);
//		diguizankai(mine, show, x + 1, y-1,p);
//		diguizankai(mine, show, x + 1, y,p);
//		diguizankai(mine, show, x + 1, y+1,p);
//	
//	}
//	return;
//
//}
//void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	int* p = &win;
//	while (win<row*col-EASY_COUNT)
//	{
//		printf("请输入排查雷的坐标：>");
// 
//		scanf("%d%d", &x, &y);//1踩雷
//		if (show[x][y]!='*')
//		{
//			printf("此处已经扫过了！\n");
//		}
//		else if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			//坐标合法
//			if (mine[x][y] == '1')
//			{
//				printf("很遗憾，你被炸死了\n");
//				DisplayBoard(mine, row, col);
//				break;
//			}
//			else//不是雷
//			{
//				//计算xy坐标有几个雷
//				/*int count = get_mine_count(mine, x, y);
//				show[x][y] = count + '0';
//				DisplayBoard(show, row, col);
//				win++;*/
//				diguizankai(mine,show,x, y,p);
//				DisplayBoard(show, row, col);
//				//目的：实现递归扫雷
//				//实现步骤：实现一个函数去递归自己
//				//函数内容：如果这个点周围相加和为0就调用自己
//				//展开周围8个方块
//				//对这个8个方块进行再次递归
//				//约束条件如果周围雷个数为0停止去递归
//				//             
//			
//			}
//		}
//		else
//		{
//			printf("输入坐标非法，请重新输入！\n");
//		}
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("恭喜你！排雷成功\n");
//	}
//}