//#define _CRT_SECURE_NO_WARNINGS 1
////����������ʵ�֡����������ı���ʽ�����ı����У����������н����ͼ��
////����˵����Book��3����Ա�����У�
////�����ChangeInfo�����ֱ���15�֣�printInfo10�֣�
////��40�֣�miniLibrary��4����Ա�����ֱ���15�֣���60��
//#include <iostream>
//#include <cstring>
//using namespace std;
////�����������ʾ��дһ��С��ͼ��ݵĹ������
////֪ʶ�㣺�����Ϲ�ϵ
////���������µ�����ǽ������Ŀǰ��֪ʶ�㣬���ʵ����͸��Ӷȣ���ʵ��ͼ��ݵĹ��������в��
//class Book
//
//{
//
//private:
//    int isbn;//isbn����
//    char bookname[20];//����
//    int year;//������
//    
//public:
//    //�������캯������,���������ֱ��� isbn�š�������������
//    Book(int isbn = 0, const char* na = "no name", int y = 2022);
//    void printInfo()const; //�����Ļ�����Ϣ
//    void changeInfo(int isbn, const char* na, int y);//�޸���š�������������
//};
//Book::Book(int isbn, const char* na, int y)
//{
//    this->isbn = isbn;
//    strcpy(bookname, na);
//    year = y;
//}
//void Book::printInfo()const
//{
//    cout << "isbn����:" << isbn << endl;
//    cout << "����:" << bookname << endl;
//    cout << "������:" << year << endl;
//}
//void Book::changeInfo(int isbn, const char* na, int y)
//{
//    this->isbn = isbn;
//    strcpy(bookname, na);
//    year == y;
//}
//// ����ͨ�������main�Ȳ���һ��Book�ඨ���Ƿ���ȷ��������и�main�������Ƚ������ע�͵�
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
//class miniLibrary//С��ͼ���
//{
//private:
//    Book* booklist; //ͼ��ݵ��ղص��������
//    const int n;//ͼ��ݵĲ��������������
//    int currentNumber;//ʵ�ʴ洢������������ ͼ������10��������ʵ�ʴ洢��3��
//public:
//    //���캯����sn��ʾͼ����ղص��������������sn��book�Ĵ洢�ռ�
//    //���ǣ���ʼ��ʱ��currentNumber=0������ʵ���鼮0��
//    miniLibrary(int sn = 10);
//    //����1��book�����ͼ���û��������Ϊ��currentNumber�����룬ͬʱcurrentNumber++������true
//    //���򷵻�false
//    bool addBook(int isbn, const char* na, int y);
//    //�޸ĵ�i��(�����0��1��2 ������������Ϣ�����i���������޸ģ�����true�����򷵻�false
//    bool changeBookInfo(int i, int isbn, const char* na, int y);
//    //��ʾ��i(i>=0 ���� i<currentNumber)������Ϣ,���i����ȷ���������û���Ȿ�顱�����ҷ���false
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
//        cout << "����ռ�����" << endl;
//        return false;
//    }
//    else
//    {
//        booklist[currentNumber++].changeInfo(isbn, na, y);
//        cout << "��ӳɹ���" << endl;
//        return true;
//    }
//}
//bool miniLibrary::changeBookInfo(int i, int isbn, const char* na, int y)
//{
//    if (i > n)
//    {
//        cout << "û���Ȿ�飡" << endl;
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
//        cout << "û���Ȿ�飡" << endl;
//        return false;
//    }
//    else
//    {
//        cout << "��" << i << "�������Ϣ����:" << endl;
//        booklist[i - 1].printInfo();
//        return true;
//    }
//}
////�����main��������������������
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
//    Lb.changeBookInfo(3, 1003,"C++�����", 2022);
//    Lb.changeBookInfo(4, 1004, "English", 2000);
//    Lb.printInfo(3);
//    Lb.printInfo(2);
//    Lb.printInfo(5);
//    return 0;
//
//}
//
