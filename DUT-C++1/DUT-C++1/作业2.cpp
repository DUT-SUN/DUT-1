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
//	void set(const char* pn);  // 将字符串设置为pn指向的内容，注意避免越界
//
//	void set(const myString& rStr);  // 将字符串设置为rStr中的内容，注意避免越界
//
//	void print()const;// 输出字符串整体和长度
//
//	char get(int i)const;  // 返回字符串中的下标为i的字符，注意i 的有效性
//
//	void toUpper();   //转化为大写字符串
//
//	bool strcompare(const myString& s);   //比较字符串
//
//private:
//
//	char* pStr;    // 指向存储字符串的空间 new char[size+1]     
//
//	int size;      //包含字符的数目
//
//};
//myString::myString(const char* pn)
//{
//	set(pn);
//}
//void myString::set(const char* pn) // 将字符串设置为pn指向的内容，注意避免越界
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
//void myString::set(const myString& rStr)  // 将字符串设置为rStr中的内容，注意避免越界
//{
//	set(rStr.pStr);
//}
//void myString::print()const// 输出字符串整体和长度
//{
//	if (size == 0)
//	{
//		cout << 0 << endl;
//	}
//	else
//	{
//		cout << pStr << ' ' << "长度为:" << strlen(pStr) << endl;
//	}
//}
//char myString::get(int i)const  // 返回字符串中的下标为i的字符，注意i 的有效性
//{
//	if (i > size)
//	{
//		cout << "下标超出字符长度" << endl;
//	}
//	else
//	{
//		return pStr[i];
//	}
//}
//void myString::toUpper()  //转化为大写字符串
//{
//	for (int i = 0; i < size; i++)
//	{
//		*((char*)pStr + i) -= 32;
//	}
//}
//bool myString::strcompare(const myString& s)//比较字符串
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
//	cout << s1.get(0) << endl; //输出H
//
//	s2.print();   //输出“空字符串”，0
//
//	s2.set("Hello world");
//
//	s2.print();  //输出“Hello world”
//
//	s1.toUpper();
//
//	s1.print();  //输出HELLO
//
//	s1.set(s2);
//
//	if (s2.strcompare(s1)) cout << "字符串相同"<<endl;
//
//	else cout << "字符串不同"<<endl;
//
//	return 0;
//
//}
