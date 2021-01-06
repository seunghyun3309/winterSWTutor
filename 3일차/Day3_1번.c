#include <stdio.h>
#define COL 10

void Triangle(int(*pArr)[COL], int row, int col);
void Triangle_invert(int(*pArr)[COL], int row, int col);
void OUTPUT(int(*pArr)[COL], int row, int col);

int main()
{
	printf("### 삼각형 출력###\n");

	printf("1) 삼 각 형 출력\n");
	printf("2) 역삼각형 출력\n");
	printf("3) 프로그램 종료\n");
	int num;

	while (1)
	{
		int* arr[COL][COL] = { 0, };
		printf("메뉴 선택 : ");
		scanf("%d", &num);

		if (num == 1)
		{
			Triangle(arr, COL, COL);
			OUTPUT(arr, COL, COL);
		}
		else if (num == 2)
		{
			Triangle_invert(arr, COL, COL);
			OUTPUT(arr, COL, COL);
		}
		else if (num == 3)
			break;
	}
	return 0;
}

void Triangle(int(*pArr)[COL], int row, int col)
{
	int cnt = 1;

	for (int i = 0; i < row; i++)
	{
		for (int j = COL - 1 - i; j < col; j++)
		{
			pArr[i][j] = cnt;
			cnt++;
		}
	}
}
void Triangle_invert(int(*pArr)[COL], int row, int col)
{
	int cnt = 1;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			pArr[j][i] = cnt;
			cnt++;
		}
	}
}
void OUTPUT(int(*pArr)[COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%2d ", pArr[i][j]);
		}
		printf("\n");
	}
}
