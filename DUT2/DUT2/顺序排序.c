//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>//ͷ�ļ�
//int main()//������
//{
//    int i, j, min, temp, array[11];//�������ͱ���������
//    printf("�������ݣ�\n");//��ʾ���
//    for (i = 1; i <= 10; i++)//���μ���¼��10������
//    {
//        printf("array[%d]=", i - 1);//�����±��0��ʼ
//        scanf("%d", &array[i]);
//    }
//    printf("\n");//����
//    printf("ԭ�������\n");//��ʾ���
//    for (i = 1; i <= 10; i++)//������¼���10����ԭ�����
//    {
//        printf("%5d", array[i]);
//    }
//    printf("\n");//����
//    for (i = 1; i <= 9; i++)
//    {
//        min = i;//�ѵ�һ������Ϊ��С��
//        for (j = i + 1; j <= 10; j++)
//        {
//            if (array[min] > array[j])//�жϴ�С��С��Ϊmin
//            {
//                min = j;
//            }
//        }
//        temp = array[i]; //��С����
//        array[i] = array[min];
//        array[min] = temp;
//    }
//    printf("���������\n");//��ʾ���
//    for (i = 1; i <= 10; i++)//���������10����
//    {
//        printf("%5d", array[i]);
//    }
//    printf("\n");//����
//    return 0;//����������ֵΪ0
//}
