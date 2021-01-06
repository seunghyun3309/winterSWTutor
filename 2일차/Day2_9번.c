#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
void selectionSort(int* pArr, int num);

int main()
{
	int num[SIZE];
	srand(time(0));

	for (int i = 0; i < SIZE; i++)
	{
		num[i] = rand() % 100 + 1; //임의의 난수 10개 배열에 저장
	}

	printf("정렬 전:   ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", num[i]);
	}

	selectionSort(num, sizeof(num) / sizeof(*num));

	printf("\n정렬 후:   ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", num[i]);
	}

	return 0;
}

void selectionSort(int* pArr, int num)
{
	int i, j, temp, smallest;
	printf("\n");
	for (i = 0; i < num - 1; i++)
	{
		smallest = i;
		for (j = i + 1; j < num; j++)
		{
			if (*(pArr + j) < *(pArr + smallest))
			{
				smallest = j;
			}
		}
		temp = *(pArr + smallest);
		*(pArr + smallest) = *(pArr + i);
		*(pArr + i) = temp;
		printf("\n[%d단계]: ", i + 1);
		for (int k = 0; k < num; k++)
		{
			printf("%d ", *(pArr + k));
		}
		printf("\n");
	}


}
