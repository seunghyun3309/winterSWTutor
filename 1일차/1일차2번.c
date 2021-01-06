#include <stdio.h>

// 2번 문제
int main()
{
	char	a = 'A';
	int		b = 10;
	float	c = 10.5f;
	double	d = 10.7;
	printf("\t### 변경 전 ###\n");
	printf("a : %c, b : %d, c: %.2f, d:%.2f\n", a, b, c, d);

	void* vp = &a;
	*(char *)vp += 1;
	vp = &b;
	*(int *)vp += 1;
	vp = &c;
	*(float *)vp += 1;
	vp = &d;
	*(double *)vp += 1;

	printf("\t### 변경 후 ###\n");
	printf("a : %c, b : %d, c: %.2f, d:%.2f\n", a, b, c, d);
}