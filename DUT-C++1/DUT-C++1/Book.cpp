//#define _CRT_SECURE_NO_WARNINGS 1
////完成下列类的实现。将代码以文本形式放入文本框中，并附上运行结果截图。
////评分说明：Book的3个成员函数中，
////构造和ChangeInfo函数分别是15分，printInfo10分，
////共40分，miniLibrary的4个成员函数分别是15分，共60分
//#include <iostream>
//#include <cstring>
//using namespace std;
////根据下面的提示编写一个小型图书馆的管理程序
////知识点：类的组合关系
////声明：以下的设计是结合我们目前的知识点，并适当降低复杂度，和实际图书馆的管理程序会有差别，
//class Book
//
//{
//
//private:
//    int isbn;//isbn号码
//    char bookname[20];//书名
//    int year;//出版年
//    
//public:
//    //给出构造函数定义,三个参数分别是 isbn号、书名、出版年
//    Book(int isbn = 0, const char* na = "no name", int y = 2022);
//    void printInfo()const; //输出书的基本信息
//    void changeInfo(int isbn, const char* na, int y);//修改书号、书名、出版年
//};
//Book::Book(int isbn, const char* na, int y)
//{
//    this->isbn = isbn;
//    strcpy(bookname, na);
//    year = y;
//}
//void Book::printInfo()const
//{
//    cout << "isbn号码:" << isbn << endl;
//    cout << "书名:" << bookname << endl;
//    cout << "出版年:" << year << endl;
//}
//void Book::changeInfo(int isbn, const char* na, int y)
//{
//    this->isbn = isbn;
//    strcpy(bookname, na);
//    year == y;
//}
//// 可以通过下面的main先测试一下Book类定义是否正确，如果运行该main程序请先将后面的注释掉
//
////int main()
////
////{
////
////    Book a[2];
////
////    a[0].changeInfo(1001,"C++",2018);
////
////    a[1].changeInfo(1002,"Math",2020);
////
////    a[0].printInfo();
////
////    a[1].printInfo();
////
////
////    return 0;
////
////}
//
//
//
//
//class miniLibrary//小型图书馆
//{
//private:
//    Book* booklist; //图书馆的收藏的书的数组
//    const int n;//图书馆的藏书量，最大容量
//    int currentNumber;//实际存储的书量，比如 图书馆最多10本，但是实际存储了3本
//public:
//    //构造函数：sn表示图书馆收藏的书的数量，申请sn个book的存储空间
//    //但是，初始的时候currentNumber=0，就是实际书籍0本
//    miniLibrary(int sn = 10);
//    //增加1本book，如果图书馆没满，则作为第currentNumber本加入，同时currentNumber++，返回true
//    //否则返回false
//    bool addBook(int isbn, const char* na, int y);
//    //修改第i本(比如第0、1、2 本）书的相关信息，如果i合理，进行修改，返回true，否则返回false
//    bool changeBookInfo(int i, int isbn, const char* na, int y);
//    //显示第i(i>=0 并且 i<currentNumber)本的信息,如果i不正确，则输出“没有这本书”，并且返回false
//    bool printInfo(int i)const;
//    ~miniLibrary() {
//        if (booklist) {
//            delete[]booklist;
//            booklist = 0;
//        }
//    }
//};
//miniLibrary::miniLibrary(int sn) :n(sn)
//{
//    booklist = new Book[n];
//    currentNumber = 0;
//
//}
//bool miniLibrary::addBook(int isbn, const char* na, int y)
//{
//    if (currentNumber == n)
//    {
//        cout << "藏书空间已满" << endl;
//        return false;
//    }
//    else
//    {
//        booklist[currentNumber++].changeInfo(isbn, na, y);
//        cout << "添加成功！" << endl;
//        return true;
//    }
//}
//bool miniLibrary::changeBookInfo(int i, int isbn, const char* na, int y)
//{
//    if (i > n)
//    {
//        cout << "没有这本书！" << endl;
//        return false;
//    }
//    else
//    {
//        booklist[i - 1].changeInfo(isbn, na, y);
//        return true;
//    }
//}
//bool miniLibrary::printInfo(int i)const
//{
//    if (i > n)
//    {
//        cout << "没有这本书！" << endl;
//        return false;
//    }
//    else
//    {
//        cout << "第" << i << "本书的信息如下:" << endl;
//        booklist[i - 1].printInfo();
//        return true;
//    }
//}
////下面的main用来测试以上两个类型
//int main()
//{
//
//    miniLibrary Lb(3);
//
//    Lb.addBook(1001, "C++", 2018);
//
//    Lb.addBook(1002, "Math", 2020);
//
//    Lb.addBook(1003, "Physics", 2021);
//    Lb.changeBookInfo(3, 1003,"C++真滴难", 2022);
//    Lb.changeBookInfo(4, 1004, "English", 2000);
//    Lb.printInfo(3);
//    Lb.printInfo(2);
//    Lb.printInfo(5);
//    return 0;
//
//}
//
