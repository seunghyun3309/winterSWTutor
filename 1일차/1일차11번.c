#include <stdio.h>
#include <math.h>

double roundTwo(double num)
{

	return round(num * 100) / 100;
}

void main()
{
	double n;
	printf("���� �ε��Ҽ����� �Է��ϼ���.");
	scanf("%lf", &n);

	printf("�ݿø� ��� : %lf", roundTwo(n));
}