//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *ptr2 - 1);//1,6
//	return 0;
//}
//��Ŀ���ݣ�ʵ��һ�����������ַ�����k���ַ�
//ABCD����һ���ַ�BCDA
//ABCD���������ַ�CDAB
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//void left_move(char arr[],int k)
//{
//	int i;
//	for (i = 0; i < k;i++)
//	{
//		//����תһ���ַ�
//		char tmp = *arr;
//		*arr = '\0';
//		arr = strcat(arr, arr + 1);//���bite�����Ҿ��������Ҳ�����ԣ����ע���
//		arr[strlen(arr) ] = tmp;//�������a���ߺ��Ҹĳ�\0�����Ӻ󸲸ǣ������ַ����ͱ��5�ĳ�����
//		//��ô��ʵ���strlen��������Ż�ȥ��a
//	}

//}

//#include<stdio.h>//���������ʵ�ֱȽ�2����ת���ַ���һ��һ���ġ�������ʵ����ת��
//#include<string.h>
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(left != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);//�߼�����������ת������һ��һ������
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//��������
//	reverse(arr + k, arr + len - 1);//��������
//	reverse(arr, arr + len - 1);//��������
//}
////int main()
////{
////	char arr[] = "abcdef";
////	left_move(arr, 3);
////
////	printf("%s\n", arr);
////	return 0;
////}
//
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no");
//	return 0;
//}
////���и�˼���������Լ���abcdef�ж�cdefab�ǲ�����ת�����Ļ�����
////ͨ���Լ�׷��һ���Լ�abcdefabcdef�ж�����ַ�����������cdefab

//#include<stdio.h>
//#include<string.h>
//int is_left_move(char*str1,char*str2)
//{
// int len1=strlen(str1);
// int len1=strlen(str2)
// if(len1!=len2)//��ֹ����cdef������cdefabҲ����yes�����
// return 0;
//	strncat(str1 ,str1,6);//ע��strcat���Լ����Լ����ͻ������Ϊ�ͱ����Ұ�"def"�㵽"abc"
////������ô�����ҵ�abc�����\0Ȼ���d����\0,e����d����f��e����Ȼ����Լ���\0Ҳ������ȥȻ�󿽱�����
//	//�������Լ������Լ���ʱ�����ӵ�a��\0�ɵ��ˣ����������Ҳ���\0ȥ������ȥȻ�󿽱�ֹͣ��ô��һֱ����
//	//��ͬ�������def������abc\0�ɵ��ˣ������Լ�\0���ڽ�����־���ڣ��Լ������Լ���ʱ��\0���Լ���û�ˣ����Բ���ֹͣһֱ����
//	if (strstr(str1, str2) != NULL)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}


