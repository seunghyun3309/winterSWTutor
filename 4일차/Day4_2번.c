#include <stdio.h>

int main()
{
	typedef struct Score {
		int kor;
		int eng;
		int math;
	}Score;
	typedef struct Info {
		int ID;
		char name[20];
		char gender[2];
		char phoneNum[20];
		char major[20];
		Score score;
	}Info;

	printf("�� ���� �л� ������ �Է��Ͻÿ�...\n");
	Info info;
	printf("��     �� : ");
	scanf("%d", &info.ID);
	printf("��     �� : ");
	scanf("%s", info.name);
	printf("����(M/F) : ");
	scanf("%s", info.gender);
	printf("�� �� ó  : ");
	scanf("%s", info.phoneNum);
	printf("��    ��  : ");
	scanf("%s", info.major);

	printf("\n�� ���� �л� ������ �Է��Ͻÿ�...\n");
	printf("��    �� : ");
	scanf("%d", &info.score.kor);
	printf("��    �� : ");
	scanf("%d", &info.score.eng);
	printf("��    �� : ");
	scanf("%d", &info.score.math);

	int sum = info.score.kor + info.score.eng + info.score.math;
	double avg = sum / 3.0;

	printf("\n\t ##### �л� ���� ##### \n");
	printf("�л� ���� : \t%d, \t%s, \t%s, \t%s, \t%s\n", info.ID, info.name, info.gender, info.phoneNum, info.major);
	printf("�л� ���� : \t%d, \t%d, \t%d, \t%d, \t%.2lf\n", info.score.kor, info.score.eng, info.score.math, sum, avg);

	return 0;
}