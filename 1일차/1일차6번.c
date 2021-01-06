#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
    int num1 = 0, num2 = 0;
    char ch;
    int result = 0;
    printf("6번 수식 입력 (예: 10 + 20) : ");
    scanf("%d %c %d", &num1, &ch, &num2);
    switch (ch)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;
    }
    printf("% d % c % d = % d\n", num1, ch, num2, result);
}

