//#define _CRT_SECURE_NO_WARNINGS 1
//
////1.���1000��������Ϣ
////����/�绰/�Ա�/סַ/����
////���Ӻ�����Ϣ
////ɾ��������Ϣ
////���Һ�����Ϣ
////�޸ĺ�����Ϣ
////��ӡ������Ϣ
////���������Ϣ
//#include"ͨѶ¼.h"
//
//void menu()
//{
//	printf("##################################################\n");
//	printf("######          1.add       2.del          #######\n");
//	printf("######          3.search    4.modify       #######\n");
//	printf("######          5.show      6.sort         #######\n");
//	printf("######                0.exit               #######\n");
//	printf("##################################################\n");
//}
//int main()
//{
//	int input = 0;
//	struct contact con;
//	initcontact(&con);
//	int size = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case exit://ͨ��ö���ļ��ɶ������
//			printf("�˳�ͨѶ¼");
//			break;
//		case add:
//			addcontact(&con);
//			break;
//		case del:
//			delcontact(&con);
//			break;
//		case search:
//			searchcontact(&con);
//			break;
//		case modify:
//			modifycontact(&con);
//			break;
//		case show:
//			showcontact(&con);
//			break;
//		case sort:
//			sortcontact(&con);
//			break;
//		
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}