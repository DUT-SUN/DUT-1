//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//ָ������int*arr[5]
// 1һά���鴫��     ���²�������
//void test(int arr[])����һ����������
//void test(int arr[10])����һ����СΪ10����������
//{}
//void test(int *arr)//����һ��ָ��
//{}
//void test2(int*arr[20])���ö�Ӧ
//{}
//void test2(int **arr)ָ���������Ԫ���Ǹ�ָ�룬�������Ԫ�ص�ַ��������Ȼ�����ö���ָ��������
//{}

//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}
//2��ά���鴫��
//#include<stdio.h>
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int *arr)
//{}����
//void test(int**arr)
//{}����
//void test(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//��ά�������Ԫ�ص�ַ�ǵ�һ�еĵ�ַ
//	return 0;
//}
//3һ��ָ�봫��//����Ϊһ��ָ����ô���ܹ�����ȥ����һ�������ĵ�ַ���ߴ����������ַ��һ��ָ��
//4����ָ�봫��//����Ϊ����ָ����ô���ܹ�����ȥ����һ��ָ��ĵ�ַ�����紫��ȥָ��������������
//���ߴ����һ��ָ���ַ�Ķ���ָ��
// ����ָ�롪��ָ������ָ�루������ָ��һ����䣩
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int b = 20;
//	int a = 10;
//	printf("%d\n",add(a, b));
//	printf("%p", add);//����Ҳ�е�ַ
//	printf("%p", &add);//���������嶼�Ǻ����ĵ�ַ
//	int (*pa)(int, int) = add;//paָ��һ������������Ϊint��
//	printf("%d", (*pa)(2, 3));
//	
//	return 0;
//}
//����1��
//(*(void (*)())0)();
// //��0ǿ������ת���ɺ���ָ�����ͣ�Ȼ�����������Ȼ�����0��ַ���ĺ���
//����2
//void(*    signal(int ,void(*)(int))    )(int)��//����������
//������ָ���һ�����δ���signal����������������;��Ǻ���ָ��
//�������
//typedef void(*pfun_t)(int);//ע������������ں������棬��typedef unsigned int uint;��һ�����Ƿź���
//pfun_t signal(int, pfun_t);
//����������һ��add������pa��add������ָ��Ȼ����õ�ʱ�����pa(2,3),Ҳ����(*pa)(2,3)���Ų��ܶ���
//����paǰ��*********������û������

//����ָ������
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
//#include<stdio.h>
//int main()
//{
//	
//	int(*   pa[4]   )(int, int) = { add,sub,mul,div };//�����ô����أ�
//	//pa��ָ��4��˵��pa�Ǹ�4��Ԫ�ص����飬Ȼ��Ԫ�������Ǻ���ָ�룬��������Ϊint int����ֵΪint
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",pa[i](2, 3));
//	}
//	return 0;
//}

//дһ������ָ��pf���ܹ�ָ��my_strcpy
//дһ������ָ������pfarr�ܹ����my_strcpy�����ĵ�ַ�ܹ����4��my_strcpy�ĵ�ַ

//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)//���constΪ�˷�ֹwhile���д������ָ������������ͻ���ʾ���������Ͳ�����ֿ���ʧ�ܣ����ǳ������гɹ�
////2���Ż���Ĵ��룬��src��\0��ʱ�����0���ѭ���ͽ���ȥ�ˡ�
//{
//		assert(dest != NULL);//��������
//		assert(src != NULL);//�������к����������src�ǿ�ָ��ͻᱨ��������ʾ����λ�ã���Ҫ��ͷ�ļ�
//		char*ret = dest;
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	
//	return ret;
//}
//
//int main()
//{
//	char*(*pf)(char*, char*) = &my_strcpy;
//	char a[6] = "abcde";
//	char b[6] = "cdefg";
//	char* x1 = &a;
//	char* x2 = &b;
//	
//	printf("%s\n", (*pf)(x1, x2));
//	char* (*pfarr[5])(char*, char*) = { pf };
//	printf("%s", pfarr[0](x1, x2));
//		return 0;
//}
