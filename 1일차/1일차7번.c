#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int DIV(int a, int b, int* pRem)
{
    if (b != 0)
    {
        *pRem = a % b;
        return a / b;
    }
    else
    {
        printf("Error! 0으로 나눌수 없습니다.\n");
    }
}
int main()
{
    int num1 = 0, num2 = 0;
    int mok;
    int* tmp;
    printf("7번 두 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    mok = DIV(num1, num2, &tmp);
    printf("%d / %d = %d, 나머지: %d\n", num1, num2, mok, tmp);
}