//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
////void my_strcpy(char* dest, char* src)
////{
////	while(*src!='\0')
////	{
////		*dest = *src;
////		src++;
////		dest++;
////	}
////	*dest = *src;
////}
////void my_strcpy(char* dest, char* src)//1���Ż���Ĵ��룬��src��\0��ʱ�����0���ѭ���ͽ���ȥ�ˡ�
////{
////	while (*dest++=*src++)
////	{
////		;
////	}
////}
////void my_strcpy(char* dest, char* src)//1���Ż���Ĵ��룬��src��\0��ʱ�����0���ѭ���ͽ���ȥ�ˡ�
////{
////	if (dest != NULL&&src!=NULL)//��ֹ�����ָ��
////	{
////		while (*dest++ = *src++)
////		{
////			;
////		}
////	}
////}
////void my_strcpy(char* dest, char* src)//1���Ż���Ĵ��룬��src��\0��ʱ�����0���ѭ���ͽ���ȥ�ˡ�
////{
////	assert(dest != NULL);//8�ִ���
////	assert(src != NULL);//�������к����������src�ǿ�ָ��ͻᱨ��������ʾ����λ�ã���Ҫ��ͷ�ļ�
////	//�����ҵ�����
////	
////		while (*dest++ = *src++)
////		{
////			;
////		}
////	
////}
//char* my_strcpy(char* dest,const char* src)//���constΪ�˷�ֹwhile���д������ָ������������ͻ���ʾ���������Ͳ�����ֿ���ʧ�ܣ����ǳ������гɹ�
////2���Ż���Ĵ��룬��src��\0��ʱ�����0���ѭ���ͽ���ȥ�ˡ�
//{
//		assert(dest != NULL);//8�ִ���
//		assert(src != NULL);//�������к����������src�ǿ�ָ��ͻᱨ��������ʾ����λ�ã���Ҫ��ͷ�ļ�
//		char*ret = dest;
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʵ�ɺ��滹��#�ţ���������\0��������ȥ�����Դ�ӡ���������
//		return 0;
//}//��������ִ���
////����:
////int main()
////{
////	const int num = 10;//!!!ע�����Ǽ��������const������˵�ǲ��ܸĵĿ������������Ȼ���Ըı�num��ֵ
////	 int* p = &num;//ͨ�������intǰ��Ӹ�const�����Ͳ��ܸı��˻ᱨ��
////	*p = 20;//err const����ָ��������Ǻ����ʱ���ε���*p����ͨ��p���ı�*p��ֵ
////	          //�������*�������const���ε���p��p���ܸı䡣
////	printf("%d\n", num);
////
////	return 0;
////}
