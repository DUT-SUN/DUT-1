//#include<stdio.h>
//float max(float f1,float f2,float f3)
//{
//	float fmax = f1;
//	if (f2 > fmax)
//		fmax = f2;
//	if (f3 > fmax)
//		fmax = f3;
//	return fmax;
//}
//int sum(int ino)
//{
//	int icounter = 0, inum = 0, isum = 0;
//	printf("input%d numbers:", ino);
//	while (icounter < ino)
//	{
//		scanf_s("%d", &inum);
//			isum += inum;
//		++icounter;
//	}
//	return isum;
//
//}
//int main()
//{
//	int isum1, isum2, isum3;
//	float fave1, fave2, fave3;
//	isum1 = sum(4);
//	fave1 = (float)isum1 / 4;
//	printf("average = %.2f\n", fave1);
//	isum2 = sum(5);
//	fave2 = isum2 / 5.0f;
//	printf("average2 = %.2f\n", fave2);
//	fave3 = (isum3 = sum(3)) / 3.0f;
//	printf("average3 = %.2f\n ", fave3);
//	printf("\nHighest average is %.f\n", max(fave1, fave2, fave3));
//	return 0;
//}