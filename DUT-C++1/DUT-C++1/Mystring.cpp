//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
////�����ַ�����MyString��˽�����ݳ�Ա����char* p, int size; //�ַ�������
////
////1��������صĹ��캯�����������졢������������Ա���������������ʵ�����¹��ܣ�
////
////2�����ء�����ʵ���ַ������ӹ��ܣ�
////
////3�����ء� == ���ж������ַ����Ƿ���ȣ������ַ������ݵ��ֵ�˳�򷵻�true / false��
////
////4�����ء� << ���롰 >> ����ʵ���ַ����������������������cin >> s3; cout << s2 << endl;
////
////ѡ����
////
////1�������������()�������ַ��������з���һ���Ӵ�����s1(2, 4)��ʾ���ش��Ӵ�������s[2](s1��3���ַ�)��ʼ���Ӵ�(����s1[2]��s1[3]��s1[4]�����ַ�)��
////
////2�� ���ء� = ����ʹ���ʽʹ�� s = s1 + s2; s = s1 = s2 ������
//using namespace std;
//class MyString
//{
//private:
//	char* p;
//	int sz;
//public:
//	MyString(const char* n);
//	MyString(const MyString& c);
//	~MyString();
//	MyString operator+(MyString& c);
//	bool operator==(MyString& c);
//	friend ostream& operator<<(ostream& os, const MyString& c);
//	friend istream& operator>>(istream& in, MyString& c);
//	string operator()(int a, int b);
//	void operator=(MyString& c1);
//};
//MyString::MyString(const char* n)
//{
//	sz = strlen(n) + 1;
//	p = new char[sz];
//	strcpy(this->p, n);
//}
//MyString::MyString(const MyString& c)
//{
//	p = new char[strlen(c.p) + 1];
//	strcpy(p, c.p);
//	sz = c.sz;;
//}
//MyString::~MyString()
//{
//	delete[]p;
//}
//MyString MyString::operator+(MyString& c)
//{
//
//	sz = sz + c.sz - 1;
//	char* x = new char[sz];
//	strcpy(x, p);
//	strcat(x, c.p);
//	MyString a(x);
//	delete[]x;
//	return a;
//}
//bool MyString::operator==(MyString& c)
//{
//	if (strcmp(p, c.p) == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//ostream& operator<<(ostream& os, const MyString& c)
//{
//	os << "�ַ���:" << c.p << " " << "��С:" << c.sz << endl;
//	return os;
//}
//istream& operator>>(istream& in, MyString& c)
//{
//	in >> c.p >> c.sz;
//	return in;
//}
//string MyString::operator()(int a, int b)
//{
//	int len = b - a + 1;
//	char* n = new char[len + 1];
//	int j = 0;
//	for (int i = a-1; i <= b-1; i++)
//	{
//		n[j++] = p[i];
//	}
//	n[len] = '\0';
//	return n;
//}
//void MyString::operator=(MyString& c1)
//{
//	p = new char[c1.sz];
//	strcpy(p, c1.p);
//	sz = c1.sz;
//}
//int main()
//{
//	MyString a("C++");
//	MyString b("����ѣ�");
//	MyString c = a + b;
//	cout << c;
//	MyString x("����");
//	cin >> x;
//	cout << x;
//	if (a + b == c)
//	{
//		cout << "�ַ�����ͬ!" << endl;
//	}
//	cout <<c(4,12)<< endl;
//}
