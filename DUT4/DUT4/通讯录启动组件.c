//#define _CRT_SECURE_NO_WARNINGS 1
//#include"ͨѶ¼.h"
//void initcontact(struct contact* ps)
//{
//	memset(ps->data, 0, sizeof(ps->data));
//	ps->size = 0;//����ͨѶ¼�ʼ��һ��Ԫ��
//}
//void addcontact(struct contact* ps)
//{
//	if (ps->size == MAX)
//	{
//		printf("ͨѶ¼�������޷�����\n");
//	}
//	else
//	{
//		printf("���������֣�");
//		scanf("%s", ps->data[ps->size].name);
//		printf("���������䣺");
//		scanf("%d", &ps->data[ps->size].age);
//		printf("�������Ա�");
//		scanf("%s", ps->data[ps->size].sex);
//		printf("������绰��");
//		scanf("%s", ps->data[ps->size].tele);
//		printf("�������ַ��");
//		scanf("%s", ps->data[ps->size].addr);
//		ps->size++;
//		printf("��ӳɹ���\n");
//	}
//}
//void showcontact(const struct contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("ͨѶ¼Ϊ�ո�");
//	}
//	else
//	{
//		int i = 0;
//		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
//		for (i = 0; i < ps->size; i++)
//		{
//			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
//
//		}
//	}
//}
//static int findbyname(struct contact* ps, char name[MAX])//ȥ�� 
////�صذ�װ�������Ϊ�˷�ֹ׸��
//{
//	int i;
//	for (i = 0; i < ps->size; i++)
//	{
//		if (strcmp(ps->data[i].name, name) == 0)
//		{
//			return i;
//		}
//
//	}
//	return -1;
//}
//void delcontact(struct contact* ps)
//{
//	char name[MAX];
//	printf("��������Ҫɾ��������");
//	scanf("%s", name);
//	int pos = findbyname(ps, name);
//	//1.����Ҫ ɾ����������
//	//2.ɾ��
//	if (pos == -1)
//	{
//		printf("Ҫɾ�����˲�����!");
//	}
//	else
//	{
//
//		int k;
//		for (k = pos + 1; k < ps->size; k++)
//		{
//			struct peoinfo temp = ps->data[k];
//			ps->data[k - 1] = ps->data[k];
//			ps->data[k] = temp;
//		}
//		ps->size--;
//		printf("ɾ���ɹ���\n");
//	}
//}
//
//void searchcontact(struct contact* ps)
//{
//	char name[MAX];
//	printf("��������Ҫ���ҵ�����:");
//	scanf("%s", name);
//	int x = findbyname(ps, name);
//	if (x != -1)
//	{
//		printf("�ҵ��ˣ�λ����%d��\n", x + 1);
//	}
//	else
//	{
//		printf("û�ҵ���\n");
//	}
//}
//void modifycontact(struct contact* ps)//�޸�
//{
//	char name[MAX];
//	printf("������Ҫ�޸ĵ��˵����֣�");
//	scanf("%s", name);
//	int pos = findbyname(ps, name);
//	if (pos == -1)
//	{
//		printf("��Ҫ�޸ĵ��˲����ڣ�");
//	}
//	else
//	{
//		printf("����Ҫ�޸�Ϊ����Ϣ��\n");
//		printf("���������֣�");
//		scanf("%s", ps->data[pos].name);
//		printf("���������䣺");
//		scanf("%d", &ps->data[pos].age);
//		printf("�������Ա�");
//		scanf("%s", ps->data[pos].sex);
//		printf("������绰��");
//		scanf("%s", ps->data[pos].tele);
//		printf("�������ַ��");
//		scanf("%s", ps->data[pos].addr);
//
//		printf("�޸ĳɹ���\n");
//	}
//}
//int cmp1(const void* a,const void* b)
//{
//
//    struct contact* pa = (struct contact*)a;
//	struct contact* pb = (struct contact*)b;
//	int num1 = pa->data->age;
//	int num2 = pb->data->age;
//
//    return (int)num1 - num2;   // ��С����
//    
//}
//int cmp2(const void* a, const void* b)
//{
//
//	struct contact* pa = (struct contact*)a;
//	struct contact* pb = (struct contact*)b;
//	int num1 = pa->data->age;
//	int num2 = pb->data->age;
//
//	return (int)num2 - num1;   // �Ӵ�С��
//
//}
//int cmp3(const void* a, const void* b)
//{
//	struct peoinfo* pa = (struct peoinfot*)a;
//	struct peoinfo* pb = (struct peoinfo*)b;
//	char* p = (char*)(pa->name);
//	char* q = (char*)(pb->name);
//	return strcmp(p, q);
//}
//int cmp4(const void* a, const void* b)
//{
//	struct peoinfo* pa = (struct peoinfot*)a;
//	struct peoinfo* pb = (struct peoinfo*)b;
//	char* p = (char*)(pa->tele);
//	char* q = (char*)(pb->tele);
//	return strcmp(p,q);
//}
//
//void telesort(struct contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("ͨѶ¼Ϊ�գ�");
//	}
//	else
//	{
//		qsort(ps->data, ps->size, sizeof(struct  peoinfo), cmp3);
//	}
//}
//void namesort(struct contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("ͨѶ¼Ϊ�գ�");
//	}
//	else
//	{
//		qsort(ps->data, ps->size, sizeof(struct  peoinfo), cmp3);
//	}
//}
//void agesort1(struct contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("ͨѶ¼Ϊ�գ�");
//	}
//	else
//	{
//		qsort(ps->data, ps->size, sizeof(struct  peoinfo), cmp1);
//	}
//}
//void agesort2(struct contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("ͨѶ¼Ϊ�գ�");
//	}
//	else
//	{
//		qsort(ps->data, ps->size, sizeof(struct  peoinfo), cmp2);
//	}
//}
//void sortcontact(struct contact* ps)
//{
//	int input;
//	printf("����ʽ�У�\n");
//	printf("1.����͵�������\n");
//	printf("2.����ߵ�������\n");
//	printf("3.�����ֵ�˳������\n");
//	printf("4.�绰����˳������\n");
//	printf("�����������ʽ����ţ���");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		agesort1(ps);
//		break;
//	case 2:
//		agesort2(ps);
//		break;
//	case 3:
//		namesort(ps);
//		break;
//	case 4:
//		//telesort(ps);
//		break;
//	default:
//		printf("�������\n");
//	}
//}
