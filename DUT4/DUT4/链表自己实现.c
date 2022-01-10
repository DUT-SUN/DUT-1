//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct student
//{
//	char name[20];
//	int num;
//	int math;
//};
//struct node//第一步我需要去创建一个结构体类型，其中有数据域和指针域
//{
//	struct student data;//数据域
//	struct node* next;//指针域
//};
//struct node* createlist()//第二步就需要去创建一个链表了
//{
//	//首先你需要创建一个头结点这个头结点
//	//首先你必须创建一个空间，然后将这个结点指向的下一个置为空
//	//返回这个头结点指针给主函数
//	struct node* headnode = (struct node*)malloc(sizeof(struct node));
//	headnode->next = NULL;
//	return headnode;
//}
////创建一个新结点，为了后来能够去插入
////创建你得传数据进去把
////然后需要返回你创建的这个新结点的地址
////在这个函数创建这个新结点的空间
////把你要搞的数据搞进去
////还有就是把指向的下一个置为空
////别忘了返回
//struct node* createnode(struct student data)
//{
//	struct node* newnode = (struct node*)malloc(sizeof(struct node));
//	newnode->data = data;
//	newnode->next = NULL;
//	return newnode;
//}
////打印链表
////传入头
////用一个移动的结构体指针来打印
////刚开始让他指向头指向的下一个结点
////当每个结点指向的下一个位置不为空
////就打印这个移动结构体指针指向的结构体的数据
////然后让这个指针指向下一个结点
//void printlist(struct node* headnode)
//{
//	struct node* pmove = headnode->next;
//	printf("name\tnum\tmath\n");
//	while (pmove)
//	{
//
//		printf("%s\t%d\t%d\n", pmove->data.name, pmove->data.num, pmove->data.math);
//		pmove = pmove->next;
//	}
//	printf("\n");
//}
//void insertnodebyhead(struct node* headnode, struct student data)
//{
//	//1.创建插入的结点
//	struct node* newnode = createnode(data);
//	newnode->next = headnode->next;
//	headnode->next = newnode;
//	//headnode->data = data;
//}
////链表的指定位置的删除
////链表的指定位置的删除
////刚开始定义一个要去指向目标数据的指针指向头指向的下一个
////再定义一个这个指针前面的一个初始化为头指针
////判断传过来的链表是不是空，如果是空就不输出空
////然后主要部分在于你用posnode的data去看和那个相不相等
////不想等的时候让前面的那个指针指向现在的位置
////让现在的位置指向自己下一个位置
////如果我后面的指针指向的下一个已经是空，那么就是没找到
////现在我找到后跳出循环
////现在我后面的那个指针指向的就是那个我要删除的地方
////然后我让前面的指针指向的结点指向后面的那个指针指向的下一个
////然后我就需要去释放这个空间
////
//void deletenodebyappoin(struct node* headnode, int num)
//{
//	struct node* posnode = headnode->next;
//	struct node* posnodefront = headnode;
//	if (posnodefront == NULL)
//		printf("无法删除列表为空\n");
//	else
//	{
//		while		 (posnode->data.num != num)
//		{
//			posnodefront = posnode;
//			posnode = posnodefront->next;
//			if (posnode == NULL)
//			{
//				printf("没有找到相关信息无法删除");
//				return;
//			}
//		}
//		posnodefront->next = posnode->next;
//		free(posnode);
//	}
//}
////void delete1(struct node* headnode, int num)
////{
////	struct node* pmove = headnode;//头 3 2 1
////	while (pmove->next != NULL)
////	{
////		if (pmove->next->data.num == num)
////		{
////       struct node*p=pmove->next;
////			pmove->next = pmove->next -> next;
////			free(p);
////			return;
////		}
////		pmove = pmove->next;
////	}
////	printf("没有找到\n");
////}
//int main()
//{
//	struct node* list = createlist();
//	struct student info;
//	while (1)
//	{
//		printf("请输入学生的姓名 学号 数学成绩\n");
//		setbuf(stdin, NULL);
//		scanf("%s%d%d", info.name, &info.num, &info.math);
//		insertnodebyhead(list, info);
//		printf("continue:YES or NO\n");
//
//		setbuf(stdin, NULL);
//		char choice[20];
//		scanf("%s", choice);
//		if (strcmp(choice, "NO") == 0)
//		{
//			break;
//		}
//	}
//	//delete1(list, 2);
//	printlist(list);
//	printf("请输入你要删除的学生学号：");
//	scanf("%d", &info.num);
//	deletenodebyappoin(list, info.num);
//	printlist(list);
//	return 0;
//}
