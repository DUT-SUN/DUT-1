//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void main(int argc, char* argv[]) //�����в���
//{
//    int ch;//�����ļ�����ָ��
//    FILE* fp;//�ж��������Ƿ���ȷ
//    if (argc != 2)
//    {
//        printf("Error format,Usage: display filename1\n");
//        return; //�����˴���������У����������ִ��
//    }
//    //������ʽ����argv[1]ָ�����ļ�
//    if ((fp = fopen(argv[1], "r")) == NULL)
//    {
//        printf("The file <%s> can not be opened.\n", argv[1]);//�򿪲������ɹ�
//        return;//���������ִ��
//    }
//    //�ɹ�����argv[1]��ָ�ļ�
//    ch = fgetc(fp); //��fp��ָ�ļ��ĵ�ǰָ��λ�ö�ȡһ���ַ�
//    while (ch != EOF) //�жϸն�ȡ���ַ��Ƿ����ļ�������
//    {
//        putchar(ch); //�����ǽ������������������Ļ����ʾ
//        ch = fgetc(fp); //������fp��ָ�ļ��ж�ȡ��һ���ַ�
//    } //��ɽ�fp��ָ�ļ��������������Ļ����ʾ
//    fclose(fp); //�ر�fp��ָ�ļ�
//}