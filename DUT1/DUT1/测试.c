#include<stdio.h>
int main()
{
	double D = 0.0; double H = 0.0;
	float S, V;
#define PI 3.14
	printf("����Բ���ĵ���ֱ����\n");
	scanf_s("%lf", &D);
	printf("����Բ���ĸߣ�\n");
	scanf_s("%lf", &H);
	S = PI * D * D / 2.0 + PI * D * H;
	V = PI * D * D * H / 4;
	printf("Բ���ı������%.2f\n", S);
	printf("Բ���������%.2f\n", V);
	return 0;
}
