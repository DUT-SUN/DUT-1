//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(char* p1, char* p2)
//{
//	assert(p1 && p2);//�жϴ������Ĳ���Ϊ��ָ��
//	char* s1 = p1;//�����ʼ��ַ
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')//�����ҵĴ�����Ϊ�գ�Ϊ��ֱ�ӷ������ʱ��p1��ַ
//	{
//		return p1;
//	}
//	while (*cur)//��cur��Ϊ\0һֱ���в���
//	{
//		s1 = cur;
//		s2 = p2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)//��ñ�֤�ҵ�ͣ�£������s1����ͷû�ҵ�ͣ��ִ��
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