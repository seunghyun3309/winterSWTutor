#include <stdio.h>

#define SIZE 10

int* MAX(int* pArr, int num);
int* MIN(int* pArr, int num);

int main()
{
	int arr[SIZE];
	int* max, * min;
	printf("배열 원소 %d개를 입력하시오...\n", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		printf("arr[%d] : ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("\n입력 데이터 :\t");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n\n");

	max = MAX(arr, SIZE);
	min = MIN(arr, SIZE);

	printf("최댓값 : %3d, 위치(첨자) : %3d\n", *max, (max-arr));
	printf("최솟값 : %3d, 위치(첨자) : %3d\n", *min, (min-arr));
	return 0;
}

int* MAX(int* pArr, int num)
{
	int* pMax = pArr;
	int tempM = *pArr;
	for (int i = 1; i < num; i++)
	{
		if (*(pArr + i) > tempM)
		{
			pMax = pArr + i;
			tempM = *pMax;
		}
	}

	return pMax;
}

int* MIN(int* pArr, int num)
{
	int* pMin = pArr;
	int tempm = *pArr;
	for (int i = 1; i < num; i++)
	{
		if (*(pArr + i) < tempm)
		{
			pMin = pArr + i;
			tempm = *pMin;
		}
	}

	return pMin;
}