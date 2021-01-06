#include <stdio.h>

void INPUT(int*, int*, int*);
int SUM(int, int, int);
double GRADE(int, int, int);

int main(void) {
	int kor, eng, mat;

	INPUT(&kor, &eng, &mat);
	SUM(kor, eng, mat);
	GRADE(kor, eng, mat);

	return 0;
}

void INPUT(int* kor, int* eng, int* mat) {
	printf("세 과목의 점수를 입력 하세요 : ");
	scanf_s("%d %d %d", kor, eng, mat);
}
int SUM(int kor, int eng, int mat) {
	int sum = kor + eng + mat;

	printf("총점 : %d, ", sum);

	return sum;
}
double GRADE(int kor, int eng, int mat) {
	double avar = (double)(kor + eng + mat) / 3;
	char grade;

	if (avar >= 90) grade = 'A';
	else if (avar >= 80) grade = 'B';
	else if (avar >= 70) grade = 'C';
	else if (avar >= 60) grade = 'D';
	else grade = 'F';

	printf("평균 : %.1f, 학점 : %c\n", avar, grade);

	return avar;
}