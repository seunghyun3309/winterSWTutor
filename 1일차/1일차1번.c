#include <stdio.h>

// 1번 문제
int main()
{
	char	a = 'A';
	int		b = 10;
	float	c = 10.5f;
	double	d = 10.7;

	char*	pa = &a;
	int*	pb = &b;
	float* pc = &c;
	double* pd = &d;

	printf("\t### 변경 전 ###\n");
	printf("a : %c, b : %d, c: %.2f, d:%.2f\n", a, b, c, d);
	*pa += 1;
	*pb += 1;
	*pc += 1;
	*pd += 1;
	printf("\t### 변경 후 ###\n");
	printf("a : %c, b : %d, c: %.2f, d:%.2f\n", a, b, c, d);

	return 0;
}