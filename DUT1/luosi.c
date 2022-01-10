//#include<stdio.h>
//
//int add(int a, int b)
//{
//    int add = 0;
//    int carry = 0;
//    do
//    {
//        add = a ^ b;
//        carry = (a & b) << 1;
//        a = add;
//        b = carry;
//    } while (carry);
//    return a;
//}
//int main()
//{
//    int a = 17;
//    int b = 15;
//    int c = add(a, b);
//    printf("%d", c);
//  
//    return 0;
//}
