//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char m[32];
//	int len;
//	while (scanf("%s", &m) != EOF)
//	{
//		len = strlen(m);//�����볤��
//		int sum = 1, size = 0;
//		char n[100];//�����������
//		while (sum)
//		{
//			sum = 0;
//			for (int i = 0; i < len; i++)
//			{
//				int x = m[i] - '0';//���ÿһλ������
//				int d = x / 2;//������������2�Ľ��
//				sum += d;//
//				if (i < len - 1)
//				{
//					m[i + 1] = x % 2 * 10 + m[i + 1];
//				}
//				if (i == len - 1)
//				{
//					n[size++] = x % 2 + '0';
//				}
//				m[i] = d + '0';
//			}  
//
//		}
//		for (int i = size - 1; i >= 0; i--) {
//			printf("%c", n[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}bukeyi
