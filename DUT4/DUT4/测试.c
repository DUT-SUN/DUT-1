//#define _CRT_SECURE_NO_WARNINGS 1
//
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
//		
//		printf("%d\t%s\t%d\t%d\t%d", pmove->data.num, pmove->data.name, pmove->data.math, pmove->data.chinese, pmove->data.english);
//		pmove = pmove->next;
//		printf("\n");
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
//void print()
//{
//	FILE* fp = fopen("学生信息管理系统.txt", "r");
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i;
//		struct student stu[5];
//		while (fread(stu, sizeof(struct student), 2, fp)!=NULL)
//		{
//			int num;
//			char name[20];
//			int math;
//			int chinese;
//			int english;
//			fread(stu, sizeof(struct student), 2, fp);
//			//读取存在问题：1.这个读取我想实现每次读取一个最后一起输出
//			//不行，会输出烫烫烫
//			//还有就是还没实验过每次读取一个，清空中间结构体，输出一个
//			//现在这个结构体数组长度不能由我定义，要实现所有结构体的输出。
//		}
//		for (i = 0; i < 2; i++)
//		{
//			printf("%d\t%s\t%d\t%d\t%d\n", stu[i].num, stu[i].name, stu[i].math, stu[i].chinese, stu[i].english);
//		}
//	}
//}
//int main()
//{
//	struct node* headnode = createnode();
//	struct student stu;
//	FILE* pf = fopen("学生信息管理系统.txt", "w");
//	int input;
//	while (1)
//	{
//		printf("请输入学生的学号/姓名/语文成绩/数学成绩/英语成绩\n");
//		setbuf(stdin, NULL);
//		scanf("%d%s%d%d%d", &stu.num, stu.name, &stu.chinese, &stu.math, &stu.english);
//		fwrite(&stu, sizeof(struct student), 1, pf);
//		insertnode(headnode, stu);
//		setbuf(stdin, NULL);
//		printf("continue:y/n\n");
//		char choice;
//		setbuf(stdin, NULL);
//		choice = getchar();
//		if (choice == 'n')
//			break;
//	}
//	fclose(pf);
//	print();
//	return 0;
//}
//
////struct student
////{
////	char name[10];
////	int num;
////};
////#include<stdio.h>
////int main()
////{
////
////	struct student stu[5] = { {"1",1}, {"2",2} };
////	int i;
////	for (i = 0; i < 2; i++)
////	{
////		printf("%s,%d\n", stu[i].name, stu[i].num);
////	}
////}