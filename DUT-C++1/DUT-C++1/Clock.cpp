//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class Clock
//{
//private:
//    int hour, minute, second;
//public:
//    Clock(int h, int m, int s);
//    void setClock(int h, int m, int s);
//    void showClock();
//    //void test(Clock another );
//    Clock(const Clock& A);
//};
//
////void Clock::test(Clock another)
////{
////    another.setClock(2, 2, 2);
////    another.showClock();
////}
//Clock::Clock(int h = 0, int m = 0, int s = 0)
//{
//    setClock(h, m, s);
//    cout << "创建construct1" << endl;
//}
//void Clock::setClock(int h, int m, int s) {
//    hour = h;
//    minute = m;
//    second = s;
//}
//void Clock::showClock() {
//    cout << hour << ":" << minute << ":" << second << endl;
//}
//Clock::Clock(const Clock& A)
//{
//    cout << "创建construct2" << endl;
//    hour = A.hour;
//    minute = A.minute;
//    second = A.second;
//}
//
//int main() {
//
//  /*  Clock* p = new Clock;
//    c1.setClock(9, 34, 0);
//    c1.showClock();
//    p->showClock();
//    p = &c1;
//    p->setClock(10, 11, 12);
//    p->showClock();
//    Clock& c3 = c1;
//    c3.setClock(13, 14, 50);
//    c3.showClock();*/
//    Clock c2(1, 1, 1);
//    Clock c1(c2);
//    c1.showClock();
//    return 0;
//}
