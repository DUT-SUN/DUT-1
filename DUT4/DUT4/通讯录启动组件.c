//#define _CRT_SECURE_NO_WARNINGS 1
//#include"通讯录.h"
//void initcontact(struct contact* ps)
//{
//	memset(ps->data, 0, sizeof(ps->data));
//	ps->size = 0;//设置通讯录最开始就一个元素
//}
//void addcontact(struct contact* ps)
//{
//	if (ps->size == MAX)
//	{
//		printf("通讯录已满！无法增加\n");
//	}
//	else
//	{
//		printf("请输入名字：");
//		scanf("%s", ps->data[ps->size].name);
//		printf("请输入年龄：");
//		scanf("%d", &ps->data[ps->size].age);
//		printf("请输入性别：");
//		scanf("%s", ps->data[ps->size].sex);
//		printf("请输入电话：");
//		scanf("%s", ps->data[ps->size].tele);
//		printf("请输入地址：");
//		scanf("%s", ps->data[ps->size].addr);
//		ps->size++;
//		printf("添加成功！\n");
//	}
//}
//void showcontact(const struct contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("通讯录为空格");
//	}
//	else
//	{
//		int i = 0;
//		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
//		for (i = 0; i < ps->size; i++)
//		{
//			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
//
//		}
//	}
//}
//static int findbyname(struct contact* ps, char name[MAX])//去找 
////特地包装这个函数为了防止赘余
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
//	printf("请输入你要删除的名字");
//	scanf("%s", name);
//	int pos = findbyname(ps, name);
//	//1.查找要 删除的人在哪
//	//2.删除
//	if (pos == -1)
//	{
//		printf("要删除的人不存在!");
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
//		printf("删除成功！\n");
//	}
//}
//
//void searchcontact(struct contact* ps)
//{
//	char name[MAX];
//	printf("请输入你要查找的名字:");
//	scanf("%s", name);
//	int x = findbyname(ps, name);
//	if (x != -1)
//	{
//		printf("找到了！位置在%d行\n", x + 1);
//	}
//	else
//	{
//		printf("没找到！\n");
//	}
//}
//void modifycontact(struct contact* ps)//修改
//{
//	char name[MAX];
//	printf("输入你要修改的人的名字：");
//	scanf("%s", name);
//	int pos = findbyname(ps, name);
//	if (pos == -1)
//	{
//		printf("你要修改的人不存在！");
//	}
//	else
//	{
//		printf("输入要修改为的信息：\n");
//		printf("请输入名字：");
//		scanf("%s", ps->data[pos].name);
//		printf("请输入年龄：");
//		scanf("%d", &ps->data[pos].age);
//		printf("请输入性别：");
//		scanf("%s", ps->data[pos].sex);
//		printf("请输入电话：");
//		scanf("%s", ps->data[pos].tele);
//		printf("请输入地址：");
//		scanf("%s", ps->data[pos].addr);
//
//		printf("修改成功！\n");
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
//    return (int)num1 - num2;   // 从小到大，
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
//	return (int)num2 - num1;   // 从大到小，
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
//		printf("通讯录为空！");
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
//		printf("通讯录为空！");
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
//		printf("通讯录为空！");
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
//		printf("通讯录为空！");
//	}
//	else
//	{
//		qsort(ps->data, ps->size, sizeof(struct  peoinfo), cmp2);
//	}
//}
//void sortcontact(struct contact* ps)
//{
//	int input;
//	printf("排序方式有：\n");
//	printf("1.年龄低到高排序\n");
//	printf("2.年龄高到低排序\n");
//	printf("3.名字字典顺序排序\n");
//	printf("4.电话号码顺序排序\n");
//	printf("输入你的排序方式（序号）：");
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
//		printf("输入错误\n");
//	}
//}
