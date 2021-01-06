#include <stdio.h>

int binarySearch(int A[], int first, int last, int key)
{
	if (first > last) // ��� ã�Ҵµ� ���� ���
	{
		return -1;
	}
	int mid = (first + last) / 2; // �߰� index ���ϱ�
	if (key == A[mid])
	{
		return mid;
	}
	else if (key < A[mid]) //A[mid]���� ������
	{
		return binarySearch(A, first, mid - 1, key);
	}
	else if (key > A[mid]) //A[mid]���� ũ��
	{
		return binarySearch(A, mid + 1, last, key);
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

		result = binarySearch(arr, 0, sizeof(arr) - 1, num);

		if (result == -1)
		{
			printf("���ٰ�!!!\n");
		}
		else if (result >= 0)
		{
			printf("�˻� ������ : %d ��° ��ġ %d\n", num, result + 1);// �迭index�� 0����
		}
	}

	return 0;
}