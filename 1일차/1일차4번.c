#include <stdio.h>

// 4번 문제
int getSum(int num1, int num2, int num3);
double getAvg(int sum, int count);

int main()
{
	int num1, num2, num3, sum;
	double avg;

	printf("세 과목의 점수를 입력하세요 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	sum = getSum(num1, num2, num3);
	avg = getAvg(sum, 3);
	printf("총점 : %d, 평균 : %.2f", sum, avg);
	return 0;
}
int getSum(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}

double getAvg(int sum, int count)
{
	return (double)sum / count;
}