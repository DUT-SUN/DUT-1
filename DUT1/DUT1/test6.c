//#include<stdio.h>
//int main()
//{
//	int iNum, iGrade,
//		iCounter = 0;
//	float fAverage = 0; float fSum = 0;
//	float fNum;
//	printf("�������ѡ�޿γ���Ŀ��\n");
//	scanf_s("%d", &iNum);
//	if (iNum < 3)
//	{
//		printf("����");
//	}
//	else
//	{
//		do
//		{
//			printf("�������ѡ�޿γ̵�ѧ�ֺ͵÷�:");
//			scanf_s("%f,%d", &fNum, &iGrade);
//			fSum += fNum;
//
//			fAverage += fNum * iGrade;
//			++iCounter;
//		} while (iCounter < iNum);
//		printf("�����ѧ�֣�%f\n", fSum);
//		fAverage /= fSum;
//		printf("���ƽ���֣�%f\n", fAverage);
//		if (fSum >= 8)
//		{
//			printf("ѧ�ִ��\n");
//		}
//		else
//		{
//			printf("ѧ��δ���\n");
//		}
//
//		return 0;
//
//	}
//}