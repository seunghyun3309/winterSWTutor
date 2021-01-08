#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����ü ����
typedef struct SCORE {
	int kor;
	int eng;
	int math;
}SCORE;

//��ø ����ü ����
typedef struct INFO {
	char name[20];
	char gender[4];
	char phoneNum[20];
	char major[20];
	struct SCORE score;
}INFO;

void INPUT(INFO* pArr, int num);
void OUTPUT(INFO* pArr, int num);
int SUM(INFO temp);
float AVE(INFO temp);

void INPUT(INFO* pArr, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d��° �л� �Է�\n", i + 1);
		printf("��     �� : ");
		scanf("%s", pArr[i].name); //����ü �Է� ���� �� �迭 ���!!!!
		printf("����(M/F) : ");
		scanf("%s", pArr[i].gender);
		printf("�� �� ó  : ");
		scanf("%s", pArr[i].phoneNum);
		printf("��    ��  : ");
		scanf("%s", pArr[i].major);

		printf("�������� : ");
		scanf("%d", &pArr[i].score.kor);
		printf("�������� : ");
		scanf("%d", &pArr[i].score.eng);
		printf("�������� : ");
		scanf("%d", &pArr[i].score.math);
		printf("\n");
	}
}
void OUTPUT(INFO* pArr, int num)
{
	printf("\n\t ##### �л� ���� ##### \n");
	printf("================================================================================\n");
	printf(" ��  �� ����\t �� �� ó\t  ��      �� \t  ����  ����  ����  ����  ��� \t\n");
	printf("================================================================================\n");

	for (int i = 0; i < num; i++) {

		printf("%s   %s\t%s\t %s  %d \t%d \t%d  %d  %.2f\n", pArr[i].name, pArr[i].gender, pArr[i].phoneNum,
			pArr[i].major, pArr[i].score.kor, pArr[i].score.eng, pArr[i].score.math, SUM(pArr[i]), AVE(pArr[i])); //����ü ��µ� ��������!!!!
	}
}
int SUM(INFO temp)
{
	return temp.score.kor + temp.score.eng + temp.score.math;
}

float AVE(INFO temp)
{
	float ave = SUM(temp) / 3.0;
	return ave;
}

int main()
{
	INFO info[3];
	printf("\n\t ##### �л� ���� ó�� ##### \n");
	INPUT(info, 3);
	OUTPUT(info, 3);
	return 0;
}