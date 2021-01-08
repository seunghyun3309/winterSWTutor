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

	printf("한 명의 학생 정보를 입력하시오...\n");
	Info info;
	printf("학     번 : ");
	scanf("%d", &info.ID);
	printf("이     름 : ");
	scanf("%s", info.name);
	printf("성별(M/F) : ");
	scanf("%s", info.gender);
	printf("연 락 처  : ");
	scanf("%s", info.phoneNum);
	printf("전    공  : ");
	scanf("%s", info.major);

	printf("\n한 명의 학생 성적을 입력하시오...\n");
	printf("국    어 : ");
	scanf("%d", &info.score.kor);
	printf("영    어 : ");
	scanf("%d", &info.score.eng);
	printf("수    학 : ");
	scanf("%d", &info.score.math);

	int sum = info.score.kor + info.score.eng + info.score.math;
	double avg = sum / 3.0;

	printf("\n\t ##### 학생 정보 ##### \n");
	printf("학생 정보 : \t%d, \t%s, \t%s, \t%s, \t%s\n", info.ID, info.name, info.gender, info.phoneNum, info.major);
	printf("학생 성적 : \t%d, \t%d, \t%d, \t%d, \t%.2lf\n", info.score.kor, info.score.eng, info.score.math, sum, avg);

	return 0;
}