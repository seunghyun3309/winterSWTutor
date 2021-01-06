#include <stdio.h>

#define SIZE 10
double stuSum(double* pArr, int num);
double stuAve(double* pArr, int num);
double stuMax(double* pArr, int num);

int main()
{
	double score[SIZE];
	double sum, avg, max;
	printf(" %d명의 학생 점수를 입력하시오\n\n", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		printf("score[%d] :", i);
		scanf_s("%lf", &score[i]);
	}
	
	sum = stuSum(score, sizeof(score) / sizeof(*score));
	avg = stuAve(score, 10);
	max = stuMax(score, SIZE);

	printf("\n총점 : %.2lf, 평균 : %.2lf, 최댓값 : %.2lf\n", sum, avg, max);
	return 0;
}

double stuSum(double* pArr, int num)
{
	double sum = 0;
	for (int i = 0; i < num; i++)
		sum += *(pArr + i);
	return sum;
}

double stuAve(double* pArr, int num)
{
	double sum = stuSum(pArr, num);
	double ave = sum / num;
	return ave;
}

double stuMax(double* pArr, int num)
{
	double max = *pArr;

	for (int i = 1; i < num; i++)
	{
		if (*(pArr + i) > max)
			max = *(pArr + i);
	}

	return max;
}