//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
////完善字符串类MyString，私有数据成员包括char* p, int size; //字符串长度
////
////1）定义相关的构造函数、拷贝构造、析构函数及成员函数，重载运算符实现如下功能：
////
////2）重载“＋”实现字符串连接功能；
////
////3）重载“ == ”判断两个字符串是否相等，根据字符串内容的字典顺序返回true / false；
////
////4）重载“ << ”与“ >> ”，实现字符串的输入与输出操作，如cin >> s3; cout << s2 << endl;
////
////选做：
////
////1）重载运算符“()”，从字符串对象中返回一个子串。如s1(2, 4)表示返回从子串，即从s[2](s1第3个字符)开始的子串(包括s1[2]、s1[3]和s1[4]三个字符)。
////
////2） 重载“ = ”，使表达式使得 s = s1 + s2; s = s1 = s2 成立；
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
//	os << "字符串:" << c.p << " " << "大小:" << c.sz << endl;
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
//	MyString b("真滴难！");
//	MyString c = a + b;
//	cout << c;
//	MyString x("测试");
//	cin >> x;
//	cout << x;
//	if (a + b == c)
//	{
//		cout << "字符串相同!" << endl;
//	}
//	cout <<c(4,12)<< endl;
//}
