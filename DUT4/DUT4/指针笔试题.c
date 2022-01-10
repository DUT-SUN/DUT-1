//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d,%p\n", sizeof(a),a);
//	printf("%d,%p\n", sizeof(a[0]), a[0]);
//	printf("%d,%p\n", sizeof(a + 1),a+1);
//	printf("%d,%p\n", sizeof(a[0] + 1),a[0]+1);
//	printf("%d\n", sizeof(*(&a[0] + 1)));//注意这是第一行地址加一拿到第二行地址解0用拿到的是第二行，所以是16
//	return 0;
//}
//#include<stdio.h>
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//int main()
//{
//	  /*00100014
//		00100001
//		00100004*/
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//将p加1相当于跳过跳过一个结构体,所以跳过20个字节，20字节转化为16进制就是14
//	printf("%p\n", (unsigned long)p + 0x1);//这个把p当成无符号整形转化后加1然后转化为16进制输出，也可以就相当于原地址加1
//	printf("%p\n", (unsigned int*)p + 0x1);//把这个结构体指针转化为无符号整形指针这样+1的时候地址跳过一个整形就加了4
//	return 0;
//}
//笔试题3
//#include<stdio.h>
//int  main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//小端储存 在内存中，低地址01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00高地址
//	printf("%x,%x", ptr1[-1], *ptr2);//这个ptr1相当于*(ptr1-1)这个*ptr2是指向a首地址的后面一个字节的地址因为是一个整数加一
//	return 0;//内存中我认为00 00 00 02就是那个整数我拿出来的时候就是2000000
//}//这个2000000就是02 00 00 00
//笔试题4
//#include<stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(0,2),(0,3) };//逗号表达式
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}
//笔试题5
//#include<stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//指向数组的指针加1就加元素个数*元素大小的字节，
//	//这道题a的地址传给了p，p[4][2]等价于*(*(p+4)+2)，然后两个地址相减是两个之间的元素个数
//	//考虑正负，所以是-4；
//	//前者用%p打印，原码10000000 00000000 00000000 00000100
//	//                  11111111 11111111 11111111 11111011
//	//                  11111111 11111111 11111111 11111100
////我认为这个东西是个地址FFFFFFFC,注意地址打印就是打印地址，和大小端没有关系
//	return 0;
//}
//笔试题6
//#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)((*(aa + 1)));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//笔试题7
//#include<stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };//这个数组存的是各个字符串首元素地址
//	char** pa = a;//a的地址给了pa，pa每次加1加的是所指向的类型大小，比如int*就是加1跳4个字节，那这个因为
//	//指向的是个地址，那没次加一跳4，又因为这个数组存放的是连续的地址，每个地址指向的是各个字符串的首元素
//	//加1就是指向下一个字符串首元素的地址
//	printf("%p\n", pa);
//	pa++;
//	printf("%p\n", pa);
//	pa++;
//	printf("%p\n", pa);
//	printf("%s\n", *pa);
//	return 0;
//}
//笔试题8
//#include<stdio.h>
//int main()
//{
//	char* c[] = { "enter","new","point","first" };
//	char** cp[]={ c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//point
//	printf("%s\n", *--*++cpp+3);//er//注意注意这个cpp已经加过了
//	printf("%s\n", *cpp[-2]+3);//st
//	printf("%s\n", cpp[-1][-1]+1);//ew
//	return 0;
//}