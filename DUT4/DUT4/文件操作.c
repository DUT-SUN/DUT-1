//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////什么是文件？磁盘上的文件就是文件
////我们谈的文件有2种程序文件和数据文件.c.h就是程序文件程序文件能操作数据文件
////.obg文件是目标文件也是程序文件.exe可执行程序也是
////现在我们将信息输入到磁盘中，需要的时候读取到内存中去
//
////文件名包含3个部分：文件路径加文件名主干+文件后缀
////例如c:\code\test.txt
////文本文件和二进制文件
////数据在内存以二进制形式存储，不加转换输出到外存就是二进制文件
////如果要求外存是ASCII码存储那需要在存储前转换以ascii形式存储的就是文本文件
////一个数据在内存中怎么存储呢？
////字符一律ASCII存储，数值型数据可以用ascii形式存储也可以用二进制形式存储
////如有整数10000 如果以ascii形式输出到磁盘，则磁盘占用5个字节，每一个字节一个字符，
////二进制输出的话磁盘上占4个字节
// 
////int main()
////{
////	int a = 10000;
////	FILE* pf = fopen("test.txt", "wb");//w是写b是二进制形式
////	fwrite(&a, 4, 1, pf);//pf是文件指针变量——结构体变量查看定义
////	fclose(pf);
////	pf = NULL;
////	//00 00 27 10运行后的txt文件中是这个，16进制就是10000
////	return 0;
////}
////文件缓冲区：系统自动为正在使用的文件开辟一块文件缓冲区，从内存向磁盘输出数据会先送到内存中的
////缓冲区装满缓冲区后再逐个才一起宋代磁盘上，如果磁盘向计算机读入数据，则从磁盘文件读取数据到
////内存缓冲区充满后然后送到程序数据区缓冲区大小由c编译系统决定
//
//
////文件指针
////当你fopen（文件名，打开方式）当你打开方式包含写，就会创建一个新的文件，没有文件也能运行，因为
////创建了文件，但是问题是你原来的文件写的东西就没了，如果追加用a就没事
////因为不一定能打开文件，或者找不到，那么返回空的时候打印strerror（errno）头文件
////是string.h和error.h
////fgetic一次读取一个字符
////键盘——标准输入设备stdin
////屏幕——标准输出设备stdout
////默认打开3个流
////stdin
////stdout他们都是FILE*类型
////stderr
////#include<stdio.h>
////int main()
////{
////	int ch = fgetc(stdin);//从键盘读,也可以从文件读文件指针FILE*
////	fputc(ch, stdout);//屏幕输出
////	return 0;
////}
////#include<stdio.h>
////#include<errno.h>
////#include<string.h>
////int main()
////{
////	FILE* pf = fopen("test.txt1", "r");
////	if (pf == NULL)
////	{
////		printf("%s\n", strerror(errno));
////	}
////	fgetc(pf);
////	fputc(pf, stdout);
////}
////#include<stdio.h>
////
////int main()
////{
////
////	FILE* pf = fopen("test1.txt", "w");
////	char a[20] = "abcdef";
////	fputs(a, pf);
////	fclose(pf);
////	FILE* x = fopen("test1.txt", "r");
////	char b[20];
////	 printf("%s",fgets(b, 6, pf));
////	return 0;
////}
//#include<stdio.h>
//#include<errno.h>
//#include<string.h>
//struct student
//{
//	char name[20];
//	int age;
//}stu[5] = { {"nb",1 } ,{"diaomao",2},{"c",3},{"d",4},{"niuma",5}};
//int main()
//{
//	FILE* fp = fopen("fuck.txt", "w");
//	if(fp==NULL)
//		printf("%s\n", strerror(errno));
//	fwrite(stu, sizeof(struct student), 5, fp);
//	struct student stu1[5];
//	fclose(fp);
//	fp = fopen("fuck.txt", "r");
//	fread(stu1, sizeof(struct student), 5, fp);
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//
//		printf("%s %d\n", stu1[i].name, stu1[i].age);
//	}
//	return 0;
//}