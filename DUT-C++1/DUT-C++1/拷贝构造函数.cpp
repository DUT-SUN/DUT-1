//#define _CRT_SECURE_NO_WARNINGS 1

//
//ͨ��ʹ����һ��ͬ���͵Ķ�������ʼ���´����Ķ���
//
//���ƶ��������Ϊ�������ݸ�������
//
//���ƶ��󣬲��Ӻ��������������

//classname(const classname& obj) {
//	// ���캯��������
//}

//#include <iostream>
//
//using namespace std;
//
//class Line
//{
//public:
//    int getLength(void);
//    Line(int len);             // �򵥵Ĺ��캯��
//    Line(const Line& obj);      // �������캯��
//    ~Line();                     // ��������
//
//private:
//    int* ptr;
//};
//
//// ��Ա�������壬�������캯��
//Line::Line(int len)
//{
//    cout << "���ù��캯��" << endl;
//    // Ϊָ������ڴ�
//    ptr = new int;
//    *ptr = len;
//}
//
//Line::Line(const Line& obj)
//{
//    cout << "���ÿ������캯����Ϊָ�� ptr �����ڴ�" << endl;
//    ptr = new int;
//    *ptr = *obj.ptr; // ����ֵ
//}
//
//Line::~Line(void)
//{
//    cout << "�ͷ��ڴ�" << endl;
//    delete ptr;
//}
//int Line::getLength(void)
//{
//    return *ptr;
//}
//
//void display(Line obj)
//{
//    cout << "line ��С : " << obj.getLength() << endl;
//}
//
//// �����������
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
//    Line(int len);             // �򵥵Ĺ��캯��
//    Line(const Line& obj);      // �������캯��
//    ~Line();                     // ��������
//
//private:
//    int* ptr;
//};
//
//// ��Ա�������壬�������캯��
//Line::Line(int len)
//{
//    cout << "���ù��캯��" << endl;
//    // Ϊָ������ڴ�
//    ptr = new int;
//    *ptr = len;
//}
//
//Line::Line(const Line& obj)
//{
//    cout << "���ÿ������캯����Ϊָ�� ptr �����ڴ�" << endl;
//    ptr = new int;
//    *ptr = *obj.ptr; // ����ֵ
//}
//
//Line::~Line(void)
//{
//    cout << "�ͷ��ڴ�" << endl;
//    delete ptr;
//}
//int Line::getLength(void)
//{
//    return *ptr;
//}
//
//void display(Line obj)
//{
//    cout << "line ��С : " << obj.getLength() << endl;
//}
//
//// �����������
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
//    //���캯��
//    CExample(int b)
//    {
//        a = b;
//        printf("constructor is called\n");
//    }
//    //�������캯��
//    CExample(const CExample& c)
//    {
//        a = c.a;
//        printf("copy constructor is called\n");
//    }
//    //��������
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

//!!!!�������캯���ĵ���ʱ��
//! 1. �������Ĳ���Ϊ��Ķ���ʱ
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
//    g_fun(A);//Ϊʲô��Ҫ�������캯����Ϊ���ഫ��ȥ��ʱ����Ҫ���´���һ����
//    return 0;
//}


//2. �����ķ���ֵ����Ķ���

//#include<iostream>
//using namespace std;
//class CExample
//{
//private:
//    int a;
//public:
//    //���캯��
//    CExample(int b)
//    {
//        a = b;
//        printf("constructor is called\n");
//    }
//    //�������캯��
//    CExample(const CExample& c)
//    {
//        a = c.a;
//        printf("copy constructor is called\n");
//    }
//    //��������
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
// ��g_Fun()����ִ�е�returnʱ����������¼�����Ҫ���裺
//(1). �Ȼ����һ����ʱ�������ͽ�XXXX�ɡ�
//(2). Ȼ����ÿ������캯����temp��ֵ��XXXX�����������������е���CExample XXXX(temp);
//(3). �ں���ִ�е����������temp�ֲ�������
//(4). ��g_fun()ִ�������������XXXX���� 

//3. ������Ҫͨ������һ��������г�ʼ��
//CExample A(100);
//CExample B = A
//����ǳ���������
//1. Ĭ�Ͽ������캯��
//�ܶ�ʱ�������Ƕ���֪���������캯��������£����ݶ���������������ߺ������ض����ܺܺõĽ��У�������Ϊ��������������Զ�����һ���������캯����
// ����ǡ�Ĭ�Ͽ������캯������������캯���ܼ򵥣�
//����ʹ�á��϶��󡱵����ݳ�Ա��ֵ�ԡ��¶��󡱵����ݳ�Աһһ���и�ֵ����һ�����������ʽ��

//Rect::Rect(const Rect& r)
//{
//    width = r.width;
//    height = r.height;
//}
//��Ȼ�����ϴ��벻�����Ǳ�д����������Ϊ�����Զ����ɡ�
//���������Ϊ�����Ϳ��Խ������ĸ������⣬�Ǿʹ��ˣ�����������������һ�δ���
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

//��δ����ǰ����࣬������һ����̬��Ա��Ŀ���ǽ��м��������������У�
//���ȴ�������rect1�������ʱ�Ķ��������Ȼ��ʹ��rect1���Ƴ�����rect2��
//�������ʱ�Ķ��������������⣬��ʱӦ��������������ڣ���ʵ�ʳ�������ʱ��
//����Ķ���1����Ӧ��ֻ��1�����󡣴��⣬�����ٶ���ʱ�����ڻ����������������
//�������������������Σ���ʱ�ļ���������Ϊ������
//˵���ˣ����ǿ������캯��û�д���̬���ݳ�Ա��
//������Щ����������������ڸ��ƶ���ʱ��������û�е������������±�д�������캯�������£�

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

//2. ǳ����
//��νǳ������ָ�����ڶ�����ʱ��ֻ�Զ����е����ݳ�Ա���м򵥵ĸ�ֵ��
//Ĭ�Ͽ������캯��ִ�е�Ҳ��ǳ�������������¡�ǳ�������Ѿ��ܺܺõع����ˣ�
//����һ����������˶�̬��Ա����ôǳ�����ͻ�������ˣ������ǿ�������һ�δ��룺
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
//����δ������н���֮ǰ�������һ�����д���ԭ��������ڽ��ж�����ʱ��
//���ڶ�̬���������û�н�����ȷ�Ĳ���������������һ�£�
//�����ж���rect1����������ڹ��캯������һ����̬�������䣬���ִ�к���ڴ�����������£�
//ͼƬ����ǳ�����ļ�����
//��Ȼ���ⲻ�������������Ľ���������ٶ���ʱ�����������������������ͬһ���ڴ�ռ��ͷ����Σ�����Ǵ�����ֵ�ԭ��
//������Ҫ�Ĳ�������p����ͬ��ֵ����������pָ��Ŀռ�����ͬ��ֵ������취����ʹ�á��������

//3. ���
//
//�ڡ������������£����ڶ����ж�̬��Ա���Ͳ��ܽ����򵥵ظ�ֵ�ˣ�
//��Ӧ�����¶�̬����ռ䣬����������Ӿ�Ӧ�ð������µķ�ʽ���д���

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

//��ʱ������ɶ���ĸ��ƺ��ڴ��һ������������£�
//ͼƬ����ǳ����pdf

//3. ��ֹĬ�Ͽ�������
//ͨ���Զ����Ƶķ��������Ƿ��ֶ���ĸ��ƴ���ڽ��С�ֵ���ݡ�ʱ������
//������һ��С���ɿ��Է�ֹ��ֵ���ݡ�������һ��˽�п������캯������������ȥ��������������캯����
//������Ϊ�������캯����˽�еģ�����û���ͼ��ֵ���ݻ������ظ�����󣬽��õ�һ���������
//�Ӷ����Ա��ⰴֵ���ݻ򷵻ض���
//
//
////��ֹ��ֵ����
//class CExample
//{
//private:
//    int a;
//
//public:
//    //���캯��
//    CExample(int b)
//    {
//        a = b;
//        cout << "creat: " << a << endl;
//    }
//
//private:
//    //�������캯����ֻ������
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
//    //g_Fun(test);   //��ֵ���ݽ�����
//
//    return 0;
//}