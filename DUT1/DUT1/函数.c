//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//	int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//���԰�1�Ŀ�����2������
//
//	return 0;
//}
//memset ����memory�ڴ�set����
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr[] = "helloworld";
//	memset(arr, 'a', 5);
//		printf("%s", arr);
//	return 0;
//}
//ע�����Զ���swap����intxinty�����ǲ��ܽ���swap��a��b������Ϊ��ֻ�ǽ�����x��y��ֵ
////
//void swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
//void swap2(int* pa, int* pb)
//{
//
//int	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	scanf_s("%d,%d", &a,& b);
//	//int a = 10;
//	//int *pa = &a;
//	//*pa = 20;
//	//printf("%d", a);
//	swap1(a, b);
//	printf("%d,%d", a, b);
//	swap2(&a,& b);
//	printf("%d,%d", a, b);
//	return 0;
//}
////ע���ˣ������������ⲿ���ν�����ʱ��Ϊ�˱����ڴ��˷ѣ�ֻ�ᴫ���β��������λ�ĵ�ַ
//int binary_search(int arr[], int k,int right)//��right�ں����ⲿ�����ഫһ��right�������У���Ȼ���������С������һ��������ʵ��Ϊ1��
//{
//	int left = 0;
//	
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = binary_search(arr, k,right);
//	if(ret==-1)
//	{
//		printf("�Ҳ���ָ��������");
//	}
//	else
//	{
//		printf("�ҵ����±��ǣ�%d", ret);
//	}
//	return 0;
//}
//void add(int* p)
//{
//	++* p;//*p++�ǲ����Ե���Ϊ�Ӽ����ȼ�����*������*p��ֵû�ı䣬++*p���ߣ�*p��++���ǿ��Ե�
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d", num);
//	add(&num);
//	printf("%d", num);
//	return 0;
//}
////��������Ƕ�׵���
////��ʽ���ʰ�һ�������ķ���ֵ��Ϊ��һ�������Ĳ�����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
///*	int len = 0;
//	len=strlen("abc");
//	printf("%d\n", len)*/;
//	printf("%d\n",strlen("abc"))
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d",printf("%d", printf("%d", printf("%d", 43))));//ÿ��printf�������ֵ�ͷ���ֵ���������printf���43������2����һ�����2����1�����һ�����1����1�����Ӹ�printf��֤����
//
//	return 0;
//}
//
//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int n = add(a, b);
//	printf("%d\n", n);
//
//	return 0;
//}
//
////������˵�����������ţ�vs����汾���ǿ������У�����Ժ󱨴�˵addû���������ʹ��ǰ����
////����int Add��int��int��;
