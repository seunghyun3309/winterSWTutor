#include <stdio.h>

// 4�� ����
int getSum(int num1, int num2, int num3);
double getAvg(int sum, int count);

int main()
{
	int num1, num2, num3, sum;
	double avg;

	printf("�� ������ ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	sum = getSum(num1, num2, num3);
	avg = getAvg(sum, 3);
	printf("���� : %d, ��� : %.2f", sum, avg);
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