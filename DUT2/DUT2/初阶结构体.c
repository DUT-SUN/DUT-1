//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//struct stu//struct结构体关键字stu结构体标签struct stu两个一起叫结构体类型
//{
//	char name[20];//成员变量
//	short age;
//	char tele[20];
//	char sex[5];
//}s1,s1,s3;//全局结构体变量
//int main()
//{
//	struct stu s;//s这是局部变量
//	return 0;
//}
//typedef struct stu//typedef将struct stu这种类型重新命名为stu
//{
//	char name[20];//成员变量
//	short age;
//	char tele[20];
//	char sex[5];
//}stu;
//用的时候可以stu s1={..};
//
//#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct	S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = { "hellobit!\n" };
//	struct T t = { "hehe",{100,'w',"helloworld",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	printf("%s",arr );//结构体可以进行嵌套
//	return 0;
//}
//定义print1(stu tmp) 传printf1(s),打印printf("%s",tmp.name);
//定义print2(stu* ps) 传printf2(&s),打印printf("%s",ps->name);建议用第二种，传参传的是地址占用小
//数据结构:
// 一、线性数据结构1.顺序表：连续存放2.链表：随机存放但是能链接上。
// 3.栈：栈顶进栈顶出将数据存入栈的操作是压栈删除一个元素叫出栈
// 结构体太大参数压栈的系统开销比较大，导致性能的下降所以结构体传参传地址不能传结构体本身
// 4.队列
//二、树型数据结构1.二叉树
//三、图

