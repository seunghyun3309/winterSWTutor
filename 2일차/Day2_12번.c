#include <stdio.h>

int binarySearch(int A[], int first, int last, int key)
{
	if (first > last) // 모두 찾았는데 없는 경우
	{
		return -1;
	}
	int mid = (first + last) / 2; // 중간 index 구하기
	if (key == A[mid])
	{
		return mid;
	}
	else if (key < A[mid]) //A[mid]보다 작으면
	{
		return binarySearch(A, first, mid - 1, key);
	}
	else if (key > A[mid]) //A[mid]보다 크면
	{
		return binarySearch(A, mid + 1, last, key);
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

		result = binarySearch(arr, 0, sizeof(arr) - 1, num);

		if (result == -1)
		{
			printf("없다고!!!\n");
		}
		else if (result >= 0)
		{
			printf("검색 데이터 : %d 번째 위치 %d\n", num, result + 1);// 배열index는 0부터
		}
	}

	return 0;
}