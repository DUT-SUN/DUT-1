//#include<stdio.h>
//int main()
//{
//	double a, b;
//	printf("���������εĵ׺͸ߣ�");
//	scanf_s("%lf,%lf", &a, &b);
//	printf("%lf", a * b/2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	printf("����һ����λ������");
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
//printf("�������ϵ�ʱ�䣨Сʱ:����)\n");
//scanf_s("%d:%d", &h,&min);
//n = h + min / 60.0;
//T = 4*n*n / (n + 2) - 20;
//printf("�ϵ������¶�Ϊ���棩%.2f", T);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e, f, g, h;
//	printf("����һ��ʱ��(ʱ����)\n");
//	scanf_s("%d:%d", &a, &b);
//	printf("������һ��ʱ�䣨ʱ����)\n");
//	scanf_s("%d:%d", &c, &d);
//	e = (a * 60 + b) - (c * 60 + d);
//	
//	f = (e > 0 ? e : -e);
//	g = f / 60;
//	h = f % 60;
//	printf("���ʱ��Ϊ%d(h)%d(min)", g, h);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e, f, h, i, k, l, m, n ;
//
//	float v, j, s, g, G;
//	printf("��ʼʱ�䣨ʱ���֣��룩\n");
//	scanf_s("%d:%d:%d", &a, &b, &c);
//	
//	printf("����ʱ�䣨ʱ���֣��룩\n");
//	scanf_s("%d:%d:%d",&d,&e,&f);
//	h = a * 3600 + b * 60 + c;
//	i = d * 3600 + e * 60 + f;
//	j = i- h;
//	k = (j > 0 ? j : -j);
//	l = k / 3600;
//	m = k % 3600;
//	n = m % 60;
//	m /= 60;
//	printf("��ʼ��̣����\n");
//	scanf_s("%f", &g);
//	printf("�������(����)��\n");
//	scanf_s("%f", &G);
//	s = G - g;
//	printf("������ʻ��%f����\n", s);
//	printf("������ʱ��%dʱ%d��%d�롣", l, m, n);
//	v = s / (j/3600.0);
//	printf("ƽ���ٶ�:%f������ÿСʱ��", v);
//
//	return 0;
//
//
//}
//
//






