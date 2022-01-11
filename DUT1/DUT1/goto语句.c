//#include<stdio.h>//可以跳转执行，多层循环直接跳出不用多个break；
//int main()
//{
//	printf("hello.bit\n");
//	goto again;
//
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}//shutdown -s -t 60 60秒关机system执行系统命令
//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n请输入：");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}