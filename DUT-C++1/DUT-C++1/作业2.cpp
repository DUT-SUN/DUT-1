//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//using namespace std;
//class myString
//
//{
//
//public:
//
//	myString(const char* pn = 0);
//
//	~myString()
//	{
//		cout << "delete success" << endl;
//	}
//	void set(const char* pn);  // ���ַ�������Ϊpnָ������ݣ�ע�����Խ��
//
//	void set(const myString& rStr);  // ���ַ�������ΪrStr�е����ݣ�ע�����Խ��
//
//	void print()const;// ����ַ�������ͳ���
//
//	char get(int i)const;  // �����ַ����е��±�Ϊi���ַ���ע��i ����Ч��
//
//	void toUpper();   //ת��Ϊ��д�ַ���
//
//	bool strcompare(const myString& s);   //�Ƚ��ַ���
//
//private:
//
//	char* pStr;    // ָ��洢�ַ����Ŀռ� new char[size+1]     
//
//	int size;      //�����ַ�����Ŀ
//
//};
//myString::myString(const char* pn)
//{
//	set(pn);
//}
//void myString::set(const char* pn) // ���ַ�������Ϊpnָ������ݣ�ע�����Խ��
//{
//	if (pn != 0)
//	{
//		size = strlen(pn);
//		pStr = new char[size + 1];
//		strcpy(pStr, pn);
//	}
//	else
//	{
//		size = 0;
//	}
//}
//void myString::set(const myString& rStr)  // ���ַ�������ΪrStr�е����ݣ�ע�����Խ��
//{
//	set(rStr.pStr);
//}
//void myString::print()const// ����ַ�������ͳ���
//{
//	if (size == 0)
//	{
//		cout << 0 << endl;
//	}
//	else
//	{
//		cout << pStr << ' ' << "����Ϊ:" << strlen(pStr) << endl;
//	}
//}
//char myString::get(int i)const  // �����ַ����е��±�Ϊi���ַ���ע��i ����Ч��
//{
//	if (i > size)
//	{
//		cout << "�±곬���ַ�����" << endl;
//	}
//	else
//	{
//		return pStr[i];
//	}
//}
//void myString::toUpper()  //ת��Ϊ��д�ַ���
//{
//	for (int i = 0; i < size; i++)
//	{
//		*((char*)pStr + i) -= 32;
//	}
//}
//bool myString::strcompare(const myString& s)//�Ƚ��ַ���
//{
//	if (strcmp(pStr, s.pStr) == 0)
//		return true;
//
//	else
//	{
//		return false;
//	}
//}
//int main()
//
//{
//
//	myString s2, s1("hello");
//
//	cout << s1.get(0) << endl; //���H
//
//	s2.print();   //��������ַ�������0
//
//	s2.set("Hello world");
//
//	s2.print();  //�����Hello world��
//
//	s1.toUpper();
//
//	s1.print();  //���HELLO
//
//	s1.set(s2);
//
//	if (s2.strcompare(s1)) cout << "�ַ�����ͬ"<<endl;
//
//	else cout << "�ַ�����ͬ"<<endl;
//
//	return 0;
//
//}
