//��ι��Ұָ��
//��ʼ�������㲻֪��ָ�����Ҫ��ʼ��ʲô��ʱ�򣬿�����int*p=NULL
//С��ָ��Խ��
//ָ��ָ��ռ��ͷż�ʹ����NULL,��˼�����Ǳ���int a=10;int *p=&a;*p=20;Ȼ���㲻����p�ˣ���дp=NULL;
//ָ��ʹ��֮ǰ�����Ч��if(pa!=NULL)��������Ϳ�����pa���ָ��
//ָ�����㣺ָ��Ӽ�������ָ���ָ��(ָ���ָ��õ������м��Ԫ�ظ������ַ��С��ַ���ǣ�С�ļ���Ļ������)��
// ָ�������ʱ��&arr��9��-&ch��0���Ǵ���ģ������������Ͳ�ͬ���ó��Ľ����δ֪�ģ�������ַ�������ָ�����ͬһ��ռ�
//ָ��Ĺ�ϵ����(ָ����бȽϵ�ʱ��c���Ա�׼�涨������ָ������Ԫ�ص�ָ����������ıȽϲ����������ǰ��ıȽϣ���Ȼ�󲿷ֱ������������У����ǲ�����)
// #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//
//	}
//
//	return 0;
//}
//int my_strlen(char*str)//���ַ������ȵ�һ�ּ������ڶ��ֵݹ�������ַ���
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//#define N_VALUES 5
//#include<stdio.h>
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp;
//	}
//	return 0;
//}
//����ָ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int**ppa=&pa;//��Щ***��ô����أ��������Ϊppaǰ��һ��*������ppa�Ǹ�ָ���������ǰ����������˵��ppa�Ǹ�����ָ��
//	**ppa = 20;
//	printf("%d", a);
//	return 0;
//}
//ָ������-����
//����ָ��-ָ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int arr[3] = { a,b,c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", arr[i]);//1��ӡ����ֵ
//		printf("%p\n", arr[i]);//2��
//		printf("%p\n", &arr[i]);//3��ӡ������Ԫ�صĵ�ַ
//		printf("%d\n", &arr[i]);//4��
//	}
//	int*d[3] = {&a,&b,&c};//ָ������
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(d[i]));//5��ӡ��ָ�������и���Ԫ�ص�ַ��ָ���ֵ
//		printf("%d\n", d[i]);//6��
//		printf("%p\n", d[i]);//7��ӡ����������ָ���Ԫ�صĵ�ַ
//	}
//	return 0;
//}