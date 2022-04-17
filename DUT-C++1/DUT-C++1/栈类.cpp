//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//const int Max = 20;
//template < class T>
//class stack
//{
//    T s[Max];
//    int top=0;
//public:
//    void push(T x);
//    T pop();  //弹出结果放在x变量中
//    bool empty();  //栈空返回true，否则返回false
//};
//template < class T>
//void stack<T>::push(T x)
//{
//    s[top] = x;
//    top++;
//}
//template<typename T>
//T stack<T>::pop()
//{
//    
//    return s[--top];   
//}
//template < class T>
//bool stack<T>::empty()
//{
//    if (top == 0)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
//int main()
//{
//    stack<int>x;
//    x.push(1);
//    x.push(3);
//    x.push(7);
//    while (!x.empty())
//    {
//        cout << x.pop() << ' ';
//    }
//    stack<char>y;
//    y.push('a');
//    y.push('b');
//    y.push('c');
//    while (!y.empty())
//    {
//        cout << y.pop() << ' ';
//    }
//}