//#define _CRT_SECURE_NO_WARNINGS 1
//函数指针数组应用：
//#include<stdio.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("**   1.add        2.sub      **\n");
//	printf("**   3.mul        4.div      **\n");
//	printf("*************0.exit************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input, x, y;
//	int(*pfarr[5])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//
//		menu();
//		printf("请选择->");
//		scanf("%d", &input);
//		printf("请输入2个操作数");
//		scanf("%d%d", &x, &y);
//		if (input >= 1 && input <= 4)
//		{
//			printf("%d\n",pfarr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//			
//		}
//		else
//		{
//			printf("选择错误！");
//		}
//		/*switch (input)
//		{
//		case 1:
//			printf("%d\n",add(x,y));
//			break;
//		case 2:
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("选错误");
//			break;
//		}*/
//		
//	} while (input);
//	
//
//	return 0;
//}

// 
//指向函数指针数组的指针
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*p1[5])(int, int);
//	int(*   (*p1)[5]     )    (int,int) = &p1;
//	//p1是一个指向函数指针数组的指针，指针指向的数组有5个元素，元素类型是参数为2个int返回值为int的函数
//	return 0;
//}
//回调函数是一个通过函数指针调用的函数
//如果你把函数指针的地址作为参数传递给另一个函数
//当这个指针被用来调用其所指向的函数时，我们就说这是回调函数，回调函数不是由该函数
//的实现方直接调用的，用于对该事件或条件进行响应
//#include<stdio.h>
//void print(char* str)
//{
//	printf("hehe%s",str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}