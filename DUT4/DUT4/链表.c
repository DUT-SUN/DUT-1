//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h> //��׼�������ͷ�ļ�
//#include<stdlib.h>//������C��C++���Ե���õ�ϵͳ����
//#define LEN sizeof(struct Student)//�궨��ڵ㳤�ȵ�����
//#define TYPE struct Student//�궨��ṹ���������
//struct Student//����һ��ѧ�����ͽṹ�壬����ѧ�ţ�����
//{
//	long num;
//	float score;
//	struct Student* next;//next��ָ�������ָ��ṹ�����
//};
////ָ��ṹ������ָ������ȿ���ָ��ṹ�������Ҳ����ָ��ṹ�������е�Ԫ��
//int main()
//{
//	TYPE* head, * p;//����ͷָ��
//	struct Student a, b, c;//���������ṹ�����
//	a.num = 101; a.score = 20;//�ֱ��������㸳ֵ
//	b.num = 102; b.score = 20;
//	c.num = 103; c.score = 20;
//	/*1��A.B��AΪ������߽ṹ��
//	  2��A->B��AΪָ�룬->�ǳ�Ա��ȡ��A->B����ȡA�еĳ�ԱB��Aֻ����ָ���ࡢ�ṹ�����ϵ�ָ�룻*/
//	head = &a;
//	a.next = &b;
//	b.next = &c;
//	c.next = NULL;
//	p = head;//���׵�ַ������
//	do
//	{
//		printf("%ld %5.1f\n", p->num, p->score);//���ÿ�������Ϣ
//		p = p->next;//ʹPָ����һ�����
//	} while (p != NULL);//ֱ��ָ����ָ���ֵ
//	return 0;
//}
//#include<stdio.h> //��׼�������ͷ�ļ�
//#include<stdlib.h>//������C��C++���Ե���õ�ϵͳ����
//#include<malloc.h>//��̬�洢���亯��ͷ�ļ�
//#define LEN sizeof(struct Student)//�궨��ڵ㳤�ȵ�����
//#define TYPE struct Student//�궨��ṹ���������
//struct Student//����һ��ѧ�����ͽṹ�壬����ѧ�ţ�����
//{
//	long num;
//	float score;
//	struct Student* next;//next��ָ�������ָ��ṹ�����
//};
////ָ��ṹ������ָ������ȿ���ָ��ṹ�������Ҳ����ָ��ṹ�������е�Ԫ��
//TYPE* Creat(void)//���庯�����˺�������һ��ָ������ͷ��ָ��
//{
//	TYPE* head;//����ͷָ��
//	TYPE* p1, * p2;//�������� ָ����������໥����
//	int number = 0;//��ʼʱ���������
//	p1 = p2 = (TYPE*)malloc(LEN);//�����洢�ռ�
//	printf("�밴��ʽ����ѧ��ѧ�ţ�����\n");//�����ʾ��Ϣ
//	printf("����101,1 ����0,0����\n");
//	scanf("%ld,%f", &p1->num, &p1->score);//����ʽ�����һ��������Ϣ
//	head = NULL;//��һ�����ͷָ�븳��ֵ
//	while (p1->num != 0)//ѭ��ֱ������ѧ��ѧ��Ϊ0���ͽ���
//	{
//		number++;//�������
//		if (number == 1)//���ֻ��һ����㣬��ôͷָ��ָ���һ������Ľ��
//			head = p1;
//		else
//			p2->next = p1;//�������1������ôҪ��next����ǰһ��������Ϣ
//		p2 = p1;//����ǰһ�������Ϣ
//		p1 = (TYPE*)malloc(LEN);//�����µĽ��
//		scanf("%ld,%f", &p1->num, &p1->score);//������һ�������Ϣ
//	}
//	p2->next = NULL;//ѭ����������ָ����Ϣ����ֵ
//	return (head);//�����׵�ַ
//}
//int main()
//{
//	TYPE* pt;//����һ���ṹ��ָ�����
//	pt = Creat();//�������������һ�����ĵ�ַ
//	printf("\nnum:%ld\nscore:%5.lf\n", pt->num, pt->score);//�����һ�����ĳ�Աֵ
//	return 0;
//}
