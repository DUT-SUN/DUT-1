//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>//�����ѡ����һ��������2��
//
//int  test(int n)
//{
//	if (n < 0)
//		return 0;
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	else
//		return test(n - 1) + test(n - 2);//���������Ĳ�̨�ף�4��̨�׵���3��̨���߷�����2��̨���߷��������ټ�2��Ϊ����·����
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i=test(n);
//	printf("%d", i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int a[5000] = { 0};
//	for (a[0] = 1, a[1] = 2, i = 2; i <n; i++)
//	{
//		a[i] = a[i-1] + a[i - 2];
//		
//			
//	}
//	printf("%d",a[i-1]);
//	return 0;
//}