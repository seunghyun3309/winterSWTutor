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

	printf("\n\t ##### �л� ���� #####\n");
	printf("%d, %s, %s, %s, %s\n", info.ID, info.name, info.gender, info.phoneNum, info.major);

	return 0;
}