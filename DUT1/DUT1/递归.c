////�����������ı�̼��ɳ�Ϊ�ݹ�,�ݹ鳣������ջ�����stack overflow��
////�ڴ��Ϊջ�����žֲ����������βΣ��������Ŷ�̬���ٵ��ڴ�malloc calloc��
////���о�̬����ȫ�ֱ�����static���εı�����
//#include<stdio.h>
//int main()
//{
//printf("hehe\n");
//main();
//return 0;
//}//��ô����main����һֱ���������ô�����ͻὫջ��ռ�����ͻ���ֱ���
//#include<stdio.h>//�������
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//do
//	{
//		printf("%d", num%10);
//		num = num / 10;
//} while (num!= 0);
//
//
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	
//
//	}
//	printf("%d ", n % 10);
//}
//#include < stdio.h>
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	return 0;
//}
//��Ŀ���ܴ�����ʱ������������ַ������ȣ��������ʹ������ʱ����count��
//int my_strlen(char *str)//1
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		(*str)++;
//	}
//	return count;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int my_strlen(char* str)//2
//{
//	if (*str != '\0')
//	{
//		return 	1 + my_strlen(str + 1);
//
//	}
//	else
//		return 0;
//
//
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	
//} 
////��n�Ľײ㣨�ݹ飩
//
//#include<stdio.h>//ѭ��
//int main()
//{
//	int ret = 1;
//	int n;
//	scanf_s("%d",& n);
//	for (int i = 1; i <= n; i++)
//		ret *= i;
//	printf("%d", ret);
//
//	return 0;
//}
//int fac(int n)//(�ݹ�)��ûдȫ��
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//

//��쳲��������еĵ�n��ֵ
//1 1 2 3 5 8 13 21 34
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret =fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int FIB(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = a + b;
//	/*for (int i = 3; i < n; i++)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}//��д�ģ�����������ΪʲôҪд�أ���Ϊ�õݹ����㼰�为�𣬹��ǵ���n=3�����͵�����ǧ��Σ��ɴ�ӡ֤����
//	return c;*/
//	while(n > 2)
//	{
//	c = a + b;
//	a = b;
//	b = c;
//	n--;//��ʦд�ģ���д������
//}
//	return c;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int nb = FIB(n);
//	printf("%d", nb);
//	return 0;
//}
//��ŵ�������������̨�ף�1����һ��̨��Ҳ����һ����2��̨�ף�������n��̨���ж���������������ָoffer��
