//#include<stdio.h>
//int main()
//{
//	int iNum, iGrade,
//		iCounter = 0;
//	float fAverage = 0; float fSum = 0;
//	float fNum;
//	printf("输入你的选修课程数目：\n");
//	scanf_s("%d", &iNum);
//	if (iNum < 3)
//	{
//		printf("错误！");
//	}
//	else
//	{
//		do
//		{
//			printf("输入你的选修课程的学分和得分:");
//			scanf_s("%f,%d", &fNum, &iGrade);
//			fSum += fNum;
//
//			fAverage += fNum * iGrade;
//			++iCounter;
//		} while (iCounter < iNum);
//		printf("你的总学分：%f\n", fSum);
//		fAverage /= fSum;
//		printf("你的平均分：%f\n", fAverage);
//		if (fSum >= 8)
//		{
//			printf("学分达标\n");
//		}
//		else
//		{
//			printf("学分未达标\n");
//		}
//
//		return 0;
//
//	}
//}