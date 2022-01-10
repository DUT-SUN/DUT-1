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
//题目内容：实现一个函数左旋字符串的k个字符
//ABCD左旋一个字符BCDA
//ABCD左旋两个字符CDAB
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//void left_move(char arr[],int k)
//{
//	int i;
//	for (i = 0; i < k;i++)
//	{
//		//左旋转一个字符
//		char tmp = *arr;
//		*arr = '\0';
//		arr = strcat(arr, arr + 1);//相比bite讲的我觉得我这个也还可以，这个注意点
//		arr[strlen(arr) ] = tmp;//就是你把a移走后我改成\0，连接后覆盖，这样字符串就变成5的长度了
//		//那么其实这个strlen就是我想放回去的a
//	}

//}

//#include<stdio.h>//这个代码是实现比较2个旋转后字符串一不一样的。上面是实现旋转的
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
//	int len = strlen(arr);//高级啊，三部旋转法不用一个一个移了
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//逆序左面
//	reverse(arr + k, arr + len - 1);//逆序右面
//	reverse(arr, arr + len - 1);//逆序整体
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
////还有个思想就是你可以假如abcdef判断cdefab是不是旋转得来的还可以
////通过自己追加一个自己abcdefabcdef判断这个字符串包不包含cdefab

//#include<stdio.h>
//#include<string.h>
//int is_left_move(char*str1,char*str2)
//{
// int len1=strlen(str1);
// int len1=strlen(str2)
// if(len1!=len2)//防止输入cdef而不是cdefab也返回yes的情况
// return 0;
//	strncat(str1 ,str1,6);//注意strcat（自己，自己）就会崩溃因为就比如我把"def"搞到"abc"
////后面那么我先找到abc后面的\0然后把d给到\0,e给到d后面f到e后面然后把自己的\0也拷贝过去然后拷贝结束
//	//但是我自己连接自己的时候，连接的a把\0干掉了，那我现在找不到\0去拷贝过去然后拷贝停止那么就一直拷贝
//	//不同点就在于def拷贝把abc\0干掉了，但是自己\0还在结束标志还在，自己连接自己的时候，\0被自己搞没了，所以不会停止一直拷贝
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


