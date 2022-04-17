//#define _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//using namespace std;
//class MyString
//{
//protected:
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
//	os << "×Ö·û´®:" << c.p << " " << "´óÐ¡:" << c.sz << endl;
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
//
//class EditString:public MyString
//{
//private:
//	int position;
//public:
//	EditString(const char* n,int position);
//	char* search();
//	void insert(const char* s);
//	void replace(char c);
//	void deleteappendstring();
//};
//EditString::EditString(const char* n, int position):MyString(n)
//{
//	this->position = position;
//}
//char* EditString::search()
//{
//	return p + position-1;
//}
//void EditString::insert(const char* s)
//{
//	sz = sz + strlen(s);//7
//	char*s1 = new char[sz];
//	for (int i = 0; i < position-1; i++)
//	{
//		s1[i] = p[i];
//	}
//	strcpy(s1 + position - 1, s);
//	strcat(s1, search());
//	p = new char[sz];
//	strcpy(p, s1);
//}
//void EditString::replace(char c)
//{
//	*search() = c;
//}
//void EditString::deleteappendstring()
//{
//	sz =  position;
//	*search() = '\0';
//}
//int main()
//{
//	EditString a("C++isdifficult",4);
//	a.insert("nb");
//	cout << a;
//	a.replace('v');
//	cout << a;
//	a.deleteappendstring();
//	cout << a;
//}