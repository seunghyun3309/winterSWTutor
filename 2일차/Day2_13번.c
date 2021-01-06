#include <stdio.h>

int* binarySearch(int* pArr, int* pFirst, int* pLast, int key)
{
	while (1)
	{
		int* pMid = pFirst + (pLast - pFirst) / 2; // �߰� index ���ϱ�

		if (pFirst > pLast)
			return -1;

		if (key == *pMid)
		{
			return pMid;
		}

		else if (key < *pMid) //A[mid]���� ������
		{
			pLast = pMid - 1;
		}

		else if (key > * pMid) //A[mid]���� ũ��
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
		printf("���ٰ�!!!\n");
	}
	else if (result >= 0)
	{
		printf("�˻� ������ : %d ��° ��ġ %d\n", *result, result - pArr + 1);// �迭index�� 0����
	}
}

int main()
{
	int num, result;
	int arr[10] = { 5,9,13,17,21,28,37,46,55,88 };

	printf("���� ������ : 5 9 13 17 21 28 37 46 55 88 \n");

	while (1)
	{
		printf("�˻� ������ �Է�(�˻� ���� : 0 ) : ");
		scanf("%d", &num);

		if (num == 0)
		{
			break;
		}

		PRINT(arr, num);
	}

	return 0;
}