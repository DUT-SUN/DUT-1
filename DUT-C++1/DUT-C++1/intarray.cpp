//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class IntArray
//{
//public:
//    IntArray(int s = 10);
//    ~IntArray();
//    IntArray(const IntArray& c);
//    int& operator[](int i);
//    friend ostream& operator <<(ostream& os,IntArray& c);
//    friend istream& operator >>(istream& is, IntArray& c);
//    IntArray& operator --();
//    IntArray& operator --(int);
//    IntArray& operator=(IntArray& c);
//private:
//    int* pArr;  //数组首地址
//    int size;    //数组大小
//};
//IntArray::IntArray(int s)
//{
//    size = s;
//    pArr = new int[size];
//}
//IntArray::~IntArray()
//{
//    delete[]pArr;
//}
//IntArray::IntArray(const IntArray& c)
//{
//    size = c.size;
//    pArr = new int[size];
//    for (int i = 0; i < size; i++)
//    {
//        pArr[i] = c.pArr[i];
//    }
//}
//int& IntArray::operator[](int i)
//{
//    if (i > size||i<1)
//    {
//        cout << "超出空间" << endl;
//        return pArr[0];
//    }
//    else
//    {
//        return pArr[i - 1];
//    }
//}
//ostream& operator <<(ostream& os, IntArray& c)
//{
//    os << "数组大小:" << c.size << endl;
//    os << "数组元素:";
//    for (int i = 0; i < c.size; i++)
//    {
//        os << c.pArr[i] << ' ';
//    }
//    os << endl;
//    return os;
//}
//istream& operator >>(istream& is, IntArray& c)
//{
//    cout << "输入数组大小:";
//     is >>c.size;
//     c.pArr = new int[c.size];
//    cout << "逐个输入数组元素:";
//    for (int i = 0; i < c.size; i++)
//    {
//        is >> c.pArr[i];
//    }
//    return is;
//}
//IntArray& IntArray::operator --()
//{
//    for (int i = 0; i < size; i++)
//    {
//        pArr[i]--;
//    }
//    return *this;
//}
//IntArray& IntArray::operator --(int)
//{
//    for (int i = 0; i < size; i++)
//    {
//        pArr[i]--;
//    }
//    return *this;
//}
//IntArray& IntArray::operator=(IntArray& c)
//{
//    size = c.size;
//    pArr = new int[size];
//    for (int i = 0; i < size; i++)
//    {
//        for (int i = 0; i < size; i++)
//        {
//            pArr[i] = c.pArr[i];
//        }
//    }
//    return *this;
//}
//int main()
//{
//    IntArray a(5), b(3);
//    cin >> a >> b;//输入a和b的数据
//    cout << a << b;//输出a和b的数据
//    cout << a--;//将a全减后输出
//    b = a;//b用a赋值
//    cout << b;//输出b
//}