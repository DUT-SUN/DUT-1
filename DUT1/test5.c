/*#include<stdio.h>
int main()
{
	int iGrade, iNum,
		iCounter = 0;
	float fAverage = 0,
		fNum, fSum = 0;
	printf("输入选修功课科目：");
	scanf_s("%d", &iNum);
	do
	{
		printf("输入学分和分数：");
		scanf_s("%f,%d", &fNum, &iGrade);
		fSum += fNum;
		fAverage += fNum * iGrade;
		++iCounter;
	} while (iCounter < iNum);
	fAverage /= fSum;
	printf("平均分=%.3f\n", fAverage);
	return 0;




}*/