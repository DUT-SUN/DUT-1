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
////	printf("##              ѧ����Ϣ����ϵͳ                 ##\n");
////	printf("##                                               ##\n");
////	printf("##                0.�˳�����ϵͳ                 ##\n");
////	printf("##                1.¼��ѧ����Ϣ                 ##\n");
////	printf("##                2.�޸�ѧ����Ϣ                 ##\n");
////	printf("##                3.ɾ��ѧ����Ϣ                 ##\n");
////	printf("##                4.��ѯѧ����Ϣ                 ##\n");
////	printf("##                5.���ѧ����Ϣ                 ##\n");
////	printf("##                6.����ѧ����Ϣ                 ##\n");
////	printf("##                                               ##\n");
////	printf("###################################################\n");
////}
//void print()
//{
//	FILE* fp = fopen("ѧ����Ϣ����ϵͳ.txt", "r");
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
//			//��ȡ�������⣺1.�����ȡ����ʵ��ÿ�ζ�ȡһ�����һ�����
//			//���У������������
//			//���о��ǻ�ûʵ���ÿ�ζ�ȡһ��������м�ṹ�壬���һ��
//			//��������ṹ�����鳤�Ȳ������Ҷ��壬Ҫʵ�����нṹ��������
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
//	FILE* pf = fopen("ѧ����Ϣ����ϵͳ.txt", "w");
//	int input;
//	while (1)
//	{
//		printf("������ѧ����ѧ��/����/���ĳɼ�/��ѧ�ɼ�/Ӣ��ɼ�\n");
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