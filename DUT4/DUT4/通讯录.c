//#define _CRT_SECURE_NO_WARNINGS 1
//
////1.存放1000个好友信息
////名字/电话/性别/住址/年龄
////增加好友信息
////删除好友信息
////查找好友信息
////修改好友信息
////打印好友信息
////排序好友信息
//#include"通讯录.h"
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
//		printf("请选择->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case exit://通过枚举文件可读性提高
//			printf("退出通讯录");
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
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}