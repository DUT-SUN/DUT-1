//
//int pd(int x,int y)
//{
//	int day;
//	switch (x)
//	{
//	case(1):day = 0; break;
//	case(2):day = 31; break;
//	case(3):day = 60; break;
//	case(4):day = 90; break;
//	case(5):day = 121; break;
//	case(6):day = 151; break;
//	case(7):day = 182; break;
//	case(8):day = 213; break;
//	case(9):day = 243; break;
//	case(10):day = 274; break;
//	case(11):day = 304; break;
//	case(12):day = 335; break;
//		
//	}
//	day = 365-(day + y);
//	return day;
//}
//#include<stdio.h>
//int main()
//{
//	int t, k;
//	printf("�������ڣ�");
//	scanf_s("%d��%d��", &t, &k);
//	int day = pd(t, k);
//	printf("���껹��%d��\n", day);
//	int m1, d1, m2, d2;
//	printf("����һ�����ڣ�\n");
//	scanf_s("%d��%d��",& m1, &d1);
//	int day1 = pd(m1, d1);
//	printf("������һ�����ڣ�\n");
//	scanf_s("%d��%d��", &m2, &d2);
//	int day2 = pd(m2, d2);
//	int s = day1 - day2;
//	if (s > 0)
//		printf("���%d��\n", s);
//	else
//		printf("���%d��\n", -s);
//	return 0;
//}