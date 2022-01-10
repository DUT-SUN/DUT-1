//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(char* p1, char* p2)
//{
//	assert(p1 && p2);//判断传过来的不能为空指针
//	char* s1 = p1;//存放起始地址
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')//被查找的串不能为空，为空直接返回最初时的p1地址
//	{
//		return p1;
//	}
//	while (*cur)//当cur不为\0一直运行查找
//	{
//		s1 = cur;
//		s2 = p2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)//你得保证找到停下，和最后s1到尽头没找到停下执行
//		{
//			s1++;
//			s2++;
//		}
//			if (*s2 == '\0')
//			{
//				return cur;
//			}
//			cur++;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bcd";
//	printf("%c", *my_strstr(arr1, arr2));
//	return 0;
//}