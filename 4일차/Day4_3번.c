#include <stdio.h>

struct BirthDay
{
	short year;
	char month;
	char day;
};

struct Student
{
	char* student_id;
	char* major;
	char* name;
	char* phone_number;
	char* address;
	struct BirthDay bd;
};


int main(void) {
	struct Student stu;

	char student_id[15], major[25], name[15], phone_number[18], address[50], birth_day[15] = { 0, };
	char year[4], month[2], day[2];

	printf("��   ��: ");
	gets(student_id);
	printf("��   ��: ");
	gets(major, 25);
	printf("��   ��: ");
	gets(name, 15);
	printf("����ó: ");
	gets(phone_number);
	printf("��   ��: ");
	gets(address);
	printf("�������(�� 2000/12/31) : ");
	gets(birth_day);

	year[0] = birth_day[0]; year[1] = birth_day[1];
	year[2] = birth_day[2]; year[3] = birth_day[3];
	month[0] = birth_day[5]; month[1] = birth_day[6]; //memcpy(month, &birth_day[4], 2); //birth_day[5]���� 2���� ����
	day[0] = birth_day[8]; day[1] = birth_day[9]; //memcpy(day, &birth_day[8], 2); //birth_day[8]���� 2���� ����


	stu.student_id = student_id;
	stu.major = major;
	stu.name = name;
	stu.phone_number = phone_number;
	stu.address = address;
	stu.bd.year = atoi(year); //year ���ڿ�->���ڷ� �ٲ�
	stu.bd.month = atoi(month); //month ���ڿ�->���ڷ� �ٲ�
	stu.bd.day = atoi(day); //day ���ڿ�->���ڷ� �ٲ�

	printf("\n#### �л� ���� ####\n\n");

	printf("�й�: %s\n", stu.student_id);
	printf("��(��)��: %s\n", stu.major);
	printf("�̸�: %s\n", stu.name);
	printf("����ó: %s\n", stu.phone_number);
	printf("�ּ�: %s\n", stu.address);
	printf("�������: %d-%d-%d\n", stu.bd.year, stu.bd.month, stu.bd.day);


	return 0;
}