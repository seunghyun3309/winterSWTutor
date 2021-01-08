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
int count = 0; //�л� ��
Score arr[50];

int INPUT(Score* pArr, int count) {
	for (int i = count; i < 50; i++)
	{
		printf("%d: �̸�(����(end):", i + 1);
		gets_s(pArr[i].name, sizeof(pArr[i].name));

		if (!strcmp(pArr[i].name, "end"))
		{
			break;
		}

		printf("\t���� : ");
		scanf_s("%d", &pArr[i].kor);
		printf("\t���� : ");
		scanf_s("%d", &pArr[i].eng);
		printf("\t���� : ");
		scanf_s("%d", &pArr[i].math);
		printf("\t���� : ");
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
	printf("����\t����\t����\t����\t����\t����\t����\t���\t����\n");
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
		printf("�˻��� ����(���� :0):");
		scanf("%d", &num);
		if (num == 0)
			break;
		if (num > count)
		{
			printf("�˻��� ������ 1���� %d ���� �Դϴ�.\n", count);
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
	printf("##### ���� ���� ���α׷� ##### \n");
	while (1)
	{
		printf("\n");
		printf("1) ���� �Է� \n");
		printf("2) ���� ��� \n");
		printf("3) ���� �˻� \n");
		printf("4) ���α׷� ����!!! \n");
		printf("�޴� ���� : [   ]\b\b\b");
		scanf("%d", &num);

		while (getchar() != '\n'); //fflush

		switch (num)
		{
		case 1: printf("���� �Է� ... \n");
			count = INPUT(arr, count);
			RANK(arr, count);
			break;
		case 2: printf("���� ��� ... \n");
			OUTPUT(arr, count);
			break;
		case 3: printf("���� �˻� ... \n");
			SEARCH(arr, count);
			break;
		case 4:
			exit(0);
		default: printf("�߸��� ����!!! \n");
		}
	}
	return 0;
}