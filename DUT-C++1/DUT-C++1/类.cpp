//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//class A
//{
//private:
//    int n1;
//    int n2;
//
//public:
//
//    A(int k1) :n2(k1), n1(n2) {}
//
//    void Print() {
//        cout << "n1:" << n1 << ", n2: " << n2 << endl;
//    }
//};
//
//int main()
//{
//
//    A a(115);
//    a.Print();
//
//    getchar();
//    return 1;
//}
////构造函数中，变量初始化的顺序，是以变量定义的顺序来定的，而不是简单的以构造函数中变量出现的顺序来定的

//public:
//    A(int k1, int k2) {
//        n1 = k1;
//        n2 = k2;
//    }

//和下面的相等
//public:
//
//    A(int k1, int k2) :n1(k1), n2(k2) {}
