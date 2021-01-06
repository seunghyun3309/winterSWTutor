#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int* MAX(int*, int*, int*, int*);
int* MIN(int*, int*, int*, int*);

int main(void)
{
    int n1, n2, n3, n4;

    int* max;
    int* min;
    printf("네 개의 정수를 입력하시오33: ");
    scanf_s("%d %d %d %d", &n1, &n2, &n3, &n4);


    max = MAX(&n1, &n2, &n3, &n4);
    min = MIN(&n1, &n2, &n3, &n4);

    printf("최댓값: %d \n", *max);
    printf("최소값: %d \n", *min);

    return 0;

}

int* MAX(int* pa, int* pb, int* pc, int* pd)
{
    int* max1 = *pa > * pb ? pa : pb;
    int* max2 = *pc > * pd ? pc : pd;
    int* max = *max1 > * max2 ? max1 : max2;

    return max;
}

int* MIN(int* n1, int* n2, int* n3, int* n4)
{
    int* min = n1;
    min = (*min < *n2) ? min : n2;
    min = (*min < *n3) ? min : n3;
    min = (*min < *n4) ? min : n4;

    return min;
}