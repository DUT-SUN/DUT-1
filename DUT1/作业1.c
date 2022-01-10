//#include<stdio.h>
//int main()
//{
//	double a, b;
//	printf("输入三角形的底和高：");
//	scanf_s("%lf,%lf", &a, &b);
//	printf("%lf", a * b/2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	printf("输入一个三位整数：");
//	scanf_s("%d", &a);
//	while (a != 0)
//	{
//		b = a % 10;
//		a /= 10;
//		printf("%d", b);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int h, min;
//	float T, n;
//printf("输入冰箱断电时间（小时:分钟)\n");
//scanf_s("%d:%d", &h,&min);
//n = h + min / 60.0;
//T = 4*n*n / (n + 2) - 20;
//printf("断电后冰箱温度为（℃）%.2f", T);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e, f, g, h;
//	printf("输入一个时间(时：分)\n");
//	scanf_s("%d:%d", &a, &b);
//	printf("输入另一个时间（时：分)\n");
//	scanf_s("%d:%d", &c, &d);
//	e = (a * 60 + b) - (c * 60 + d);
//	
//	f = (e > 0 ? e : -e);
//	g = f / 60;
//	h = f % 60;
//	printf("相差时间为%d(h)%d(min)", g, h);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e, f, h, i, k, l, m, n ;
//
//	float v, j, s, g, G;
//	printf("开始时间（时：分：秒）\n");
//	scanf_s("%d:%d:%d", &a, &b, &c);
//	
//	printf("结束时间（时：分：秒）\n");
//	scanf_s("%d:%d:%d",&d,&e,&f);
//	h = a * 3600 + b * 60 + c;
//	i = d * 3600 + e * 60 + f;
//	j = i- h;
//	k = (j > 0 ? j : -j);
//	l = k / 3600;
//	m = k % 3600;
//	n = m % 60;
//	m /= 60;
//	printf("开始里程（公里）\n");
//	scanf_s("%f", &g);
//	printf("结束里程(公里)：\n");
//	scanf_s("%f", &G);
//	s = G - g;
//	printf("汽车行驶了%f公里\n", s);
//	printf("消耗了时间%d时%d分%d秒。", l, m, n);
//	v = s / (j/3600.0);
//	printf("平均速度:%f（公里每小时）", v);
//
//	return 0;
//
//
//}
//
//






