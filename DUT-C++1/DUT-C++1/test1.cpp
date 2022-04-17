#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class myString

{

private:

    char* pStr;    // 指向存储字符串的空间 new char[size+1]     

    int size;     //包含字符的数目

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

    void set(const char* pn);  // 将字符串设置为pn指向的内容，注意避免越界

    void set(const mySring& rStr);  // 将字符串设置为rStr中的内容，注意避免越界

    void print()const；// 输出字符串整体和长度
    */
    char get(int i)        // 返回字符串中的下标为i的字符，注意i 的有效性
    {
        return pStr[i];
    }
    /*
    void toUpper();   //转化为大写字符串

    bool strcompare(const myString& s);   //比较字符串
    */
};

//参考测试代码如下

int main()

{

    myString s2, s1("Hello");

    cout << s1.get(0) << endl; //输出H
    /*
    s2.print();   //输出“空字符串”，0

    s2.set("Hello world");

    s2.print();  //输出“Hello world”

    s1.toUpper();

    s1.print();  //输出HELLO

    s1.set(s2);

    if (s2.strcompare(s1))
    {
        cout << ""字符串相同"；
    }

    else cout << ""字符串不同"；
    */
    return 0;

}
