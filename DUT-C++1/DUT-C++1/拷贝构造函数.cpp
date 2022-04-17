//#define _CRT_SECURE_NO_WARNINGS 1

//
//通过使用另一个同类型的对象来初始化新创建的对象。
//
//复制对象把它作为参数传递给函数。
//
//复制对象，并从函数返回这个对象。

//classname(const classname& obj) {
//	// 构造函数的主体
//}

//#include <iostream>
//
//using namespace std;
//
//class Line
//{
//public:
//    int getLength(void);
//    Line(int len);             // 简单的构造函数
//    Line(const Line& obj);      // 拷贝构造函数
//    ~Line();                     // 析构函数
//
//private:
//    int* ptr;
//};
//
//// 成员函数定义，包括构造函数
//Line::Line(int len)
//{
//    cout << "调用构造函数" << endl;
//    // 为指针分配内存
//    ptr = new int;
//    *ptr = len;
//}
//
//Line::Line(const Line& obj)
//{
//    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
//    ptr = new int;
//    *ptr = *obj.ptr; // 拷贝值
//}
//
//Line::~Line(void)
//{
//    cout << "释放内存" << endl;
//    delete ptr;
//}
//int Line::getLength(void)
//{
//    return *ptr;
//}
//
//void display(Line obj)
//{
//    cout << "line 大小 : " << obj.getLength() << endl;
//}
//
//// 程序的主函数
//int main()
//{
//    Line line(10);
//
//    display(line);
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Line
//{
//public:
//    int getLength(void);
//    Line(int len);             // 简单的构造函数
//    Line(const Line& obj);      // 拷贝构造函数
//    ~Line();                     // 析构函数
//
//private:
//    int* ptr;
//};
//
//// 成员函数定义，包括构造函数
//Line::Line(int len)
//{
//    cout << "调用构造函数" << endl;
//    // 为指针分配内存
//    ptr = new int;
//    *ptr = len;
//}
//
//Line::Line(const Line& obj)
//{
//    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
//    ptr = new int;
//    *ptr = *obj.ptr; // 拷贝值
//}
//
//Line::~Line(void)
//{
//    cout << "释放内存" << endl;
//    delete ptr;
//}
//int Line::getLength(void)
//{
//    return *ptr;
//}
//
//void display(Line obj)
//{
//    cout << "line 大小 : " << obj.getLength() << endl;
//}
//
//// 程序的主函数
//int main()
//{
//    Line line(10);
//
//    display(line);
//
//    return 0;
//}


//#include<iostream>
//using namespace std;
//class CExample
//{
//private:
//    int a;
//public:
//    //构造函数
//    CExample(int b)
//    {
//        a = b;
//        printf("constructor is called\n");
//    }
//    //拷贝构造函数
//    CExample(const CExample& c)
//    {
//        a = c.a;
//        printf("copy constructor is called\n");
//    }
//    //析构函数
//    ~CExample()
//    {
//        cout << "destructor is called\n";
//    }
//    void Show()
//    {
//        cout << a << endl;
//    }
//};
//int main()
//{
//    CExample A(100);
//    CExample B = A;
//    B.Show();
//    return 0;
//}

//!!!!拷贝构造函数的调用时机
//! 1. 当函数的参数为类的对象时
//#include<iostream>
//using namespace std;
//class CExample
//{
//private:
//    int a;
//public:
//    CExample(int b)
//    {
//        a = b;
//        printf("constructor is called\n");
//    }
//    CExample(const CExample& c)
//    {
//        a = c.a;
//        printf("copy constructor is called\n");
//    }
//    ~CExample()
//    {
//        cout << "destructor is called\n";
//    }
//    void Show()
//    {
//        cout << a << endl;
//    }
//};
//void g_fun(CExample c)
//{
//    cout << "g_func" << endl;
//}
//int main()
//{
//    CExample A(100);
//    CExample B = A;
//    B.Show();
//    g_fun(A);//为什么需要拷贝构造函数因为把类传过去的时候需要重新创建一个类
//    return 0;
//}


//2. 函数的返回值是类的对象

//#include<iostream>
//using namespace std;
//class CExample
//{
//private:
//    int a;
//public:
//    //构造函数
//    CExample(int b)
//    {
//        a = b;
//        printf("constructor is called\n");
//    }
//    //拷贝构造函数
//    CExample(const CExample& c)
//    {
//        a = c.a;
//        printf("copy constructor is called\n");
//    }
//    //析构函数
//    ~CExample()
//    {
//        cout << "destructor is called\n";
//    }
//    void Show()
//    {
//        cout << a << endl;
//    }
//};
//CExample g_fun()
//{
//    CExample temp(0);
//    return temp;
//}
//int main()
//{
//
//    g_fun();
//    return 0;
//}
// 当g_Fun()函数执行到return时，会产生以下几个重要步骤：
//(1). 先会产生一个临时变量，就叫XXXX吧。
//(2). 然后调用拷贝构造函数把temp的值给XXXX。整个这两个步骤有点像：CExample XXXX(temp);
//(3). 在函数执行到最后先析构temp局部变量。
//(4). 等g_fun()执行完后再析构掉XXXX对象。 

//3. 对象需要通过另外一个对象进行初始化
//CExample A(100);
//CExample B = A
//三、浅拷贝与深拷贝
//1. 默认拷贝构造函数
//很多时候在我们都不知道拷贝构造函数的情况下，传递对象给函数参数或者函数返回对象都能很好的进行，这是因为编译器会给我们自动产生一个拷贝构造函数，
// 这就是“默认拷贝构造函数”，这个构造函数很简单，
//仅仅使用“老对象”的数据成员的值对“新对象”的数据成员一一进行赋值，它一般具有以下形式：

//Rect::Rect(const Rect& r)
//{
//    width = r.width;
//    height = r.height;
//}
//当然，以上代码不用我们编写，编译器会为我们自动生成。
//但是如果认为这样就可以解决对象的复制问题，那就错了，让我们来考虑以下一段代码
//#include<iostream>
//using namespace std;
//class Rect
//{
//public:
//    Rect()
//    {
//        count++;
//    }
//    ~Rect()
//    {
//        count--;
//    }
//    static int getCount()
//    {
//        return count;
//    }
//private:
//    int width;
//    int height;
//    static int count;
//};
//int Rect::count = 0;
//int main()
//{
//    Rect rect1;
//    cout << "The count of Rect:" << Rect::getCount() << endl;
//    Rect rect2(rect1);
//    cout << "The count of Rect:" << Rect::getCount() << endl;
//    return 0;
//}

//这段代码对前面的类，加入了一个静态成员，目的是进行计数。在主函数中，
//首先创建对象rect1，输出此时的对象个数，然后使用rect1复制出对象rect2，
//再输出此时的对象个数，按照理解，此时应该有两个对象存在，但实际程序运行时，
//输出的都是1，反应出只有1个对象。此外，在销毁对象时，由于会调用销毁两个对象，
//类的析构函数会调用两次，此时的计数器将变为负数。
//说白了，就是拷贝构造函数没有处理静态数据成员。
//出现这些问题最根本就在于在复制对象时，计数器没有递增，我们重新编写拷贝构造函数，如下：

//#include<iostream>
//using namespace std;
//class Rect
//{
//public:
//    Rect()
//    {
//        count++;
//    }
//    Rect(const Rect& r)
//    {
//        width = r.width;
//        height = r.height;
//        count++;
//    }
//    ~Rect()
//    {
//        count--;
//    }
//    static int getCount()
//    {
//        return count;
//    }
//private:
//    int width;
//    int height;
//    static int count;
//};
//int Rect::count = 0;
//int main()
//{
//    Rect rect1;
//    cout << "The count of Rect:" << Rect::getCount() << endl;
//    Rect rect2(rect1);
//    cout << "The count of Rect:" << Rect::getCount() << endl;
//    return 0;
//}

//2. 浅拷贝
//所谓浅拷贝，指的是在对象复制时，只对对象中的数据成员进行简单的赋值，
//默认拷贝构造函数执行的也是浅拷贝。大多情况下“浅拷贝”已经能很好地工作了，
//但是一旦对象存在了动态成员，那么浅拷贝就会出问题了，让我们考虑如下一段代码：
//#include<iostream>
//#include<assert.h>
//using namespace std;
//class Rect
//{
//public:
//    Rect()
//    {
//        p = new int(100);
//    }
//
//    ~Rect()
//    {
//        assert(p != NULL);
//        delete p;
//    }
//private:
//    int width;
//    int height;
//    int* p;
//};
//int main()
//{
//    Rect rect1;
//    Rect rect2(rect1);
//    return 0;
//}
//在这段代码运行结束之前，会出现一个运行错误。原因就在于在进行对象复制时，
//对于动态分配的内容没有进行正确的操作。我们来分析一下：
//在运行定义rect1对象后，由于在构造函数中有一个动态分配的语句，因此执行后的内存情况大致如下：
//图片在深浅拷贝文件夹中
//当然，这不是我们所期望的结果，在销毁对象时，两个对象的析构函数将对同一个内存空间释放两次，这就是错误出现的原因。
//我们需要的不是两个p有相同的值，而是两个p指向的空间有相同的值，解决办法就是使用“深拷贝”。

//3. 深拷贝
//
//在“深拷贝”的情况下，对于对象中动态成员，就不能仅仅简单地赋值了，
//而应该重新动态分配空间，如上面的例子就应该按照如下的方式进行处理：

//#include<iostream>
//#include<assert.h>
//using namespace std;
//class Rect
//{
//public:
//    Rect()
//    {
//        p = new int(100);
//    }
//
//    Rect(const Rect& r)
//    {
//        width = r.width;
//        height = r.height;
//        p = new int(100);
//        *p = *(r.p);
//    }
//
//    ~Rect()
//    {
//        assert(p != NULL);
//        delete p;
//    }
//private:
//    int width;
//    int height;
//    int* p;
//};
//int main()
//{
//    Rect rect1;
//    Rect rect2(rect1);
//    return 0;
//}

//此时，在完成对象的复制后，内存的一个大致情况如下：
//图片在深浅拷贝pdf

//3. 防止默认拷贝发生
//通过对对象复制的分析，我们发现对象的复制大多在进行“值传递”时发生，
//这里有一个小技巧可以防止按值传递——声明一个私有拷贝构造函数。甚至不必去定义这个拷贝构造函数，
//这样因为拷贝构造函数是私有的，如果用户试图按值传递或函数返回该类对象，将得到一个编译错误，
//从而可以避免按值传递或返回对象。
//
//
////防止按值传递
//class CExample
//{
//private:
//    int a;
//
//public:
//    //构造函数
//    CExample(int b)
//    {
//        a = b;
//        cout << "creat: " << a << endl;
//    }
//
//private:
//    //拷贝构造函数，只是声明
//    CExample(const CExample& C);
//
//public:
//    ~CExample()
//    {
//        cout << "delete: " << a << endl;
//    }
//
//    void Show()
//    {
//        cout << a << endl;
//    }
//};
//
////???? 
//void g_Fun(CExample C)
//{
//    cout << "test" << endl;
//}
//
//int main()
//{
//    CExample test(1);
//    //g_Fun(test);   //按值传递将出错
//
//    return 0;
//}