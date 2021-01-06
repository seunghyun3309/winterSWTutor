#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int ADD(int a, int b)
{
    int add = a + b;
    return add;
};
int SUB(int a, int b)
{
    int div = a - b;
    return div;
};
int MUL(int a, int b)
{
    int sub = a * b;
    return sub;
};
int DIV(int a, int b)
{
    int diiv = a / b;
    return diiv;
};

int main(void)
{
    int a = 0, b = 0;

    printf("5번 두 정수 입력 : ");
    scanf("%d %d", &a, &b);

    if (b == 0)
    {
        printf("%d + %d = %d\n", a, b, ADD(a, b));
        printf("%d - %d = %d\n", a, b, SUB(a, b));
        printf("%d * %d = %d\n", a, b, MUL(a, b));
        printf("Error : 나눗셈 입력 오류!!!\n 0 으로 나눌 수 없습니다.");
        return 0;
    }


    printf("%d + %d = %d\n", a, b, ADD(a, b));
    printf("%d - %d = %d\n", a, b, SUB(a, b));
    printf("%d * %d = %d\n", a, b, MUL(a, b));
    printf("%d / %d = %d\n", a, b, DIV(a, b));

    return 0;
}

