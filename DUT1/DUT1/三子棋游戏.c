//
////��Ϸ���Լ���ʼ������(����д��)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include "game.h"
//void menu()
//{
//	printf("**********************\n");
//	printf("*** 1.play  0.exit ***\n");
//	printf("**********************\n");
//}
////��Ϸ�㷨ʵ��
//void game()
//{
//	char ret = 0;
//	//��������洢�߳���������Ϣ
//	char board[ROW][COL] = { 0 };
//	//���̳�ʼ��Ϊ�ո�
//	InitBoard(board, ROW, COL);
//	//��ӡ���̱߿�
//	DisplayBoard(board, ROW, COL);
//	//�������������£����Ժ���
//	//��Ȼ�������������壬��ô�β��б�Ӧ�������̵������Ϣ
//	//������Ҫ������Ϣ��������Ϣ
//
//	while (1)
//	{
//		//����߲���¼��������ӡ
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//�ж�����Ƿ�Ӯ
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//�����߲���¼��������ӡ
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//�жϵ����Ƿ�Ӯ
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	//ͨ��Iswin��Ӯ�жϺ����ķ���ֵ�����Ϸ���
//	if (ret == '*')
//	{
//		printf("���Ӯ\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ\n");
//	}
//	else
//	{
//		printf("ƽ��\n");
//	}
//}
//
//void test()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			printf("��Ϸ��ʼ\n");
//			game();
//			break;
//		default:
//			printf("ѡ�����������ѡ��!\n");
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
