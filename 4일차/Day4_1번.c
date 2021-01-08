#include<stdio.h>

int main()
{
	typedef struct Info {
		int ID;
		char name[20];
		char gender[4];
		char phoneNum[20];
		char major[20];
	}Info;

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

	printf("\n\t ##### 학생 정보 #####\n");
	printf("%d, %s, %s, %s, %s\n", info.ID, info.name, info.gender, info.phoneNum, info.major);

	return 0;
}