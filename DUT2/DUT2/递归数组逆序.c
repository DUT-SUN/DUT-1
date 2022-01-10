//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//void reverse_string(char arr[])//char* arr
//{
//	char tmp = arr[0];//存下1位
//	int len = my_strlen(arr);//算长度
//	arr[0] = arr[len - 1];//让一号位数值等于最后一个
//	arr[len - 1] = '\0';//将最后一位等于\0方便后续递归
//	if (my_strlen(arr + 1) >= 2)//限制条件就是两边都减一后的数组看长度打不大于等于2这样就知道要不要就换
//	reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}