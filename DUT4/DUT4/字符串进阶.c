//#define _CRT_SECURE_NO_WARNINGS 1
////strncpy如果你只有3个你要拷贝6个，那么剩下的就是\0
////strncmp
////strncat如果你追加3个其实还会拷贝\0这个字符过去
////当你5个字符的拷贝，你非得输个8那拷贝就是这5个字符加\0后面无改变
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	const char* p1 = "abcd";
//	const char* p2 = "abcdqwer";
//	printf("%d", strncmp(p1, p2, 4));
//}