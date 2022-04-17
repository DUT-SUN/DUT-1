//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////函数名相同，函数参数列表不同，这就是合法的函数重载
////int max(int a,int b)
////int max(double a,double b)
////调用max(1.2f,3.4f)
////该语句会调用参数为double的函数，float类型会向double类型转换，
////int max(int a,int b)
////float max(float a,float b)
////max(1.2,3.4)
////1.2,3.4都是double类型，不能明确匹配是哪一个函数，函数重载应避免类型转换
////函数重载不可以用函数返回值来区别，因为调用的时候无法体现返回值
//
////函数参数列表不同：
////1.参数个数不同；
////2.参数个数相同，但是相应位置的参数类型不同