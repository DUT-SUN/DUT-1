//#define _CRT_SECURE_NO_WARNINGS 1
//#include"����.h"
////Board�� ����һ�� chessman ��ָ������chessarray10��9��
////��Ҳ������11�У�10�У�����0�С�0�в�ʹ�ã���������λ�� �ᡢ�����궼�Ǵ�1��ʼ��ţ�
////����initBoard��ʱ�� i��j�������ʼ�������û���ӣ����� ��ָ�룬
////chessarray[i][j]  Ҫ���ƶ���  x��yλ�ã������ж� chess[x][y]�Ƿ�Ϊ�գ�
////����ǶԷ����ӣ����ԳԵ����Ͱ�chess[x][y] ԭ��ָ���ͷŵ����Է����ӣ���
////Ȼ��ָ��chessarray[i][j]ָ��Ķ���chessarray[i][j] �ÿգ��˴�û�������ˣ�
////����: ģ�����˶��ĵĵ�����������Ϸ(��dos������ʾ����).
////
////��������ʾ���£�
////
////
////0   1   2  3 ...
////
////1
////�����: ���̣�10 * 9�����飬ÿ��Ԫ�ؿ�����һ�����ӣ�ע���г���֮����
////���ӣ���������ʿ���ڡ��䡢����
////ÿ�������к��Ӻͺ���֮�֣�ÿ�����Ӷ������ƶ������ǲ�ͬ�������ƶ�������ͬ��
////����������͵Ķ��壬ע��̳кͶ�̬��ʹ�á�
//class Board
//{
//protected:
//	chessman* chessarrary[11][10];
//public:
//	Board();
//	void initBoard();//��ʼ�����̷�������
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
//	virtual void move()//���ܸ�ɴ��麯������Ȼǰ������ռ��ʱ����Ϊ�����chessman���������ᱨ��
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
//		name = new char[strlen("��") + 1];//��������
//		strcpy(name, "��");
//	}
//	void show()
//	{
//		//�Ȳ���һ�²������ƶ�
//		int i, j;
//		cout<<"������Ҫ�ƶ���λ��"
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
////	name = new char[strlen("ʿ") + 1];
////	strcpy(name, "ʿ");
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
