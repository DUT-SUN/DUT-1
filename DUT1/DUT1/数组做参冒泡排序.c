////冒泡排序
////10 9 8 7 6 5 4 3 2 1两两相邻的元素进行比较然后交换位置，一趟冒泡排序可以让一个最大的来到最后，执行9次即可
//void bubble_sort(int arr[], int sz)//因为函数内部无法算出数组元素个数所以在外面算好传进去就行
//{
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j;
//		for (j = 0; j < sz - 1 - i; j++)//进行一轮冒泡排序后就少排一个，所以用i来每轮减1
//		{
//			int flag = 1;
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//			if (flag == 1)//其实这个flag不加也能运行，但是可以避免没必要的运算，刚开始定义flag=1，看
//				//flag有没有改变，改变就是不完全有序，直到不改变意味着已经有序，就可以跳出循环
//			{
//				break;
//			}
//		}
//	}
//}
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr1[] = { 0,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	bubble_sort(arr1, sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0;
//}//如果打印*arr那么输出为1
////数组名就是首元素地址，有2个例外
////sizeof(arr)中的数组名代表整个数组单位是字节和取地址数组名也是整个数组
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);//为什么加一呢是为了验证这&arr取的是整个数组的地址
//	//（如果不加一他们3个输出的都是第一元素的地址）
//	//加完一后你会发现&arr的地址加了16进制的7（元素个数）x4（整形）而其他的只是加了4，加一后代表数组的指向
//	//从第一个位置移向了最后一个
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}