#include<stdio.h>
int main()
{
	double D = 0.0; double H = 0.0;
	float S, V;
#define PI 3.14
	printf("输入圆柱的底面直径：\n");
	scanf_s("%lf", &D);
	printf("输入圆柱的高：\n");
	scanf_s("%lf", &H);
	S = PI * D * D / 2.0 + PI * D * H;
	V = PI * D * D * H / 4;
	printf("圆柱的表面积：%.2f\n", S);
	printf("圆柱的体积：%.2f\n", V);
	return 0;
}
