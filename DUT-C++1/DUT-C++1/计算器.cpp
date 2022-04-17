//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
////用面向对象方法设计一个计算器控制台程序。
////
////1.1设计一个父类Operation, 数据成员包含两个操作数m_numberA，m_numberB。 成员函数包括set(), get()函数设置操作数的值，虚函数GetResult()用于输出结果。
////
////1.2分别设计派生类 OperationAdd，OperationSub，OperationMul， OperationDiv实现加减乘除操作, 注意除法操作除数不能为0。
////
////1.3派生类统一继承自父类Operation, 重写虚函数GetResult()输出操作后的结果。
////
////1.4 OperationFactory类已经写好，可以直接使用。
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
//		cout << "是否需要继续: (0/1)";
//		cin >> flag;
//	}
//	return 0;
//
//}
//
//
//
