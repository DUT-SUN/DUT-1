//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//using namespace std;
//
//class Time
//{
//private:
//	int hour;
//	int minute;
//	int second;
//public:
//	Time(int hour = 0, int minute = 0, int second = 0);
//	void operator +(int x_second);
//	void operator -(int x_second);
//	friend ostream& operator <<(ostream& os, const Time& c);
//	void operator ++(void);
//	void operator --(void);
//};
//Time::Time(int hour, int minute, int second)
//{
//	this->hour = hour;
//	this->minute = minute;
//	this->second = second;
//}
//void Time::operator+(int x_second)
//{
//	second += x_second;
//	x_second = second / 60;
//	if (second >= 60)
//	{
//		second %= 60;
//	}
//	
//	minute += x_second;
//	int x_minute = minute / 60;
//	if (minute >= 60)
//	{
//		minute %= 60;
//	}
//	hour += x_minute;
//	if (hour >= 24)
//	{
//		hour %= 24;
//	}
//
//}
//
//void Time::operator-(int x_second)
//{
//	x_second = -x_second;
//	second = (second+x_second) % 60;
//	if (second < 0)
//	{
//		second += 60;
//		x_second =x_second/ 60 - 1;
//	}
//	else
//	{
//		x_second /= 60;
//	}
//	minute += x_second;//-4
//	int x_minute = minute;
//	if (minute <0)
//	{
//	    x_minute = x_minute / 60 - 1;
//		minute = minute % 60+60;
//	} 
//	else
//	{
//		x_minute = x_minute / 60;
//		minute = minute % 60;
//	}
//	hour += x_minute;
//	if (hour < 0)
//	{
//		hour = hour % 24 + 24;
//	}
//}
//ostream& operator <<(ostream& os, const Time& c)
//{
//	os << c.hour << ':' << c.minute << ':' << c.second;
//	return os;
//}
//void Time::operator ++(void)
//{
//	second++;
//	if (second == 60)
//	{
//		second = 0;
//		minute++;
//		if (minute == 60)
//		{
//			hour++;
//			if (hour == 24)
//				hour = 0;
//		}
//	}
//}
//void Time::operator --(void)
//{
//	second--;
//	if (second == -1)
//	{
//		second = 59;
//		minute--;
//		if (minute == -1)
//		{
//			minute = 59;
//			hour--;
//			if (hour == -1)
//			{
//				hour = 23;
//			}
//		}
//	}
//}
//int main()
//{
//	Time x(23, 0, 0);
//	x + 3600;
//	cout << x << endl;
//	x - 181;
//	cout << x << endl;
//	++x;
//	cout << x << endl;
//	--x;
//	cout << x << endl;
//
//	//while (1)//���Ե���ģ������У�
//	//{
//	//	cout << "ʵʱʱ�䣺";
//	//		cout << x;
//	//	++x;
//	//	Sleep(1000);
// //       system("cls");//�����Ļ
//	//}
//
//}
////1������������� + ���롰 - �����ܹ�ʵ��ʱ�������������ļӼ�������
////
////2������������� << �����ʱ������ܹ����ա�Сʱ�����ӣ��롱�ķ�ʽ��ʾʱ�䡣
////
////3�������������++���롰--����Ҫ���ܹ�ʵ��ʱ��ĺ��������Լ�����(����������)��
//
//
