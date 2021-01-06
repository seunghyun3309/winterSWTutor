#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int*, int);

int main(void)
{
	int Arr[10];
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		Arr[i] = rand() % 100 + 1; //임의의 난수 10개 배열에 저장
	}
	printf("정렬 전 : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", Arr[i]);
	}
	printf("\n");

	int num = sizeof(Arr) / sizeof(*Arr);
	BubbleSort(Arr, num);
	printf("정렬 후 : ");
	for (int i = 0; i < num; i++)
	{
		printf("%d ", Arr[i]);
	}
	printf("\n");
}
void BubbleSort(int* pArr, int num)
{
	int temp;
	for (int i = 0; i < num - 1; i++) //1~ n-1까지 -> 0~ num-1-1까지
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (*(pArr + j) > * (pArr + j + 1))
			{
				temp = *(pArr + j + 1);
				*(pArr + j + 1) = *(pArr + j);
				*(pArr + j) = temp;
			}
		}
		// 중간 과정
		for (int k = 0; k < num; k++)
		{
			printf("%d ", *(pArr + k));
		}
		printf("\n");
		// printf("\n");
	}
}