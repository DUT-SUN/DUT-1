//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////ʲô���ļ��������ϵ��ļ������ļ�
////����̸���ļ���2�ֳ����ļ��������ļ�.c.h���ǳ����ļ������ļ��ܲ��������ļ�
////.obg�ļ���Ŀ���ļ�Ҳ�ǳ����ļ�.exe��ִ�г���Ҳ��
////�������ǽ���Ϣ���뵽�����У���Ҫ��ʱ���ȡ���ڴ���ȥ
//
////�ļ�������3�����֣��ļ�·�����ļ�������+�ļ���׺
////����c:\code\test.txt
////�ı��ļ��Ͷ������ļ�
////�������ڴ��Զ�������ʽ�洢������ת������������Ƕ������ļ�
////���Ҫ�������ASCII��洢����Ҫ�ڴ洢ǰת����ascii��ʽ�洢�ľ����ı��ļ�
////һ���������ڴ�����ô�洢�أ�
////�ַ�һ��ASCII�洢����ֵ�����ݿ�����ascii��ʽ�洢Ҳ�����ö�������ʽ�洢
////��������10000 �����ascii��ʽ��������̣������ռ��5���ֽڣ�ÿһ���ֽ�һ���ַ���
////����������Ļ�������ռ4���ֽ�
// 
////int main()
////{
////	int a = 10000;
////	FILE* pf = fopen("test.txt", "wb");//w��дb�Ƕ�������ʽ
////	fwrite(&a, 4, 1, pf);//pf���ļ�ָ����������ṹ������鿴����
////	fclose(pf);
////	pf = NULL;
////	//00 00 27 10���к��txt�ļ����������16���ƾ���10000
////	return 0;
////}
////�ļ���������ϵͳ�Զ�Ϊ����ʹ�õ��ļ�����һ���ļ������������ڴ������������ݻ����͵��ڴ��е�
////������װ�����������������һ���δ������ϣ���������������������ݣ���Ӵ����ļ���ȡ���ݵ�
////�ڴ滺����������Ȼ���͵�������������������С��c����ϵͳ����
//
//
////�ļ�ָ��
////����fopen���ļ������򿪷�ʽ������򿪷�ʽ����д���ͻᴴ��һ���µ��ļ���û���ļ�Ҳ�����У���Ϊ
////�������ļ���������������ԭ�����ļ�д�Ķ�����û�ˣ����׷����a��û��
////��Ϊ��һ���ܴ��ļ��������Ҳ�������ô���ؿյ�ʱ���ӡstrerror��errno��ͷ�ļ�
////��string.h��error.h
////fgeticһ�ζ�ȡһ���ַ�
////���̡�����׼�����豸stdin
////��Ļ������׼����豸stdout
////Ĭ�ϴ�3����
////stdin
////stdout���Ƕ���FILE*����
////stderr
////#include<stdio.h>
////int main()
////{
////	int ch = fgetc(stdin);//�Ӽ��̶�,Ҳ���Դ��ļ����ļ�ָ��FILE*
////	fputc(ch, stdout);//��Ļ���
////	return 0;
////}
////#include<stdio.h>
////#include<errno.h>
////#include<string.h>
////int main()
////{
////	FILE* pf = fopen("test.txt1", "r");
////	if (pf == NULL)
////	{
////		printf("%s\n", strerror(errno));
////	}
////	fgetc(pf);
////	fputc(pf, stdout);
////}
////#include<stdio.h>
////
////int main()
////{
////
////	FILE* pf = fopen("test1.txt", "w");
////	char a[20] = "abcdef";
////	fputs(a, pf);
////	fclose(pf);
////	FILE* x = fopen("test1.txt", "r");
////	char b[20];
////	 printf("%s",fgets(b, 6, pf));
////	return 0;
////}
//#include<stdio.h>
//#include<errno.h>
//#include<string.h>
//struct student
//{
//	char name[20];
//	int age;
//}stu[5] = { {"nb",1 } ,{"diaomao",2},{"c",3},{"d",4},{"niuma",5}};
//int main()
//{
//	FILE* fp = fopen("fuck.txt", "w");
//	if(fp==NULL)
//		printf("%s\n", strerror(errno));
//	fwrite(stu, sizeof(struct student), 5, fp);
//	struct student stu1[5];
//	fclose(fp);
//	fp = fopen("fuck.txt", "r");
//	fread(stu1, sizeof(struct student), 5, fp);
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//
//		printf("%s %d\n", stu1[i].name, stu1[i].age);
//	}
//	return 0;
//}