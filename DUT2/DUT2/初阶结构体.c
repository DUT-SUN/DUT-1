//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//struct stu//struct�ṹ��ؼ���stu�ṹ���ǩstruct stu����һ��нṹ������
//{
//	char name[20];//��Ա����
//	short age;
//	char tele[20];
//	char sex[5];
//}s1,s1,s3;//ȫ�ֽṹ�����
//int main()
//{
//	struct stu s;//s���Ǿֲ�����
//	return 0;
//}
//typedef struct stu//typedef��struct stu����������������Ϊstu
//{
//	char name[20];//��Ա����
//	short age;
//	char tele[20];
//	char sex[5];
//}stu;
//�õ�ʱ�����stu s1={..};
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
//	printf("%s",arr );//�ṹ����Խ���Ƕ��
//	return 0;
//}
//����print1(stu tmp) ��printf1(s),��ӡprintf("%s",tmp.name);
//����print2(stu* ps) ��printf2(&s),��ӡprintf("%s",ps->name);�����õڶ��֣����δ����ǵ�ַռ��С
//���ݽṹ:
// һ���������ݽṹ1.˳����������2.���������ŵ����������ϡ�
// 3.ջ��ջ����ջ���������ݴ���ջ�Ĳ�����ѹջɾ��һ��Ԫ�ؽг�ջ
// �ṹ��̫�����ѹջ��ϵͳ�����Ƚϴ󣬵������ܵ��½����Խṹ�崫�δ���ַ���ܴ��ṹ�屾��
// 4.����
//�����������ݽṹ1.������
//����ͼ

