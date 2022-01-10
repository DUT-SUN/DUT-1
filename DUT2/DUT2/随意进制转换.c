//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int a[100]; //储存结果
//int m, n;
//int temp; // 余数
//int count, i; //变量
//char number[20] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
//void change() //进制转换，简单模拟
//{
//	while (m != 0)
//	{
//		temp = m % n;
//		m = m / n;
//
//		if (temp < 0)
//		{
//			temp = temp - n;
//			m++;
//		}
//
//		a[count] = temp;
//		count++;
//	}
//}
//int main()
//{
//	scanf("%d %d", &m, &n);
//
//	printf("%d=", m);
//
//	change();
//
//	for (i = count - 1; i >= 0; i--) //倒序输出
//		printf("%c", number[a[i]]);
//
//	printf("(base%d)\n", n);
//	return 0;
//}