//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
////void my_strcpy(char* dest, char* src)
////{
////	while(*src!='\0')
////	{
////		*dest = *src;
////		src++;
////		dest++;
////	}
////	*dest = *src;
////}
////void my_strcpy(char* dest, char* src)//1次优化后的代码，当src是\0的时候就是0这个循环就进不去了。
////{
////	while (*dest++=*src++)
////	{
////		;
////	}
////}
////void my_strcpy(char* dest, char* src)//1次优化后的代码，当src是\0的时候就是0这个循环就进不去了。
////{
////	if (dest != NULL&&src!=NULL)//防止传入空指针
////	{
////		while (*dest++ = *src++)
////		{
////			;
////		}
////	}
////}
////void my_strcpy(char* dest, char* src)//1次优化后的代码，当src是\0的时候就是0这个循环就进不去了。
////{
////	assert(dest != NULL);//8分代码
////	assert(src != NULL);//断言运行后如果发现了src是空指针就会报错，并且显示报错位置，需要引头文件
////	//方便找到错误
////	
////		while (*dest++ = *src++)
////		{
////			;
////		}
////	
////}
//char* my_strcpy(char* dest,const char* src)//添加const为了防止while语句写反两个指针变量，这样就会提示报错，这样就不会出现拷贝失败，但是程序运行成功
////2次优化后的代码，当src是\0的时候就是0这个循环就进不去了。
//{
//		assert(dest != NULL);//8分代码
//		assert(src != NULL);//断言运行后如果发现了src是空指针就会报错，并且显示报错位置，需要引头文件
//		char*ret = dest;
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//其实吧后面还有#号，但是由于\0被拷贝过去了所以打印不出后面的
//		return 0;
//}//这就是满分代码
////补充:
////int main()
////{
////	const int num = 10;//!!!注意咱们加上了这个const按理来说是不能改的可是这个代码仍然可以改变num的值
////	 int* p = &num;//通过在这个int前面加个const这样就不能改变了会报错
////	*p = 20;//err const放在指针变量的星号左边时修饰的是*p不能通过p来改变*p的值
////	          //如果是在*号右面加const修饰的是p，p不能改变。
////	printf("%d\n", num);
////
////	return 0;
////}
