////for函数建议不可在for循环体中修改变量，防止失去控制；还有就是循环控制变量的取值采用前闭后开区间；
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//这个i++是在最后（printf语句后）调整的 注意注意注意！！！！！！！（下面有说明）
//	{
//		if (i == 5)
//			break;//正常跳出
//		printf("%d\n", i);
//		int* x = &i;
//		printf("%p\n", x);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//按理来说在while语句中应该输出1234在五那陷入死循环
//                          //但是for语句中i++正常执行中括号的不执行而已执行调整语句也就是i++
//		                   //所以打印出1234678910
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		int* x = &i;
//		printf("%p\n", x);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	for (;;)
//	{
//		printf("%s", "e");//会一直输出e
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\n");//打印100hehe
//		}
//		
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0; 
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");//打印10hehe
//		}
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}