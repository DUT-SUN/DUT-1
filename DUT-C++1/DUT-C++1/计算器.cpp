//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////��������󷽷����һ������������̨����
////
////1.1���һ������Operation, ���ݳ�Ա��������������m_numberA��m_numberB�� ��Ա��������set(), get()�������ò�������ֵ���麯��GetResult()������������
////
////1.2�ֱ���������� OperationAdd��OperationSub��OperationMul�� OperationDivʵ�ּӼ��˳�����, ע�����������������Ϊ0��
////
////1.3������ͳһ�̳��Ը���Operation, ��д�麯��GetResult()���������Ľ����
////
////1.4 OperationFactory���Ѿ�д�ã�����ֱ��ʹ�á�
//class Operation {
//protected:
//	double m_numberA;
//	double m_numberB;
//public:
//	double GetNumA();
//	double GetNumB();
//	void SetNumA(double x);
//	void SetNumB(double x);
//	virtual double GetResult() = 0;
//};
//double Operation::GetNumA()
//{
//	return m_numberA;
//}
//double Operation::GetNumB()
//{
//	return m_numberB;
//}
//void Operation::SetNumA(double x)
//{
//	m_numberA = x;
//}
//void Operation::SetNumB(double x)
//{
//	m_numberB = x;
//}
//
//class OperationAdd :public Operation {
//public:
//	double GetResult();
//};
//double OperationAdd::GetResult()
//{
//	return m_numberA + m_numberB;
//}
//class OperationSub :public Operation {
//public:
//	double GetResult();
//};
//double OperationSub::GetResult()
//{
//	return m_numberA - m_numberB;
//}
//class OperationMul :public Operation {
//public:
//	double GetResult();
//};
//double OperationMul::GetResult()
//{
//	return m_numberA * m_numberB;
//}
//class OperationDiv :public Operation {
//public:
//	double GetResult();
//};
//double OperationDiv::GetResult()
//{
//	return m_numberA / m_numberB;
//}
//class  OperationFactory {
//
//public:
//
//	static Operation* CreateOperate(char oper)
//	{
//		Operation* poper = NULL;
//		switch (oper)
//		{
//		case '+':
//			poper = new OperationAdd;
//			break;
//		case '-':
//			poper = new OperationSub;
//			break;
//		case '*':
//			poper = new OperationMul;
//			break;
//		case '/':
//			poper = new OperationDiv;
//			break;
//		}
//		return poper;
//	}
//};
//int  main()
//
//{
//
//	int flag = 1;
//
//	while (flag)
//
//	{
//
//		cout << "input A:";
//
//		double numA;
//
//		cin >> numA;
//
//		cout << "input operator:";
//
//		char oper;
//
//		cin >> oper;
//
//		cout << "input B:";
//
//		double numB;
//
//		cin >> numB;
//
//		Operation* poper = OperationFactory::CreateOperate(oper);
//
//		poper->SetNumA(numA);
//
//		poper->SetNumB(numB);
//
//		cout << poper->GetNumA() << ' ' << oper << ' ' << poper->GetNumB() << " = " << poper->GetResult() << endl;
//		cout << "�Ƿ���Ҫ����: (0/1)";
//		cin >> flag;
//	}
//	return 0;
//
//}
//
//
//
