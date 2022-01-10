//如何规避野指针
//初始化，当你不知道指针变量要初始化什么的时候，可以让int*p=NULL
//小心指针越界
//指针指向空间释放即使放置NULL,意思：就是比如int a=10;int *p=&a;*p=20;然后你不想用p了，就写p=NULL;
//指针使用之前检查有效性if(pa!=NULL)加上这个就可以用pa这个指针
//指针运算：指针加减整数，指针减指针(指针减指针得到的是中间的元素个数大地址减小地址才是，小的减大的会输出负)，
// 指针相减的时候&arr【9】-&ch【0】是错误的，两个数组类型不同，得出的结果是未知的，两个地址想减必须指向的是同一块空间
//指针的关系运算(指针进行比较的时候，c语言标准规定，允许指向数组元素的指针跟数组后面的比较不允许跟数组前面的比较，虽然大部分编译器可以运行，但是不建议)
// #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//
//	}
//
//	return 0;
//}
//int my_strlen(char*str)//求字符串长度第一种计数器第二种递归第三组地址相减
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//#define N_VALUES 5
//#include<stdio.h>
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp;
//	}
//	return 0;
//}
//二级指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int**ppa=&pa;//这些***怎么理解呢？可以理解为ppa前面一颗*告诉我ppa是个指针变量，最前面那两个是说明ppa是个二级指针
//	**ppa = 20;
//	printf("%d", a);
//	return 0;
//}
//指针数组-数组
//数组指针-指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int arr[3] = { a,b,c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", arr[i]);//1打印出的值
//		printf("%p\n", arr[i]);//2？
//		printf("%p\n", &arr[i]);//3打印出各个元素的地址
//		printf("%d\n", &arr[i]);//4？
//	}
//	int*d[3] = {&a,&b,&c};//指针数组
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(d[i]));//5打印出指针数组中各个元素地址所指向的值
//		printf("%d\n", d[i]);//6？
//		printf("%p\n", d[i]);//7打印出各个数组指针的元素的地址
//	}
//	return 0;
//}