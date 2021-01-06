#include <stdio.h>

int* binarySearch(int* pArr, int* pFirst, int* pLast, int key)
{
	while (1)
	{
		int* pMid = pFirst + (pLast - pFirst) / 2; // 중간 index 구하기

		if (pFirst > pLast)
			return -1;

		if (key == *pMid)
		{
			return pMid;
		}

		else if (key < *pMid) //A[mid]보다 작으면
		{
			pLast = pMid - 1;
		}

		else if (key > * pMid) //A[mid]보다 크면
		{
			pFirst = pMid + 1;
		}

	}

}

void PRINT(int* pArr, int num)
{

	int* result = binarySearch(pArr, pArr, pArr + 9, num);

	if (result == -1)
	{
		printf("없다고!!!\n");
	}
	else if (result >= 0)
	{
		printf("검색 데이터 : %d 번째 위치 %d\n", *result, result - pArr + 1);// 배열index는 0부터
	}
}

int main()
{
	int num, result;
	int arr[10] = { 5,9,13,17,21,28,37,46,55,88 };

	printf("원시 데이터 : 5 9 13 17 21 28 37 46 55 88 \n");

	while (1)
	{
		printf("검색 데이터 입력(검색 종료 : 0 ) : ");
		scanf("%d", &num);

		if (num == 0)
		{
			break;
		}

		PRINT(arr, num);
	}

	return 0;
}