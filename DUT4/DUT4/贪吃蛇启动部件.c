//#define _CRT_SECURE_NO_WARNINGS 1
//#include"Ì°³ÔÉß.h"
//int head, tail;
//int i, j;
//int main()
//{
//
//	int changemodel(char tcsqipan[22][22], int tcszuobao[2][20], char direction);
//	long start;
//	int gamespeed = 500;
//	int timeover;
//	int direction = 77;
//	char tcsqipan[22][22];
//	int tcszuobiao[2][20];
//
//	
//	//³õÊ¼»¯Éß×ø±ê
//	for (i = 0; i <= 3; i++)
//	{
//		tcszuobiao[i][j] = i + 1;
//		tcszuobiao[0][j] = 1;
//	}
//	head = 3; tail = 0;
//
//
//	for (i = 1; i <= 20; i++)
//	{
//		for (j = 1; j <= 20; j++)
//		{
//			tcsqipan[i][j] = ' ';
//		}
//	}
//	for (i = 0; i <= 21; i++)
//	{
//		tcsqipan[0][i] = '-';
//		tcsqipan[21][i] = '-';
//	}
//	for (i = 1; i <= 20; i++)
//	{
//		tcsqipan[i][0] = '|';
//		tcsqipan[i][21] = '|';
//	}
//	for (i = 1; i <= 3; i++)
//	{
//		tcsqipan[1][i] = '*';
//	}
//	tcsqipan[1][4] = '#';
//	while (direction != 'Q')
//	{
//		system("cls");
//		for (i = 0; i <= 21; i++)
//		{
//			for (j = 0; i <= 21; i++)
//			{
//				printf("%c", tcsqipan[i][j]);
//
//			}
//			printf("\n");
//		}
//		timeover = 1;
//		start = clock();
//		while (!_kbhit() && (timeover = clock() - start <= gamespeed));
//		if (timeover)
//		{
//			_getch();
//			direction = _getch();
//		}
//		else
//		{
//			direction = direction;
//		}
//		if (!(direction == 72 || direction == 80 || direction == 75 || direction == 77))
//		{
//			return 0;
//		}
//		if(!changemodel(tcsqipan,tcszuobiao,direction))
//		direction='Q';
//	}
//	return 0;
//}
//int changemodel(char tcsqipan[22][22], int tcszuobiao[2][20], char direction)
//{
//	int x, y;
//	if (direction == 72)
//	{
//		x = tcszuobiao[0][head] - 1;
//		y = tcszuobiao[1][head];
//	}
//	if (direction == 80)
//	{
//		x = tcszuobiao[0][head] + 1;
//		y = tcszuobiao[1][head];
//	}
//	if (direction == 75)
//	{
//		x = tcszuobiao[0][head];
//		y = tcszuobiao[1][head] - 1;
//	}
//	if (direction == 77)
//	{
//		x = tcszuobiao[0][head];
//		y = tcszuobiao[1][head] + 1;
//	}
//	if (x == 0 || x == 21 || y == 0 || y == 21)
//		return 0;
//	if (tcszuobiao[x][y] != ' ')
//		return 0;
//	//Çå³ýÉßÎ²
//	tcsqipan[tcszuobiao[0][tail]][tcszuobiao[1][tail]] = ' ';
//	tail = (tail + 1) % 20;
//	tcsqipan[tcszuobiao[0][head]][tcszuobiao[1][head]] = ' ';
//	head = (head + 1) % 20;
//	tcszuobiao[0][head] = x;
//	tcszuobiao[1][head] = y;
//	tcsqipan[tcszuobiao[0][head]][tcszuobiao[1][head]] = '#';
//	return 1;
//}