//����һ������-�������10��int arr[10]ע�⣡�������������n=10��Ȼ���n����[]�ڻᱨ����������ֻ�ܷų������ʽ
//�����ڴ�����ʱ���������ָ�������ȷ���Ĵ�С�͵ó�ʼ���������Ԫ�ظ������ݳ�ʼ����������ȷ����
//#include<stdio.h>
//#include<string.h>
//	int main()
//	{
//		int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//		char arr1[5] = { 'a','b' }; //ͬ����ʣ�µĳ�ʼ��Ϊ\0
//		char arr2[5] = { 'ab' };//ע������Ҳ�Ǻ����漸����ͬ�������a��b��\0��������������ᷢ��arr1��arr2һ������ʵ����Ϊ����λ\0��Ĭ�ϳ�ʼ��0��ֵһ��
//		char arr3[5] = { 97,98 };//Ҳ�ǿ��Ե�������ת��Ϊa��b
//		char arr4[] = "abcdef";//7���ַ�����\0
//		printf("%d", sizeof(arr4));//7
//		printf("%d", strlen(arr4));//6
//		return 0;
//	}
	////ע��㣡��������������
//#include<stdio.h>
//#include<string.h>
//	int main()
//	{
//		char arr1[] = "abc";
//		char arr2[] =  { 'a', 'b','c'};
//		printf("%d\n", sizeof(arr1));//4
//		printf("%d\n", sizeof(arr2));//3
//		printf("%d\n", strlen(arr1));//3
//		printf("%d\n", strlen(arr2));//���ֵ
//		return 0;
//	}
//һά����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	for (int i = 0;i < strlen(arr); i++)//strlen���ص����޷��ŵ�����vs�������в��ᱨ���棬
//		//���Խ���ǿ������ת��������һ���������������ֵ���ٰ���������Ż�ȥ����
//		printf("%c", arr[i]);
//	return 0;
//}
////һά�������ڴ��еĴ洢
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//		printf("&arr[%d]=%p\n",i, &arr[i]);//��ӡ������ַ����ᷢ��a048�����ĺ�׺��˵�����������Ǹ��������ٵĿռ�
//	//��Ϊÿ��������4���ֽڣ����ǵĵ�ַ16������ʵ���Ҳ��4���Ծ���
//	return 0;
//}
////��ά����Ĵ���
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int arr1[3][4] = { {1,2,3},{4,5} };//�е��±���п��ޣ������б����У������2������1����ô�ᱨ��˵���ʼ��̫��
//
//	return 0;
//}
////��ά�����ʹ��
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��ӡ��ά�����ַ����ά������ʵ������
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
//		}
//	
//	}
//	return 0;
//}
//
