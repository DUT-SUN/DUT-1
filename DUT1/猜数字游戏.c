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
//	//�����������������rand��Χ0��32767��0x7fff��
//	srand((unsigned int)time(NULL));//ʱ�������ǰ�����ʱ���ȥ���������ʼʱ�䣨1970.1.1.0:0:0)=()�룬��ʱ���������һֱ�ı�time��long int
//	int ret = rand() % 100 + 1;
//	printf("%d", ret);
//	int guess = 0;
//	while (1)
//	{
//		printf("�����֣�>");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>��\:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case(1):
//			game();
//			break;
//		case(0):
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
