////#define _CRT_SECURE_NO_WARNINGS 1
////
//////qsort函数
/////* qsort example */
////#include <stdio.h>     
////#include <stdlib.h>   
////#include<search.h>
////int compare(const void* a, const void* b)
////{
////	return (*(int*)a - *(int*)b);
////}
////
////int main()
////{
////	int values[] = { 40, 10, 100, 90, 20, 25 };
////	int n;
////	qsort(values, sizeof(values) / sizeof(values[0]), sizeof(int), compare);
////	for (n = 0; n < sizeof(values) / sizeof(values[0]); n++)
////		printf("%d ", values[n]);
////	return 0;
////}
//#define _CRT_SECURE_NO_WARNINGS
//
////void qsort(void* base, size_t num, size_t size, int(*compare)(const void*, const void*));
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<stdlib.h>
//// void qsort(void* base, size_t num, size_t size, int(*compare)(const void*, const void*))
//
//typedef struct
//{
//    char name[30];   //学生姓名
//    int Chinese;     //语文成绩  
//    int Math;        // 数学成绩  
//    int English;     // 英语成绩
//}st;
//int cmp(const void* a, const void* b)
//{
//    st* pa = (st*)a;
//    st* pb = (st*)b;
//    int num1 = pa->Chinese + pa->English + pa->Math;
//    int num2 = pb->Chinese + pb->English + pb->Math;
//
//    //return (int)num1 - num2;   // 从小到大，
//    return (int)num2 - num1;   //  从大到小
//}
//int main(void)
//{
//    st students[7] = {
//        {"周",97,68,45},
//        {"吴",100,32,88},
//        {"郑",78,88,78},
//        {"王",87,90,89},
//        {"赵",87,77,66},
//        {"钱",59,68,98},
//        {"孙",62,73,89}
//    };
//    qsort(students, 7, sizeof(st), cmp);   // 注意区别 students 与 st
//
//    for (int i = 0; i < 7; i++)
//    {
//        printf("%sMMM	", students[i].name, students[i].Chinese, students[i].Math, students[i].English);
//        printf("总分：%d", students[i].Chinese + students[i].English + students[i].Math);
//    }
//
//    system("pause");
//    return 0;
//}
//
//
//
//
