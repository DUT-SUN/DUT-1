//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class Date
//{
//private:
//	int year;
//	int month;
//	int day;
//public:
//
//	Date(int x, int y, int z);
//	Date(Date&x);
//	bool set();
//	void print_time();
//	int datetoday();
//	bool run();
//};
//Date::Date(int x=2019, int y=8, int z=28)
//{
//	year = x;
//	month = y;
//	day = z;
//}
//Date::Date(Date& x)
//{
//	year = x.year;
//	month = x.month;
//	day = x.day;
//}
//
//bool Date::run()
//{
//
//			if (year % 4 == 0 && year % 100 != 0)
//			{
//				return true;
//			}
//			else if (year % 400 == 0)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//}
//bool Date::set()
//{
//	if (year >= 0 && year <= 2050)
//	{
//		if (month >= 1 && month <= 12)
//		{
//			
//			if (Date::run())
//			{
//				
//				int*  arr = new int[12]{ 31,29,31,30,31,30,31,31,30,31,30,31 };
//
//				if (day > 0 && day <= arr[month - 1])
//				{
//
//					delete[]arr;
//					return true;
//
//				}
//				else
//				{
//
//					delete[]arr;
//					return false;
//
//				}
//			}
//			else
//			{
//			
//				int* arr = new int[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//				if (day > 0 && day <= arr[month - 1])
//				{
//
//					delete[]arr;
//					return true;
//				}
//				else
//				{
//
//					delete[]arr;
//					return false;
//
//				}
//			}
//		}
//		else
//		{
//			return false;
//		}
//	}
//	else
//	{
//		return false;
//	}
//
//}
//void Date::print_time()
//{
//	cout << month << '/' << day << '/' << year << endl;
//}
//int Date::datetoday()
//{
//	int sum = 0;
//	if (Date::run())
//	{
//		int* arr = new int[12]{ 31,29,31,30,31,30,31,31,30,31,30,31 };
//		for (int i = 0; i < month-1; i++)
//		{
//			sum += arr[i];
//		}
//		sum += day;
//		return sum;
//		delete[]arr;
//	}
//	else
//	{
//		int* arr = new int[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
//		for (int i = 0; i < month - 1; i++)
//		{
//			sum += arr[i];
//		}
//		sum += day;
//		return sum;
//		delete[]arr;
//	}
//}
//int main()
//{
//	Date date1(1,1,1);
//	if (date1.set())
//	{
//		date1.print_time();
//		cout << date1.datetoday() << endl;
//	}
//	else
//	{
//		cout << "日期无效" << endl;
//	}
//}