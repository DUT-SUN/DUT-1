//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() 
//{
//	int a[10][10] = { 0 }, i, j;
//	for (i = 0; i < 10; i++)
//		a[i][0] = 1;	//将二维数组的第一列全部设置为1
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j < 10; j++) {
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];//给除了第一列的元素以外的元素赋值
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) {    //只输出左下半三角
//			printf("%-3d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//
//}
