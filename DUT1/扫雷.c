//#define _CRT_SECURE_NO_WARNINGS 1
////Ŀ�ģ�Ҫʵ���ظ�����Ĳ���
////ʵ�ֵݹ��ɨ�ײ���
//#include"saolei.h"
//void menu()
//{
//	printf("********************************\n");
//	printf("**********   1.play  ***********\n");
//	printf("**********   0.exit  ***********\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//�׵Ĵ洢
//	//1.���úõ��׵���Ϣ
//	char mine[ROWS][COLS] = { 0}; 
//
//	//2.�Ų�����׵���Ϣ
//	char show[ROWS][COLS] = { 0 };
//	//��ʼ��
//	InitBoard(mine,ROWS,COLS,'0');
//	InitBoard(show, ROWS, COLS, '*');
//	//��ӡ����
//	DisplayBoard(mine,ROW,COL);
//	DisplayBoard(show, ROW, COL);
//	//������
//	SetMine(mine, ROW, COL);
//	//DisplayBoard(mine, ROW, COL);��ӡһ�¿������
//	//ɨ��
//	Findmine(mine,show,ROW,COL);
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu(); 
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		game();
//		break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (1);
//}
//
//int main()
//	{
//		test();
//		return 0;
//	}
////չ�����ܣ��ݹ�
////1.���겻����
////2.��ΧҲû��