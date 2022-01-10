//#define _CRT_SECURE_NO_WARNINGS 1
//#define N 10
//#include<stdio.h>
//#include<math.h>
//float f(int a[], float x)
//{
//	int i;
//	float r = 0;
//	for (i = 0; i < 4; i++)
//	{
//		r += a[i] * pow(x, i);
//	}
//	return r;
//}
//float fd(int a[], float x)
//{
//	int i;
//	int b[N];
//	float r;
//	for (i = 0; i < N - 1; i++)
//	{
//		b[i] = a[i + 1] * (i + 1);
//	}
//	return f(b, x);
//}
//float newton(int a[])
//{
//	float x0 =0; 
//	float x1=1;
//	while (fabs(x1 - x0) > 1e-6)
//	{
//		x0 = x1;
//		x1 = x0 - f(a,x0) / fd(a,x0);
//	}
//	return x1;
//
//}
//float slove(float (*method)(int b[]), int a[])
//{
//	return (*method)(a);
//}
//
//int main()
//{
//	int a[N] = { -1,1,1,1 };
//	float r;
//float solve(float(*method)(int b[]), int a[]);
//r = slove(newton, a);
//printf("%f", r);
//}               