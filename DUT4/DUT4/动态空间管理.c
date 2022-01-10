//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//int* p = malloc(32);
//	//gets(p);
//	//puts(p);
//	int* p1 = (int*)calloc(3,sizeof(int));
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", p1++);
//		
//	}
//	p1 = p1 - 3;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", *p1);
//		p1++;
//	}
//	free(p1-3);
//	return 0;
//}
// //以下不能运行
//struct {
//	int a;
//	void* b;
//}test;
//struct test* buf;
//
//buf = calloc(3, sizeof(*buf));
//int i;
//for(i = 0; i < 3; i++) 
//{
//	printf("这时候打印出结构体内部的a要这样写:%d\n", buf[i].a);
//}
