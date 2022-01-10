//创建一个数组-存放整形10个int arr[10]注意！！！！你假如让n=10；然后把n放在[]内会报错，方括号内只能放常量表达式
//数组在创建的时候如果不想指定数组的确定的大小就得初始化。数组的元素个数根据初始化的内容来确定，
//#include<stdio.h>
//#include<string.h>
//	int main()
//	{
//		int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//		char arr1[5] = { 'a','b' }; //同样的剩下的初始化为\0
//		char arr2[5] = { 'ab' };//注意这样也是和上面几乎等同，这个放a和b和\0当你监视这个数组会发现arr1和arr2一样但其实是因为第三位\0和默认初始化0的值一样
//		char arr3[5] = { 97,98 };//也是可以的照样会转化为a，b
//		char arr4[] = "abcdef";//7个字符还有\0
//		printf("%d", sizeof(arr4));//7
//		printf("%d", strlen(arr4));//6
//		return 0;
//	}
	////注意点！！！！！！如下
//#include<stdio.h>
//#include<string.h>
//	int main()
//	{
//		char arr1[] = "abc";
//		char arr2[] =  { 'a', 'b','c'};
//		printf("%d\n", sizeof(arr1));//4
//		printf("%d\n", sizeof(arr2));//3
//		printf("%d\n", strlen(arr1));//3
//		printf("%d\n", strlen(arr2));//随机值
//		return 0;
//	}
//一维数组
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	for (int i = 0;i < strlen(arr); i++)//strlen返回的是无符号的整形vs可以运行不会报警告，
//		//可以进行强制类型转化或者让一个变量来接受这个值，再把这个变量放回去就行
//		printf("%c", arr[i]);
//	return 0;
//}
////一维数组在内存中的存储
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//		printf("&arr[%d]=%p\n",i, &arr[i]);//打印出来地址后你会发现a048这样的后缀这说明这是数组是个连续开辟的空间
//	//因为每个整形是4个字节，他们的地址16进制其实差的也是4所以就是
//	return 0;
//}
////二维数组的创建
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int arr1[3][4] = { {1,2,3},{4,5} };//行的下标可有可无，但是列必须有，如果有2行你输1行那么会报错说你初始化太多
//
//	return 0;
//}
////二维数组的使用
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//打印二维数组地址：二维数组其实连续的
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
//		}
//	
//	}
//	return 0;
//}
//
