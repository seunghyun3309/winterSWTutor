#include <stdio.h>

// 2�� ����
int main()
{
	char	a = 'A';
	int		b = 10;
	float	c = 10.5f;
	double	d = 10.7;
	printf("\t### ���� �� ###\n");
	printf("a : %c, b : %d, c: %.2f, d:%.2f\n", a, b, c, d);

	void* vp = &a;
	*(char *)vp += 1;
	vp = &b;
	*(int *)vp += 1;
	vp = &c;
	*(float *)vp += 1;
	vp = &d;
	*(double *)vp += 1;

	printf("\t### ���� �� ###\n");
	printf("a : %c, b : %d, c: %.2f, d:%.2f\n", a, b, c, d);
}