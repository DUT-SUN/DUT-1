//define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = n;
//	int x = 1;
//	for (i = n; i >= 1; i--)
//	{
//		x *= i;
//	}
//	printf("%d", x);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	int i;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= m; i++)
//	{
//		 ret *=  i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	float ret;
//	float sum = 0;
//	ret = 1;
//	while (ret > 1e-6)
//	{
//		ret = ret/ i;
//		sum += ret;
//		i++;
//	}
//	printf("%f", sum+1);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float x;
//	scanf("%f", &x);
//	int i;
//	float ret = 1;
//	float sum = 0;
//	for (i = 1; ret > 1e-6; i++)
//	{
//		ret *= x / i;
//		sum += ret;
//	}
//	printf("%f", sum + 1);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double i;
//double ret=1, sum = 0;
//	for (i = 1; ret > 1e-8; i++)
//	{
//		ret = 1.0 / (2*i - 1);
//		sum += pow(-1, i + 1)*ret;
//
//	}
//	sum *= 4;
//	printf("%lf", sum);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	double n;
//	double ret = 2;
//	double sum = 1;
//	for (n = 1; ret > 1+1e-6; n++)
//	{
//		ret = 4 * n * n / ((2 * n - 1) * (2 * n + 1));
//		sum *= ret;
//	}
//	printf("%lf", 2 * sum); 
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d,%d",& a,& b);
//	int i = a;
//	for (i = a; i >= 1; i--)
//	{
//		if ((a % i == 0) && (b % i == 0))
//		{
//			printf("%d", i);
//			return 0;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, m;
//	int c=1;
//	scanf("%d,%d", &m, &n);
//	while (c)
//	{
//		c = m % n;
//		m = n;
//		n = c;
//		
//	}
//	printf("%d", m);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int f0= 0;
//	int f1= 1;
//	int fn;
//	int count = 1;
//	printf("%d ", f0);
//	printf("%d ", f1);
//	while (count <= 18)//注意这里取等上面取1这样输6个count+2%8==0
//	{
//		fn = f0 + f1;
//		f0 = f1;
//		f1 = fn;
//	
//		printf("%d ", fn);
//		if ((count + 2) % 8 == 0)
//		{
//			printf("\n");
//		}
//		count++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    double x1= 2;
//	double  x2 = 3;
//	double y1 = 1;
//	double y2 = 2;
//	double x, y;
//	double ret, sum = 0;
//	int i = 1;
//	while (i <= 18)
//	{
//		x = x1 + x2;
//		x1 = x2;
//		x2 = x;
//
//		y = y1 + y2;
//		y1 = y2;
//		y2 = y;
//
//		ret = x / y;
//		sum += ret;
//		i++;
//	}
//	printf("%lf", sum+2+1.5);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d,%d", &n, &m);
//	int i, j, flag, count = 0;
//	for (i = n; i <= m; i++)
//	{
//		flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//			
//		}
//		if (flag)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d个",count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	if (n == 1)
//		printf("1");
//while(n!=1)
//	{
//	for (i = 2; i <= n; i++)
//	{
//	
//		if (n % i == 0)
//		{
//			printf("%d*", i);
//			n = n / i;
//			break;
//		}
//	}
//
//	}
//printf("\b");
//	return 0;
//}
//

//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	int count = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4; j++)
//		{
//			for (k = 1; k < 4; k++)
//			{
// if(i!=j&&i!=z&&j!=z)
// {
//				printf("%d ", i * 100 + j * 10 + k);
//				count++;
//			}
//		}
//	}}
//	printf("%d个", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x, n, sum = 0;
//	scanf("%d", &x);
//	while (x != 0)
//	{
//		n = x % 10;
//		sum += n;
//		x /= 10;
//	}
//	printf("%d", sum);
//	return 0;
//}
//1.
//*
//**
//***
//****
//*****
//******
//*******
//********
//*********
//**********

//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//2.
//**********
//*********
//********
//*******
//******
//*****
//****
//***
//**
//*
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 10; j >= i; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//3.
//         *
//        **
//       ***
//      ****
//     *****
//    ******
//   *******
//  ********
// *********
//**********
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	//9个空格一个*
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= 10 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//**********
// *********
//  ********
//   *******
//    ******
//     *****
//      ****
//       ***
//        **
//         *
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	for (i = 0; i <10; i++)
//	{
//		
//			for (k = 0; k < i; k++)
//
//			{
//				printf(" ");
//			}
//			for (j = 0; j < 10 - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i, sum = 0, count = 0;
//	float average;
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		sum += a[i];
//	}
//	average = sum / 10.0;
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] >= average)
//		{
//			count++;
//		}
//	}
//	printf("%f\n", average);
//	printf("%d", count);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 1,2,5,8,9,12 }, an = 5, b[10] = { 1,3,4,8,12,18 }, bn = 5;
//	int i, j, k, c[20], max = 9999;
//	a[an + 1] = b[bn + 1] = max;
//	i = j = k = 0;
//	while ((a[i] != max) || (b[j] != max))
//	{
//		if (a[i] < b[j])
//		{
//			c[k] = a[i++];
//			k++;
//		}
//		else
//		{
//			c[k] = b[j++]; 
//			k++;
//
//		}
//	}
//	for (i = 0; i < k; i++)
//		printf("%4d", c[i]);
//
//
//
//
//return  0;
//}

//#include<stdio.h>
//int main()
//{
//	int i;
//	int a[20] = { 0,1 };
//	for (i = 2; i < 20; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", a[i]);
//	}
//		return 0;
//}
//没实现！！！！！！！！！！！！！！！！！！！！！！
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[1000];
//	int quit[11] = { 0 };
//	int start = 1;
//	int n = 2;
//	int count = 1;
//	arr[0] = 1;
//	quit[1] = 1;
//	for (n = 1; n < 1000; n++)
//	{
//		arr[n] = arr[n - 1] + n + 1;
//	}
//	for (n = 0; n < 1000; n++)
//	{
//		if (quit[2] != 2 && arr[n] % 10 == 2)
//		{
//			quit[2] = 2;
//
//		}
//		if (quit[3] != 3 && arr[n] % 10 == 3)
//		{
//
//			quit[3] = 3;
//
//		}
//		if (quit[4] != 4 && arr[n] % 10 == 4)
//		{
//
//			quit[4] = 4;
//
//		}
//		if (quit[5] != 5 && arr[n] % 10 == 5)
//		{
//
//			quit[5] = 5;
//
//		}
//		if (quit[6] != 6 && arr[n] % 10 == 6)
//		{
//
//			quit[6] = 6;
//
//		}
//		if (quit[7] != 7 && arr[n] % 10 == 7)
//		{
//
//			quit[7] = 7;
//
//		}
//		if (quit[8] != 8 && arr[n] % 10 == 8)
//		{
//
//			quit[8] = 8;
//
//		}
//		if (quit[9] != 9 && arr[n] % 10 == 9)
//		{
//
//			quit[9] = 9;
//
//		}
//		if (quit[10] != 10 && arr[n] % 10 == 0)
//		{
//
//			quit[10] = 10;
//
//		}
//
//
//
//	}
//	int j;
//	for (j = 1; j <= 10; j++)
//	{
//		if (quit[j] == 0)
//		{
//			printf("兔子可能躲在%d号洞\n", j);
//		}  
//	}
//	return 0;
//}
//没实现！！！！！！！！！！！！！！
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i, j, a[101] = { 0 };
//	for (i = 2; i < 50; i++)//在2到50中排掉2的倍数，3的倍数。。。。
//	{
//		if (!a[i])
//			for (j = 2; i * j < 100; j++)
//				a[i * j] = 1;
//	}
//	for (i = 2; i < 100; i++)//上一步将有因子的变成了1那么现在能打印的都是素数
//		if (!a[i])
//	printf("%d\t", i);
//
//}
//巩固！！！！！！！！！！！！！！！！！！！
//#include<stdio.h>
//int main()
//{
//	int i;
//	char a[101];
//	gets(a);
//	int b[127] = { 0 };
//	for (i = 0; i <= 100; i++)
//	{
//		
//			b[a[i]]++;
//		
//	}
//	for (i = 1; i < 127; i++)
//	{
//		printf("%d/%c：%d\n", i,i, b[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int sz = 0;
//	int  a[100] = { 1,2,2,4,5,6,7,9 };
//	while (a[sz++] != 0);
//	sz--;
//	int right = sz - 1;
//	int left = 0;
//			while (left < right)
//		{
//			int temp = a[left];
//			a[left] = a[right];
//			a[right] = temp;
//			left++;
//			right--;
//
//		}
//			int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}
// 
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void zhuan(int a[10], int m)
//{
//	reverse(a, a + 10 - 1);
//	reverse(a + m, a + 10 - 1);
//	reverse(a, a + m-1);
//
//
//}
//#include<stdio.h>//3步翻转法使用注意翻转整体在前就是右翻最后就是左翻
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	int a[10] = { 1,3,4,5,6,7,8,2,3,5 };
//	zhuan(a, m);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}

// //去掉重复数好好看看！！！！！！！！！！！
//#include<stdio.h>
//#define N 12
//int main()
//{
//    int i, j, n = N, k;
//    int num[N] = { 1,1,2,7,3,2,3,4,5,8,7,7 };
//    for (i = 0; i < n - 1; ++i)
//    {
//        for (j = i + 1; j < n; ++j)	//从num[i]的下一位开始比较，直到最后一位
//            if (num[i] == num[j])	//如果数字重复
//            {
//                for (k = j; k < n - 1; ++k)	//从num[j]开始，所有数字前移一位
//                    num[k] = num[k + 1];
//                --n;              //数组长度-1
//                --j;				//因为有++j，所以这里先减一下，否则num[i]比较的是移动之后的下一位，会漏掉一个数
//            }
//    }
//    for (i = 0; i < n; ++i)
//        printf("%d,", num[i]);
//    return 0;
//}
//
// 好好看看！！！！！！！！！！！
//int x(int arr[])
//{
//	int i;
//	int cur = 0;
//	int max = -999999;
//	for (i = 0; i < 10; i++)
//	{
//		cur += arr[i];
//		max = (max > cur ? max : cur);
//		cur = cur < 0 ? 0 : cur;//前面和为负舍去前面的数
//	}
//	return max;
//}
//
//void find(int arr[10], int max)//通过之前我定义求出的最大值反过来找这些元素
//{
//	int i, start = 0, end = 0;
//	int cur = 0;
//	int max1 = -999999;
//	for (i = 0; i < 10; i++)
//	{
//		cur += arr[i];
//		max1 = (max1 > cur ? max1 : cur);//1 3 -5 -5 -5 -5 -5 -5 2 2
//		if (max1 == max && max < 0)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//		if (cur < 0)//通过cur的是否转变就可以知道start的开始值
//		{
//			start = i + 1;
//			if (i == 9)
//				start = 9;
//		}
//
//		cur = cur < 0 ? 0 : cur;
//
//		if (max1 == max)
//		{
//			end = i;
//			int count;
//			for (count = start; count <= end; count++)
//			{
//				printf("%d ", arr[count]);
//
//			}
//
//			max1 = 0;
//			printf("\n");
//		}
//
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = x(arr);
//	find(arr, max);
//	printf("最大值是%d\n", max);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int a[3][3] = { {2,2,2},{1,3,4},{2,3,4} };
//	int b[3] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (a[i][j] % 2 == 0)
//			{
//				b[i]++;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", b[i]);
//	}
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[20] = { 1,2,3,4,5,6,7,8,8,9,10,2,3,4,5,6,7,8,3,5 };
//	int b[2][20] = { 0 };
//	int i, j=0, k=0;
//	for (i = 0; i < 20; i++)
//	{
//		if (a[i] % 2 == 1)
//		{
//			b[1][j] = a[i];
//			j++;
//		}
//		else
//		{
//			b[0][k] = a[i];
//			k++;
//		}
//	}
//	
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 20; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int a[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		a[i][0] = 1;
//	}
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i ; j++)//注意条件
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//好好看看鞍点
//#include<stdio.h>
//void find_point(int a[3][4]) 
//{
//	int min, max, p, q;
//	int count = 0;
//	for (int i = 0; i < 3; ++i)
//	{
//		p = 0;
//		q = 0;
//		max = a[i][0];
//		for (int j = 1; j < 4; ++j) 
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				p = j;
//			}
//		}
//		min = a[0][p];
//		for (int k = 1; k < 3; ++k) 
//		{
//			if (min > a[k][p]) 
//			{
//				min = a[k][p];
//				q = k;
//			}
//		}
//		if (min == max) 
//		{
//			printf("鞍点为arr[%d][%d]=%d\n", q, p, min);
//		}
//		else 
//		{
//			count++;
//		}
//	}
//	if (count == 3)
//	{
//		printf("二唯数组arr无鞍点\n");
//	}
//}
//void main() {
//
//	printf("二维数组arr为:\n");
//
//	int arr[3][4] = { {9,6,8,70 }, { 10,23,55,66 }, { 15,67,4,69 } };
//	int i, j;
//	/*srand((unsigned int)time(NULL));*/
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			/*arr[i][j] = rand() % 10 + 1;难以随机生成鞍点*/
//			printf("%-2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	find_point(arr);
//
//}

//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	int a[2][3] = { 1,2,3,4,5,6 };
//	int b[3][2] = { 1,2,3,4,5,6 };
//	int c[3][3] = { 0 };
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			for (k = 0; k < 3; k++)
//			{
//				c[i][j] += a[i][k] + b[k][j];
//			}
//		}
//	}
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int cmp1(void* a, void*b)
//{
//	return *(int*)a - *(int*)b;
//}
//int cmp2(void* a, void* b)
//{
//	return *(int*)b - *(int*)a;
//}
//int main()
//{
//	int i, j, k = 0;
//	float sum = 0;
//	float average;
//	float b[3];
//	float c[5];
//	int a[5][3] = { 1,2,3,4,5,6,1,1,1,1,1,1,1,1,1 };
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			sum += a[i][j];
//		}
//		average = sum / 3;
//		c[k] = average;
//		sum = 0;
//		k++;
//	}
//
//	k = 0;
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			sum += a[i][j];
//		}
//		average = sum / 3;
//		b[k] = average;
//		sum = 0;
//		k++;
//	}
//
//	qsort(b, 3, 4, cmp1);
//	qsort(c, 5, 4, cmp2);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%f ", b[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%f ", c[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, j;
//	printf("        ");
//	for (i = 1; i <= 9; i++)
//	{
//		printf("%d\t", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		printf("%d\t", i);
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d\t", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}