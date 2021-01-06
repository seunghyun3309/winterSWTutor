#include <stdio.h>
#include <time.h>

int f[100010];

int Fibo(int num)
{
	if (num == 1 || num == 2)
	{
		return 1;
	}
	else
	{
		return Fibo(num - 1) + Fibo(num - 2);
	}
}

int Fibonacci(int num)
{
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i <= num; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[num];
}
int main()
{
	int n;
	printf("���° �Ǻ���ġ �������� ����ұ��? : ");
	scanf("%d", &n);
	printf("\n");

	// ���
	time_t start2 = time(NULL);
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		printf("%10d ", Fibo(i));
		cnt++;
		if (cnt % 5 == 0)
			printf("\n");

	}
	time_t end2 = time(NULL);
	double pst2 = difftime(end2, start2);
	printf("%d��° �Ǻ���ġ ���� ��� �ð� : %f ��\n", n, pst2);

	//�����
	time_t start = time(NULL);
	int cnt2 = 0;
	for (int i = 1; i <= n; i++)
	{
		printf("%10d ", Fibonacci(i));
		cnt2++;
		if (cnt2 % 5 == 0)
			printf("\n");

	}
	time_t end = time(NULL);
	double pst = difftime(end, start);
	printf("%d��° �Ǻ���ġ ���� ��� �ð� : %f ��\n", n, pst);


	return 0;
}