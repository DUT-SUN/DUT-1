//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//main()
//{
//    int  buffer[10], i, k, flag;
//    long  number, n;
//    printf("please input  one  number");
//    scanf("%ld", &number);
//    k = 0;
//    n = number;
//    do
//    {
//        buffer[k] = n % 10;
//        k = k + 1;
//        n = n / 10;
//    } while (n != 0);
//    flag = 1;
//    for (i = 0; i <= (k - 1) / 2; i++)
//        if (buffer[i] != buffer[k - 1 - i])
//            flag = 0;
//    if (flag)
//        printf("%ld  is  huiwenshu\n", number);
//    else   printf("%ld  is  not  huiwenshu\n", number);
//    return 0;
//}