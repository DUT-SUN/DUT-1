//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char m[32];
//	int len;
//	while (scanf("%s", &m) != EOF)
//	{
//		len = strlen(m);//求输入长度
//		int sum = 1, size = 0;
//		char n[100];//定义接受数组
//		while (sum)
//		{
//			sum = 0;
//			for (int i = 0; i < len; i++)
//			{
//				int x = m[i] - '0';//求出每一位的整数
//				int d = x / 2;//求出这个整数除2的结果
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
