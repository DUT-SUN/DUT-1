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
//void DisplayBoard(char board[ROWS][COLS], int row, int col)//���ݵ��������Ͷ����һ�£�������11x11��ô�������дROWS��COLS�����Ҵ��������к�����9��Ϊ����ֻҪ����9��9��
//{
//	int i = 0;
//	int j = 0;//��ӡ�к�
//	for (i = 0; i <= col; i++)
//	{
//		printf("%d", i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d", i);//��ӡ�к�
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
//		printf("�������Ų��׵����꣺>");
// 
//		scanf("%d%d", &x, &y);//1����
//		if (show[x][y]!='*')
//		{
//			printf("�˴��Ѿ�ɨ���ˣ�\n");
//		}
//		else if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			//����Ϸ�
//			if (mine[x][y] == '1')
//			{
//				printf("���ź����㱻ը����\n");
//				DisplayBoard(mine, row, col);
//				break;
//			}
//			else//������
//			{
//				//����xy�����м�����
//				/*int count = get_mine_count(mine, x, y);
//				show[x][y] = count + '0';
//				DisplayBoard(show, row, col);
//				win++;*/
//				diguizankai(mine,show,x, y,p);
//				DisplayBoard(show, row, col);
//				//Ŀ�ģ�ʵ�ֵݹ�ɨ��
//				//ʵ�ֲ��裺ʵ��һ������ȥ�ݹ��Լ�
//				//�������ݣ�����������Χ��Ӻ�Ϊ0�͵����Լ�
//				//չ����Χ8������
//				//�����8����������ٴεݹ�
//				//Լ�����������Χ�׸���Ϊ0ֹͣȥ�ݹ�
//				//             
//			
//			}
//		}
//		else
//		{
//			printf("��������Ƿ������������룡\n");
//		}
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("��ϲ�㣡���׳ɹ�\n");
//	}
//}