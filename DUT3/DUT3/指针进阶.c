//#define _CRT_SECURE_NO_WARNINGS 1
//1.�ַ�ָ��(char*)  

//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char*pc=arr;
//	printf("%s", *pc);
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";//"abcdef"��һ�������ַ���,��������˵���ַ����ŵ�p����
// //���붼֪��������ַ���7���ֽڣ�һ��ָ���4���ֽ��ú��Ӹ��ȥ
// //��ô�����ʵ�ǰ�a���׵�ַ�ŵ���p��
// 
//	//*p = 'w';//����Ǹ����޷����еģ���Ϊ����ַ����ǳ����ַ��������Ը���
//	// segmentfault�δ��󣺷��ʷǷ��ڴ桢��Ҫ��ô���أ�д�����Ӧ����charǰ��const
//	// ����*p�Ͳ��ܱ�����
//	//��ʵ�ǰ�a�ĵ�ַ���p
//	printf("%c", *p);
//     printf("%s",p);
//	return 0;
//}
//#include<stdio.h>//������
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char *p2 = "abcdef";
//
//	if (arr1 == arr2)//������a�ĵ�ַ�ɲ�ͬ���Ҳ�
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)//�Ҳ��ˣ���Ϊ"abcdef"�ǳ����ַ��������Բ����2�ݣ���������ָ�붼��ָ��ͬһ������
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//ָ������
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//����������������-ָ������
//	char* pch[5];//����ַ�ָ�������-ָ������
//	return 0;
//}
//#include<stdio.h>//ָ�����鲻������ô�ͼ���̫����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int i;
//	int* arr[4] = { &a,&b,&c,&d };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", *arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
