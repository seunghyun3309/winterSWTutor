#include <stdio.h>
#include <stdlib.h> //exit
#include <string.h> //strcmp
typedef struct {
	char name[20];
	int kor;
	int eng;
	int math;
	int sci;
	int total;
	double ave;
	int rank;
}Score;
int count = 0; //학생 수
Score arr[50];

int INPUT(Score* pArr, int count) {
	for (int i = count; i < 50; i++)
	{
		printf("%d: 이름(종료(end):", i + 1);
		gets_s(pArr[i].name, sizeof(pArr[i].name));

		if (!strcmp(pArr[i].name, "end"))
		{
			break;
		}

		printf("\t국어 : ");
		scanf_s("%d", &pArr[i].kor);
		printf("\t영어 : ");
		scanf_s("%d", &pArr[i].eng);
		printf("\t수학 : ");
		scanf_s("%d", &pArr[i].math);
		printf("\t과학 : ");
		scanf_s("%d", &pArr[i].sci);

		while (getchar() != '\n'); //fflush

		pArr[i].total = pArr[i].kor + pArr[i].eng + pArr[i].math + pArr[i].sci;
		pArr[i].ave = (double)pArr[i].total / 4.0;
		pArr[i].rank = 0;
		count++;
	}
	return count;
}
void OUTPUT(Score* pArr, int count) {
	printf("=============================================================================\n");
	printf("순번\t성명\t국어\t영어\t수학\t과학\t총점\t평균\t석차\n");
	printf("=============================================================================\n");
	for (int i = 0; i < count; i++)
	{
		printf("  %d: \t%s \t%d \t%d \t%d \t%d \t%5d \t %.2lf \t %d \n",
			i + 1, pArr[i].name, pArr[i].kor, pArr[i].eng, pArr[i].math, pArr[i].sci,
			pArr[i].total, pArr[i].ave, pArr[i].rank);
	}
	printf("=============================================================================\n");

	return;
}
void SEARCH(Score* pArr, int count) {
	int num;
	while (1) {
		printf("검색할 석차(종료 :0):");
		scanf("%d", &num);
		if (num == 0)
			break;
		if (num > count)
		{
			printf("검색할 석차는 1부터 %d 사이 입니다.\n", count);
		}
		for (int i = 0; i < count; i++)
		{
			if (pArr[i].rank == num)
			{
				printf("%d: \t%s \t%d \t%d \t%d \t%d \t%5d \t%.2lf \t%d \n",
					i + 1, pArr[i].name, pArr[i].kor, pArr[i].eng, pArr[i].math, pArr[i].sci,
					pArr[i].total, pArr[i].ave, pArr[i].rank);
			}
		}
	}
	return;
}
void RANK(Score* pArr, int count) {
	for (int i = 0; i < count; i++)
	{
		pArr[i].rank = 1;
		for (int j = 0; j < count; j++)
		{
			if (pArr[i].total < pArr[j].total)
				pArr[i].rank++;
		}
	}
	return;
}
int main()
{
	int num;
	printf("##### 성적 관리 프로그램 ##### \n");
	while (1)
	{
		printf("\n");
		printf("1) 성적 입력 \n");
		printf("2) 성적 출력 \n");
		printf("3) 석차 검색 \n");
		printf("4) 프로그램 종료!!! \n");
		printf("메뉴 선택 : [   ]\b\b\b");
		scanf("%d", &num);

		while (getchar() != '\n'); //fflush

		switch (num)
		{
		case 1: printf("성적 입력 ... \n");
			count = INPUT(arr, count);
			RANK(arr, count);
			break;
		case 2: printf("성적 출력 ... \n");
			OUTPUT(arr, count);
			break;
		case 3: printf("석차 검색 ... \n");
			SEARCH(arr, count);
			break;
		case 4:
			exit(0);
		default: printf("잘못된 선택!!! \n");
		}
	}
	return 0;
}