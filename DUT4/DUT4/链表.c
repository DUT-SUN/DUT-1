//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h> //标准输入输出头文件
//#include<stdlib.h>//包含了C、C++语言的最常用的系统函数
//#define LEN sizeof(struct Student)//宏定义节点长度得命名
//#define TYPE struct Student//宏定义结构体变量命名
//struct Student//定义一个学生类型结构体，包括学号，分数
//{
//	long num;
//	float score;
//	struct Student* next;//next是指针变量，指向结构体变量
//};
////指向结构体对象得指针变量既可以指向结构体变量，也可以指向结构体数组中得元素
//int main()
//{
//	TYPE* head, * p;//定义头指针
//	struct Student a, b, c;//定义三个结构体变量
//	a.num = 101; a.score = 20;//分别对三个结点赋值
//	b.num = 102; b.score = 20;
//	c.num = 103; c.score = 20;
//	/*1、A.B则A为对象或者结构体
//	  2、A->B则A为指针，->是成员提取，A->B是提取A中的成员B，A只能是指向类、结构、联合的指针；*/
//	head = &a;
//	a.next = &b;
//	b.next = &c;
//	c.next = NULL;
//	p = head;//把首地址给变量
//	do
//	{
//		printf("%ld %5.1f\n", p->num, p->score);//输出每个结点信息
//		p = p->next;//使P指向下一个结点
//	} while (p != NULL);//直到指针域指向空值
//	return 0;
//}
//#include<stdio.h> //标准输入输出头文件
//#include<stdlib.h>//包含了C、C++语言的最常用的系统函数
//#include<malloc.h>//动态存储分配函数头文件
//#define LEN sizeof(struct Student)//宏定义节点长度得命名
//#define TYPE struct Student//宏定义结构体变量命名
//struct Student//定义一个学生类型结构体，包括学号，分数
//{
//	long num;
//	float score;
//	struct Student* next;//next是指针变量，指向结构体变量
//};
////指向结构体对象得指针变量既可以指向结构体变量，也可以指向结构体数组中得元素
//TYPE* Creat(void)//定义函数，此函数返回一个指向链表头的指针
//{
//	TYPE* head;//定义头指针
//	TYPE* p1, * p2;//定义两个 指针变量用来相互保存
//	int number = 0;//开始时，结点清零
//	p1 = p2 = (TYPE*)malloc(LEN);//创建存储空间
//	printf("请按格式输入学生学号，分数\n");//输出提示信息
//	printf("例如101,1 并以0,0结束\n");
//	scanf("%ld,%f", &p1->num, &p1->score);//按格式输入第一个结点的信息
//	head = NULL;//第一个结点头指针赋空值
//	while (p1->num != 0)//循环直到输入学生学号为0，就结束
//	{
//		number++;//结点自增
//		if (number == 1)//如果只有一个结点，那么头指针指向第一个输入的结点
//			head = p1;
//		else
//			p2->next = p1;//如果大于1个，那么要用next保存前一个结点的信息
//		p2 = p1;//保存前一个结点信息
//		p1 = (TYPE*)malloc(LEN);//开辟新的结点
//		scanf("%ld,%f", &p1->num, &p1->score);//输入下一个结点信息
//	}
//	p2->next = NULL;//循环结束，将指向信息赋空值
//	return (head);//返回首地址
//}
//int main()
//{
//	TYPE* pt;//定义一个结构体指针变量
//	pt = Creat();//函数返回链表第一个结点的地址
//	printf("\nnum:%ld\nscore:%5.lf\n", pt->num, pt->score);//输出第一个结点的成员值
//	return 0;
//}
