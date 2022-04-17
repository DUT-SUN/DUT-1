//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//using namespace std;
//template<typename T>
//void bubblesort(T* arr, int n)
//{
//	T temp;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n - 1; j++)
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = temp;
//			}
//		}
//	}
//}
//class Clock
//{
//protected:
//	int hour, minute, second;
//public:
//	Clock(int hour1=0, int minute1=0, int second1=0)
//	{
//		hour = hour1;
//		minute = minute1;
//		second = second1;
//	}
//	bool operator <(Clock& c)
//	{
//		if ((hour - c.hour) * 3600 + (minute - c.minute) * 60 + (second - c.second) < 0)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	void print()
//	{
//		cout << hour << ':' << minute << ':' << second << endl;
//	}
//};
////template<class T>
////T max1(T a, T b)
////{
////	return (a > b) ? a : b;
////}
////template<>const char* max1(const char* s1, const char* s2)
////{
////	return (strcmp(s1, s1) > 0 ? s1 : s2);
////}
//int main()
//{ 
//	int a = 1;
//	int b = 2;
//	//cout << max1(2.3,4.6) << endl;
//	Clock x[4] = { Clock(2,4,1),Clock(2,3,4),Clock(4,5,6),Clock(7,8,9)};
//	bubblesort(x, 4);
//	for (int i = 0; i < 4; i++)
//	{
//		x[i].print();
//	}
//	return 0;
//}