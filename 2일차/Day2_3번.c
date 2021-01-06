#include <stdio.h>

#define SIZE 10
int main()
{
	int num[SIZE];

	printf("10개의 배열 원소를 입력하시오!!!\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("arr[%d] : ", i);
		scanf_s("%d", (num + i));
	}
	printf("\n");

	int* pSm = num;
	int* pWalk;
	int* pLast = num + SIZE - 1;

	for (pWalk = num + 1; pWalk <= pLast; pWalk++)
	{
		pSm = *pWalk < *pSm ? pWalk : pSm;
	}

	printf("최솟값 : %d", *pSm);
	return 0;
}