#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//구조체 정의
typedef struct SCORE {
	int kor;
	int eng;
	int math;
}SCORE;

//중첩 구조체 정의
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
		printf("%d번째 학생 입력\n", i + 1);
		printf("이     름 : ");
		scanf("%s", pArr[i].name); //구조체 입력 받을 때 배열 사용!!!!
		printf("성별(M/F) : ");
		scanf("%s", pArr[i].gender);
		printf("연 락 처  : ");
		scanf("%s", pArr[i].phoneNum);
		printf("전    공  : ");
		scanf("%s", pArr[i].major);

		printf("국어점수 : ");
		scanf("%d", &pArr[i].score.kor);
		printf("영어점수 : ");
		scanf("%d", &pArr[i].score.eng);
		printf("수학점수 : ");
		scanf("%d", &pArr[i].score.math);
		printf("\n");
	}
}
void OUTPUT(INFO* pArr, int num)
{
	printf("\n\t ##### 학생 정보 ##### \n");
	printf("================================================================================\n");
	printf(" 이  름 성별\t 연 락 처\t  전      공 \t  국어  영어  수학  총점  평균 \t\n");
	printf("================================================================================\n");

	for (int i = 0; i < num; i++) {

		printf("%s   %s\t%s\t %s  %d \t%d \t%d  %d  %.2f\n", pArr[i].name, pArr[i].gender, pArr[i].phoneNum,
			pArr[i].major, pArr[i].score.kor, pArr[i].score.eng, pArr[i].score.math, SUM(pArr[i]), AVE(pArr[i])); //구조체 출력도 마찬가지!!!!
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
	printf("\n\t ##### 학생 성적 처리 ##### \n");
	INPUT(info, 3);
	OUTPUT(info, 3);
	return 0;
}