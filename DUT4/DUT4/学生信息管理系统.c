//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct student
//{
//	int num;
//	char name[20];
//	int math;
//	int chinese;
//	int english;
//};
//struct node
//{
//	struct student data;
//	struct node* next;
//};
//struct node* createnode()
//{
//	struct node* headnode = (struct node*)malloc(sizeof(struct node));
//	headnode->next = NULL;
//	return headnode;
//}
//void insertnode(struct node* headnode, struct student data)
//{
//	struct node* newnode = (struct node*)malloc(sizeof(struct node));
//	newnode->next = headnode->next;
//	headnode->next = newnode;
//	newnode->data = data;
//}
//void listprint(struct node* headnode)
//{
//	struct node* pmove = headnode->next;
//	printf("num\tname\tmath\tchinese\tenglish\n");
//	while (pmove != NULL)
//	{
//		printf("%d\t%s\t%d\t%d\t%d", pmove->data.num, pmove->data.name, pmove->data.math, pmove->data.chinese, pmove->data.english);
//		pmove = pmove->next;
//		printf("\n");
//	}
//}
//struct node* newnodex(struct student data)
//{
//	struct node* newnode = (struct node*)malloc(sizeof(struct node));
//	newnode->data = data;
//	newnode->next = NULL;
//	return newnode;
//}
//void replacenode(struct node* headnode, char a[], struct student data)
//{
//	struct node* node1 = headnode;
//	struct node* node2 = headnode->next;
//	struct node* newnode = newnodex(data);
//	while (node2 != NULL)
//	{
//		if (strcmp(node2->data.name, a) == 0)
//		{
//			newnode->next = node2->next;
//			node1->next = newnode;
//			free(node2);
//			break;
//		}
//		node1 = node2;
//		node2 = node2->next;
//	}
//}
//int nodelength(struct node* headnode)
//{
//	int count = 0;
//	struct node* imove = headnode->next;
//	while (imove != NULL)
//	{
//		count++;
//		imove = imove->next;
//	}
//	return count;
//}
//void sortnodebydictionaryincrease(struct node* headnode)
//{
//	int length = nodelength(headnode);
//	struct node* imove = headnode->next;
//	int i = 0;
//	for (i = 1; i < length; i++)
//	{
//		while (length >= 2)
//		{
//			if (strcmp(imove->data.name, imove->next->data.name) > 0)
//			{
//				struct student temp = imove->data;
//				imove->data = imove->next->data;
//				imove->next->data = temp;
//
//			}
//			imove = imove->next;
//			length--;
//		}
//		length = 3;
//		imove = headnode->next;
//	}
//}
//
////void menu()
////{
////	printf("###################################################\n");
////	printf("##                                               ##\n");
////	printf("##              学生信息管理系统                 ##\n");
////	printf("##                                               ##\n");
////	printf("##                0.退出管理系统                 ##\n");
////	printf("##                1.录入学生信息                 ##\n");
////	printf("##                2.修改学生信息                 ##\n");
////	printf("##                3.删除学生信息                 ##\n");
////	printf("##                4.查询学生信息                 ##\n");
////	printf("##                5.浏览学生信息                 ##\n");
////	printf("##                6.排序学生信息                 ##\n");
////	printf("##                                               ##\n");
////	printf("###################################################\n");
////}
//int main()
//{
//	struct node* headnode = createnode();
//	struct student stu;
//	int input;
//	while (1)
//	{
//		printf("请输入学生的学号/姓名/语文成绩/数学成绩/英语成绩\n");
//		setbuf(stdin, NULL);
//		scanf("%d%s%d%d%d", &stu.num, stu.name, &stu.chinese, &stu.math, &stu.english);
//		insertnode(headnode, stu);
//		setbuf(stdin, NULL);
//		printf("continue:y/n\n");
//		char choice;
//		setbuf(stdin, NULL);
//		choice = getchar();
//		if (choice == 'n')
//			break;
//	}
//
//	char a[20];
//	listprint(headnode);
//	sortnodebydictionaryincrease(headnode);
//	listprint(headnode);
//	printf("\n");
//	scanf("%s", a);
//	printf("请输入学生的学号/姓名/语文成绩/数学成绩/英语成绩\n");
//	scanf("%d%s%d%d%d", &stu.num, stu.name, &stu.chinese, &stu.math, &stu.english);
//	replacenode(headnode, a, stu);
//	listprint(headnode);
//	printf("录入学生共有%d个", nodelength(headnode));
//	return 0;
//}
