#include <stdio.h>
#define COL 3
void stuScoreInput(int(*pTable)[COL], int row, int col);
void stuScoreOutput(int(*pTable)[COL], int row, int col);
int scoreSum(int* pArr, int num);
double scoreAve(int* pArr, int num);

int main()
{
	int arr[5][COL] = { 0, };
	printf("5 명의 학생 점수(국어, 영어, 수학)를 입력하시오...\n");
	printf("\n");

	stuScoreInput(arr, 5, COL);
	printf("\n");

	stuScoreOutput(arr, 5, COL);

	return 0;
}
void stuScoreInput(int(*pTable)[COL], int row, int col)
{
	int kor, eng, math;
	for (int i = 0; i < row; i++)
	{
		printf("%d 번째 학생 성적을 입력하시오...\n", i + 1);
		printf("\t\t국어 : ");
		scanf("%d", &kor);
		printf("\t\t수학 : ");
		scanf("%d", &math);
		printf("\t\t영어 : ");
		scanf("%d", &eng);

		pTable[i][0] = kor;
		pTable[i][1] = eng;
		pTable[i][2] = math;
	}
}
void stuScoreOutput(int(*pTable)[COL], int row, int col)
{
	printf("순번  국어  영어  수학  총점  평균\n");
	for (int i = 0; i < row; i++)
	{
		printf("%d : %5d %5d %5d %5d  %.2lf\n", i + 1, pTable[i][0], pTable[i][1], pTable[i][2], scoreSum(pTable[i], 3), scoreAve(pTable[i], 3));
	}
}
int scoreSum(int* pArr, int num)
{
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += pArr[i];
	}
	return sum;
}
double scoreAve(int* pArr, int num)
{
	double ave = 0;
	for (int i = 0; i < num; i++)
	{
		ave += pArr[i];
	}
	return ave / num;
}
