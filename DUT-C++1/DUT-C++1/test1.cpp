#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class myString

{

private:

    char* pStr;    // ָ��洢�ַ����Ŀռ� new char[size+1]     

    int size;     //�����ַ�����Ŀ

public:

    myString(const char* pn = 0)
    {
        int len = 1, i;
        while (pn[len] != '\0')
        {
            len++;
        }
        len += 2;
        pStr = new char[len];
        for (i = 0; i <= len; i++)
        {
            pStr[i] = pn[i];
        }
    }
    /*
    ~myString();

    void set(const char* pn);  // ���ַ�������Ϊpnָ������ݣ�ע�����Խ��

    void set(const mySring& rStr);  // ���ַ�������ΪrStr�е����ݣ�ע�����Խ��

    void print()const��// ����ַ�������ͳ���
    */
    char get(int i)        // �����ַ����е��±�Ϊi���ַ���ע��i ����Ч��
    {
        return pStr[i];
    }
    /*
    void toUpper();   //ת��Ϊ��д�ַ���

    bool strcompare(const myString& s);   //�Ƚ��ַ���
    */
};

//�ο����Դ�������

int main()

{

    myString s2, s1("Hello");

    cout << s1.get(0) << endl; //���H
    /*
    s2.print();   //��������ַ�������0

    s2.set("Hello world");

    s2.print();  //�����Hello world��

    s1.toUpper();

    s1.print();  //���HELLO

    s1.set(s2);

    if (s2.strcompare(s1))
    {
        cout << ""�ַ�����ͬ"��
    }

    else cout << ""�ַ�����ͬ"��
    */
    return 0;

}
