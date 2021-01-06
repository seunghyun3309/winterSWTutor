#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int* pArr, int num);

int main(void) {
	int arr[10];
	int num = 10;
	int* p = arr;

	printf("정렬 전 : ");

	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100 + 1; //임의의 난수 10개 배열에 저장
	}

	insertionSort(p, num);

	printf("정렬 후 : ");

	for (int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

void insertionSort(int* pArr, int num)
{
	int i, j;
	int key;

	for (i = 1; i < num; i++) //idx는 i=1-> 2 i=num-1 ->num
	{
		key = pArr[i];

		for (j = i - 1; j >= 0; j--) //j는 0~i-1 까지 탐색
		{

			if (pArr[j] > key)
			{
				pArr[j + 1] = pArr[j];
			}
			else {
				break;
			}

		}

		pArr[j + 1] = key;

		for (int i = 0; i < num; i++)
		{
			printf("%d ", pArr[i]);
		}
		printf("\n");
	}

}