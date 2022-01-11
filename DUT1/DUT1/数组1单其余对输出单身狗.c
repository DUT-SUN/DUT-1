//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i;
//	int ret = 0;
//	int arr[] = { 1,1,2,3,4,5,2,3,4,5,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz ; i++)
//	{
//		 ret = ret ^ arr[i];//运算原理，因为0和任何数异或都是那个数，而两个相同数异或就会得到0，
// //那么这样先设置一个ret=0一个个异或，这样相当于0就会和那个单身狗异或，异或符合交换律
//	}
//	printf("%d", ret);
//	//char arr[] = { 'a','b','c' };//“abc”它是4个，前面的是3个用sizeof的时候就会有差别
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int count = sizeof(arr);
//	//printf("%d", count);
//	//printf("%d", sz);
//	return 0;
//}