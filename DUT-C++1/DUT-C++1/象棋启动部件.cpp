//#define _CRT_SECURE_NO_WARNINGS 1
//#include"象棋.h"
////Board类 具有一个 chessman 的指针数组chessarray10行9列
////（也可以是11行，10列，就是0行、0列不使用，这样棋盘位置 横、纵坐标都是从1开始编号）
////，在initBoard的时候， i行j列逐个初始化，如果没有子，就是 空指针，
////chessarray[i][j]  要是移动到  x，y位置，就是判断 chess[x][y]是否为空，
////如果是对方棋子，可以吃掉，就把chess[x][y] 原来指向释放掉（对方棋子），
////然后指向chessarray[i][j]指向的对象，chessarray[i][j] 置空（此处没有棋子了）
////功能: 模拟人人对弈的单机版象棋游戏(用dos界面显示即可).
////
////如棋盘显示如下：
////
////
////0   1   2  3 ...
////
////1
////类对象: 棋盘（10 * 9的数组，每个元素可以是一个棋子，注意有楚河之隔）
////棋子：车、马、象、士、炮、卒、将。
////每个棋子有红子和黑子之分，每个棋子都可以移动，但是不同的棋子移动方法不同。
////请给出个类型的定义，注意继承和多态的使用。
//class Board
//{
//protected:
//	chessman* chessarrary[11][10];
//public:
//	Board();
//	void initBoard();//初始化棋盘放置棋子
//	virtual ~Board();
//};
//Board::Board()
//{
//	for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			chessarrary[i][j] = new chessman;
//		}
//	}
//}
//void Board::initBoard()
//{
//	chessarrary[4][1] = new solid;
//	chessarrary[4][3] = new solid;
//	chessarrary[4][5] = new solid;
//	chessarrary[4][7] = new solid;
//	chessarrary[4][9] = new solid;
//	chessarrary[7][1] = new solid;
//	chessarrary[7][3] = new solid;
//	chessarrary[7][5] = new solid;
//	chessarrary[7][7] = new solid;
//	chessarrary[7][9] = new solid;
//}
//class chessman :public Board
//{
//public:
//	virtual void move()//不能搞成纯虚函数，不然前面申请空间的时候，因为申请的chessman这个抽象类会报错
//	{
//		return ;
//	}
//	virtual void show();
//};
//class solid :public chessman
//{
//protected:
//	char* name;
//public:
//	solid()
//	{
//		name = new char[strlen("兵") + 1];//兵卒区分
//		strcpy(name, "兵");
//	}
//	void show()
//	{
//		//先测试一下不过河移动
//		int i, j;
//		cout<<"输入你要移动的位置"
//		cout << name;
//	}
//	void move()
//	{
//		
//	}
//};
////class chessman :public Board
////{
////protected:
////	char* name;
////public:
////	chessman();
////	//void move();
////	virtual void show();
////	void operator =(chessman& x);
////	virtual ~chessman();
////};
////chessman::chessman()
////{
////	name = new char[2];
////	strcpy(name, " ");
////}
////void chessman::show()
////{
////	cout << name;
////}
////void chessman::operator =(chessman& x)
////{
////	name = new char[strlen(x.name) + 1];
////	strcpy(name, x.name);
////}
////chessman:: ~chessman()
////{
////	delete[]name;
////}
////class solid:public chessman
////{
////public:
////	solid();
////	void show();
////
////};
////solid::solid()
////{
////	name = new char[strlen("士") + 1];
////	strcpy(name, "士");
////}
////void solid::show()
////{
////	cout << name;
////}
////
////class Board
////{
////protected:
////	chessman a[ROW][COL];
////public:
////	void InitBoard(chessman board[ROW][COL], int row, int col);
////	void DisplayBoard(chessman board[ROW][COL], int row, int col);
////};
////void InitBoard(chessman board[ROW][COL], int row, int col)
////{
////
////}
////void DisplayBoard(chessman board[ROW][COL], int row, int col)
////{
////	//for (int i = 0; i < row; i++)
////	//{
////	//	
////	//	for (int j = 0; j < col; j++)
////	//	{
////	//		cout << board[i][j] <<"   |";
////	//	}
////	//	cout << endl;
////	//	if (i < ROW - 1)
////	//	{
////	//		for (int n = 0; n < 9; n++)
////	//			cout << "----|";
////	//		cout << endl;
////	//	}
////	//}
////}
////
