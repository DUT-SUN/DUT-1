//#define _CRT_SECURE_NO_WARNINGS 1
//����ָ������Ӧ�ã�
//#include<stdio.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("**   1.add        2.sub      **\n");
//	printf("**   3.mul        4.div      **\n");
//	printf("*************0.exit************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input, x, y;
//	int(*pfarr[5])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//
//		menu();
//		printf("��ѡ��->");
//		scanf("%d", &input);
//		printf("������2��������");
//		scanf("%d%d", &x, &y);
//		if (input >= 1 && input <= 4)
//		{
//			printf("%d\n",pfarr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//			
//		}
//		else
//		{
//			printf("ѡ�����");
//		}
//		/*switch (input)
//		{
//		case 1:
//			printf("%d\n",add(x,y));
//			break;
//		case 2:
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("�˳�");
//			break;
//		default:
//			printf("ѡ����");
//			break;
//		}*/
//		
//	} while (input);
//	
//
//	return 0;
//}

// 
//ָ����ָ�������ָ��
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*p1[5])(int, int);
//	int(*   (*p1)[5]     )    (int,int) = &p1;
//	//p1��һ��ָ����ָ�������ָ�룬ָ��ָ���������5��Ԫ�أ�Ԫ�������ǲ���Ϊ2��int����ֵΪint�ĺ���
//	return 0;
//}
//�ص�������һ��ͨ������ָ����õĺ���
//�����Ѻ���ָ��ĵ�ַ��Ϊ�������ݸ���һ������
//�����ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú���
//��ʵ�ַ�ֱ�ӵ��õģ����ڶԸ��¼�������������Ӧ
//#include<stdio.h>
//void print(char* str)
//{
//	printf("hehe%s",str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}