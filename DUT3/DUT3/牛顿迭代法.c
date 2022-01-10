//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//double test(int a,int b,int c,int d)
//{
//	double x0, x1;
//	x0 = 0;
//	x1 = 1;
//	while (x1 - x0 > 1e-6)
//	{
//		x1 = x0;
//		double fx = a * x1 * x1 * x1 + b * x1 * x1 + c * x1 + d;
//		double f = 3 * a * x1 * x1 + 2 * b * x1 + c;
//		x0 = x1 - fx / f;
//	}
//	return x0;
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
//	double ax = test(a, b, c, d);
//	printf("%lf", ax);
//	return 0;
//}