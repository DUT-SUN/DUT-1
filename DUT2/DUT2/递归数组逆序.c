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
//	char tmp = arr[0];//����1λ
//	int len = my_strlen(arr);//�㳤��
//	arr[0] = arr[len - 1];//��һ��λ��ֵ�������һ��
//	arr[len - 1] = '\0';//�����һλ����\0��������ݹ�
//	if (my_strlen(arr + 1) >= 2)//���������������߶���һ������鿴���ȴ򲻴��ڵ���2������֪��Ҫ��Ҫ�ͻ�
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