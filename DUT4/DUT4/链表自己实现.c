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
//struct node//��һ������Ҫȥ����һ���ṹ�����ͣ��������������ָ����
//{
//	struct student data;//������
//	struct node* next;//ָ����
//};
//struct node* createlist()//�ڶ�������Ҫȥ����һ��������
//{
//	//��������Ҫ����һ��ͷ������ͷ���
//	//��������봴��һ���ռ䣬Ȼ��������ָ�����һ����Ϊ��
//	//�������ͷ���ָ���������
//	struct node* headnode = (struct node*)malloc(sizeof(struct node));
//	headnode->next = NULL;
//	return headnode;
//}
////����һ���½�㣬Ϊ�˺����ܹ�ȥ����
////������ô����ݽ�ȥ��
////Ȼ����Ҫ�����㴴��������½��ĵ�ַ
////�����������������½��Ŀռ�
////����Ҫ������ݸ��ȥ
////���о��ǰ�ָ�����һ����Ϊ��
////�����˷���
//struct node* createnode(struct student data)
//{
//	struct node* newnode = (struct node*)malloc(sizeof(struct node));
//	newnode->data = data;
//	newnode->next = NULL;
//	return newnode;
//}
////��ӡ����
////����ͷ
////��һ���ƶ��Ľṹ��ָ������ӡ
////�տ�ʼ����ָ��ͷָ�����һ�����
////��ÿ�����ָ�����һ��λ�ò�Ϊ��
////�ʹ�ӡ����ƶ��ṹ��ָ��ָ��Ľṹ�������
////Ȼ�������ָ��ָ����һ�����
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
//	//1.��������Ľ��
//	struct node* newnode = createnode(data);
//	newnode->next = headnode->next;
//	headnode->next = newnode;
//	//headnode->data = data;
//}
////�����ָ��λ�õ�ɾ��
////�����ָ��λ�õ�ɾ��
////�տ�ʼ����һ��Ҫȥָ��Ŀ�����ݵ�ָ��ָ��ͷָ�����һ��
////�ٶ���һ�����ָ��ǰ���һ����ʼ��Ϊͷָ��
////�жϴ������������ǲ��ǿգ�����ǿվͲ������
////Ȼ����Ҫ������������posnode��dataȥ�����Ǹ��಻���
////����ȵ�ʱ����ǰ����Ǹ�ָ��ָ�����ڵ�λ��
////�����ڵ�λ��ָ���Լ���һ��λ��
////����Һ����ָ��ָ�����һ���Ѿ��ǿգ���ô����û�ҵ�
////�������ҵ�������ѭ��
////�����Һ�����Ǹ�ָ��ָ��ľ����Ǹ���Ҫɾ���ĵط�
////Ȼ������ǰ���ָ��ָ��Ľ��ָ�������Ǹ�ָ��ָ�����һ��
////Ȼ���Ҿ���Ҫȥ�ͷ�����ռ�
////
//void deletenodebyappoin(struct node* headnode, int num)
//{
//	struct node* posnode = headnode->next;
//	struct node* posnodefront = headnode;
//	if (posnodefront == NULL)
//		printf("�޷�ɾ���б�Ϊ��\n");
//	else
//	{
//		while		 (posnode->data.num != num)
//		{
//			posnodefront = posnode;
//			posnode = posnodefront->next;
//			if (posnode == NULL)
//			{
//				printf("û���ҵ������Ϣ�޷�ɾ��");
//				return;
//			}
//		}
//		posnodefront->next = posnode->next;
//		free(posnode);
//	}
//}
////void delete1(struct node* headnode, int num)
////{
////	struct node* pmove = headnode;//ͷ 3 2 1
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
////	printf("û���ҵ�\n");
////}
//int main()
//{
//	struct node* list = createlist();
//	struct student info;
//	while (1)
//	{
//		printf("������ѧ�������� ѧ�� ��ѧ�ɼ�\n");
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
//	printf("��������Ҫɾ����ѧ��ѧ�ţ�");
//	scanf("%d", &info.num);
//	deletenodebyappoin(list, info.num);
//	printlist(list);
//	return 0;
//}
