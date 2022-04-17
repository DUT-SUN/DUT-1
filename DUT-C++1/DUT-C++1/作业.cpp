//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, n = 3;
//	int** arr_matrix = new int* [n];
//	for (i = 0; i < n; i++) arr_matrix[i] = new int[n];
//	cout << "每行输3个输入3行" << endl;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cin >> arr_matrix[i][j];
//		}
//	}
//
//	int sum = 0;
//	int max = arr_matrix[0][0];
//	int min = arr_matrix[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			sum += arr_matrix[i][j];
//			if (arr_matrix[i][j] > max)
//			{
//				max = arr_matrix[i][j];
//			}
//			if (arr_matrix[i][j] < min)
//			{
//				min = arr_matrix[i][j];
//			}
//		}
//	}
//	cout << "总和为" << sum << "最小值为" << min << "最大值" << max;
//
//
//	for (i = 0; i < n; i++)
//		delete[] arr_matrix[i];
//	delete[] arr_matrix;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int count = 0;
//	for (int i =0; i <= 100 / 5; i++)
//	{
//		for (int j = 0; j <= 100 / 2; j++)
//		{
//			for (int k = 0; k <= 100; k++)
//			{
//				if (i * 5 + j * 2 + k == 100)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	cout << "换法数为" << count;
//}

//#include<iostream>
//using namespace std;
//void swap(int& a, int& b)
//{
//	int c;
//    c = a;
//	a = b;
//	b = c;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	swap(a, b);
//	cout << a<<' ' << b;
//}

//#include<iostream>
//#include<stdlib.h>
//#define NUM 10000
//using namespace std;
//double math(int n)   //统计方法得出概率
//{
//    double x = 1.0;
//    for (int i = 1; i <= n; i++)
//    {
//        x *= (365 - i) / 365.0;
//    }
//    return x;
//}
//bool func(int* stu, int n)//判断一组数据是否存在相同的数
//{
//    int i, j;
//    for (i = 0; i < n - 1; i++)
//        for (j = i + 1; j < n; j++)
//        {
//            if (stu[i] == stu[j])
//                return true;
//        }
//    return false;
//}
//void model(int n) 
//{
//    int  i, j, *arr;
//    double probabilit;//仿真的概率
//    srand((unsigned int)time(NULL));
//
//    int count = 0;	 
//   arr = new int[n];	
//    for (i = 0; i < NUM; i++)
//    {
//        for (j = 0; j < n; j++)
//            arr[j] = rand() % 366 + 1;
//
//        if (func(arr, n))	
//            count++;	
//    }
//    probabilit = (double)count / NUM;
//    cout <<"仿真概率为:"<<1 - probabilit << endl;
//}
//int main()
//{
//    int n;
//    double m;
//    cout << "人数为：";
//    cin >> n;
//    m = math(n);
//    model(n);
//    cout <<"数学概率为："<<m << endl;
//    return 0;
//}
//
//
//
