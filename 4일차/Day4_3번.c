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

	printf("학   번: ");
	gets(student_id);
	printf("학   과: ");
	gets(major, 25);
	printf("이   름: ");
	gets(name, 15);
	printf("연락처: ");
	gets(phone_number);
	printf("주   소: ");
	gets(address);
	printf("생년월일(예 2000/12/31) : ");
	gets(birth_day);

	year[0] = birth_day[0]; year[1] = birth_day[1];
	year[2] = birth_day[2]; year[3] = birth_day[3];
	month[0] = birth_day[5]; month[1] = birth_day[6]; //memcpy(month, &birth_day[4], 2); //birth_day[5]부터 2개를 복사
	day[0] = birth_day[8]; day[1] = birth_day[9]; //memcpy(day, &birth_day[8], 2); //birth_day[8]부터 2개를 복사


	stu.student_id = student_id;
	stu.major = major;
	stu.name = name;
	stu.phone_number = phone_number;
	stu.address = address;
	stu.bd.year = atoi(year); //year 문자열->숫자로 바꿈
	stu.bd.month = atoi(month); //month 문자열->숫자로 바꿈
	stu.bd.day = atoi(day); //day 문자열->숫자로 바꿈

	printf("\n#### 학생 정보 ####\n\n");

	printf("학번: %s\n", stu.student_id);
	printf("학(부)과: %s\n", stu.major);
	printf("이름: %s\n", stu.name);
	printf("연락처: %s\n", stu.phone_number);
	printf("주소: %s\n", stu.address);
	printf("생년월일: %d-%d-%d\n", stu.bd.year, stu.bd.month, stu.bd.day);


	return 0;
}