#include <stdio.h>
#include <math.h>

double roundTwo(double num)
{

	return round(num * 100) / 100;
}

void main()
{
	double n;
	printf("양의 부동소수점을 입력하세요.");
	scanf("%lf", &n);

	printf("반올림 결과 : %lf", roundTwo(n));
}