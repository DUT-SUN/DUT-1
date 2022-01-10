//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{//行地址
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	printf("arr=%x\n", arr);
//	printf("arr+1=%x\n", arr + 1);
//	printf("&arr[0]=%x\n", &arr[0]);
//	//printf("%x", *(arr[0] + 0));是1
//	printf("&arr[0]+1=%x\n", &arr[0] + 1);
//	printf("&*(arr+0)=%x\n", &*(arr + 0));
//	printf("&*(arr+0)+1=%x\n", &*(arr + 0) + 1);
////列地址
//	printf("*arr=%p\n", *arr);//理解二维数组数组名其实就是一个指向第一行的数组指针，因为指向的是数组解引用后所以拿到的是数组的首地址，而不是那个数
//	printf("*arr+1=%x\n", *arr + 1);
//	printf("arr[0]=%x\n",arr[0]);
//	printf("arr[0]+1=%x\n",arr[0]+1);
//	printf("*(arr+0)=%x\n",*(arr+0));
//	printf("*(arr+0)+1=%x\n",*(arr+0)+1);
//
////访问元素
//	printf("arr[1][2]=%d\n",*(*(arr + 1)+2));
	////下面没用
	//char b[5][10] = { "hello","world","xxx" };
	//char(*p)[10] = &b[2];
	//printf("%p\n", p);
	//printf("%p\n", *p);
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(*p));
//		return 0;
//}