//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//// ���Լ����շת�����
//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//// ��С�������������˻��������Լ��
//int lcm(int a, int b)
//{
//	return a / gcd(a, b) * b;
//}
//
//struct Fraction
//{
//	int up;		// ����
//	int down;	// ��ĸ
//	Fraction(int v1, int v2) :up(v1), down(v2) {}
//};
//
//// �����Ļ���
//Fraction FractionReduction(Fraction& val)
//{
//	// ����Ϊ0�����ĸΪ1
//	if (val.up == 0) val.down = 1;
//
//	// �����ĸΪ����������ӷ�ĸ���
//	if (val.down < 0)
//	{
//		val.up = -val.up;
//		val.down = -val.down;
//	}
//
//	// Լ��: ���ӷ�ĸͬʱ�������Լ��
//	int x = gcd(abs(val.up), abs(val.down));
//	val.up /= x;
//	val.down /= x;
//
//	return val;
//}
//
//// �����ӷ�
//Fraction FractionAddition(Fraction v1, Fraction v2)
//{
//	Fraction res(0, 1);
//
//	// �Է�ĸ���м��
//	if (v1.down == 0 || v2.down == 0) return res;
//
//	// ���ӣ���ĸ�ֱ����
//	res.up = v1.up * v2.down + v1.down * v2.up;
//	res.down = v1.down * v2.down;
//
//	// ���򣬷���
//	return FractionReduction(res);
//}
//
//// ��������
//Fraction FractionSubtraction(Fraction v1, Fraction v2)
//{
//	Fraction res(0, 1);
//
//	// �Է�ĸ���м��
//	if (v1.down == 0 || v2.down == 0) return res;
//
//	// ���ӣ���ĸ�ֱ����
//	res.up = v1.up * v2.down - v1.down * v2.up;
//	res.down = v1.down * v2.down;
//
//	// ���򣬷���
//	return FractionReduction(res);
//}
//
//// �����˷�
//Fraction FractionMultiplication(Fraction v1, Fraction v2)
//{
//	Fraction res(0, 1);
//
//	// �Է�ĸ���м��
//	if (v1.down == 0 || v2.down == 0) return res;
//
//	// ���ӣ���ĸ�ֱ����
//	res.up = v1.up * v2.up;
//	res.down = v1.down * v2.down;
//
//	// ���򣬷���
//	return FractionReduction(res);
//}
//
//// ��������
//Fraction FractionDivision(Fraction v1, Fraction v2)
//{
//	Fraction res(0, 1);
//
//	// �Է�ĸ���м��
//	if (v1.down == 0 || v2.down == 0) return res;
//
//	// ���ӣ���ĸ�ֱ����
//	res.up = v1.up * v2.down;
//	res.down = v1.down * v2.up;
//
//	// ���򣬷���
//	return FractionReduction(res);
//}
//
//void PrintFraction(Fraction val)
//{
//	if (val.down == 0)
//	{
//		printf("invalid value.\n");
//		return;
//	}
//	else if (val.up == 0)
//	{
//		printf("0/1\n");
//		return;
//	}
//
//	FractionReduction(val);
//	if (val.up > val.down)
//		printf("%d %d/%d\n", val.up / val.down, val.up % val.down, val.down);
//	else
//		printf("%d/%d\n", val.up, val.down);
//
//	return;
//}
//
//int main()
//{
//	Fraction v1(2, 3);
//	Fraction v2(4, 5);
//	Fraction res(0, 1);
//
//	res = FractionAddition(v1, v2);
//	cout << "addtion: ";
//	PrintFraction(res);
//
//	res = FractionSubtraction(v1, v2);
//	cout << "subtraction: ";
//	PrintFraction(res);
//
//	res = FractionMultiplication(v1, v2);
//	cout << "multiplication: ";
//	PrintFraction(res);
//
//	res = FractionDivision(v1, v2);
//	cout << "division: ";
//	PrintFraction(res);
//
//	// 100/0
//	res.up = 100;
//	res.down = 0;
//	PrintFraction(res);
//
//	// 0/100
//	res.up = 0;
//	res.down = 100;
//	PrintFraction(res);
//
//	return 0;
//}
