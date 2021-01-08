#include <stdio.h>
#define ADD(a,b)((a)+(b))
#define SUB(a,b)((a)-(b))
#define MUL(a,b)((a)*(b))
#define DIV(a,b)((a)/(b))
#define MAX(a,b)(((a)>(b))?(a):(b)) //a가 더 크면 a를 아니면 b를
#define MIN(a,b)(((a)<(b))?(a):(b)) //a가 더 작으면 a를 아니면 b를
#define ABS(a) ((a)< 0 ? (-a):(a))
#define SQUARE(a) ((a)*(a))

int main()
{
	printf("\t\t ### 매크로 함수 ###\n");
	int a, b;
	printf("두 정수 입력  : ");
	scanf("%d %d", &a, &b);
	printf("\n");
	printf("ADD(a,b) = %d \n", ADD(a, b));
	printf("SUB(a,b) = %d \n", SUB(a, b));
	printf("MUL(a,b) = %d \n", MUL(a, b));
	printf("DIV(a,b) = %d \n\n", DIV(a, b));
	printf("MAX(a,b) = %d \n", MAX(a, b));
	printf("MIN(a,b) = %d \n\n", MIN(a, b));
	printf("ABS(a) = %d \n", ABS(a));
	printf("ABS(b) = %d \n\n", ABS(b));
	printf("SQUARE(a) = %d \n", SQUARE(a));
	printf("SQUARE(b) = %d \n", SQUARE(b));

	return 0;
}