//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//using namespace std;
//class Line
//{
//public:
//    void setLength(double len);
//    double getLength(void);
//    Line();  // 这是构造函数
//
//private:
//    double length;
//};
//
//// 成员函数定义，包括构造函数
//Line::Line(void)
//{
//    cout << "Object is being created" << endl;
//}
//
//void Line::setLength(double len)
//{
//    length = len;
//}
//
//double Line::getLength(void)
//{
//    return length;
//}
//// 程序的主函数
//int main()
//{
//    Line line;
//
//    // 设置长度
//    line.setLength(6.0);
//    cout << "Length of line : " << line.getLength() << endl;
//
//    return 0;
//}

//默认的构造函数没有任何参数，但如果需要，
//构造函数也可以带有参数。这样在创建对象时就会给对象赋初始值，如下面的例子所示：

//#include <iostream>
//
//using namespace std;
//
//class Line
//{
//public:
//    void setLength(double len);
//    double getLength(void);
//    Line(double len);  // 这是构造函数
//
//private:
//    double length;
//};
//
//// 成员函数定义，包括构造函数
//Line::Line(double len)
//{
//    cout << "Object is being created, length = " << len << endl;
//    length = len;
//}
//
//void Line::setLength(double len)
//{
//    length = len;
//}
//
//double Line::getLength(void)
//{
//    return length;
//}
//// 程序的主函数
//int main()
//{
//    Line line(10.0);
//
//    // 获取默认设置的长度
//    cout << "Length of line : " << line.getLength() << endl;
//    // 再次设置长度
//    line.setLength(6.0);
//    cout << "Length of line : " << line.getLength() << endl;
//
//    return 0;
//}


//使用初始化列表来初始化字段这个赋值在类.cpp也有差不多的

//
//Line::Line(double len) : length(len)
//{
//    cout << "Object is being created, length = " << len << endl;
//}

//同理
//
//C::C(double a, double b, double c) : X(a), Y(b), Z(c)
//{
//	....
//}
//
//类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。
//
//析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，
//它不会返回任何值，也不能带有任何参数。析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。


//#include <iostream>
//
//using namespace std;
//
//class Line
//{
//public:
//    void setLength(double len);
//    double getLength(void);
//    Line();   // 这是构造函数声明
//    ~Line();  // 这是析构函数声明
//
//private:
//    double length;
//};
//
//// 成员函数定义，包括构造函数
//Line::Line(void)
//{
//    cout << "Object is being created" << endl;
//}
//Line::~Line(void)
//{
//    cout << "Object is being deleted" << endl;
//}
//
//void Line::setLength(double len)
//{
//    length = len;
//}
//
//double Line::getLength(void)
//{
//    return length;
//}
//// 程序的主函数
//int main()
//{
//    Line line;
//
//    // 设置长度
//    line.setLength(6.0);
//    cout << "Length of line : " << line.getLength() << endl;
//
//    return 0;
//}
