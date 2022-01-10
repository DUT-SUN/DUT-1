//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>//你可以选择走一步或者走2步
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
//		return test(n - 1) + test(n - 2);//假如你是四层台阶，4层台阶等于3层台阶走法加上2层台阶走法，不用再加2因为是算路径数
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