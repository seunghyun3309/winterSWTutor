#include <stdio.h> 

void revPrint()
{
    int ch;
    ch = getchar();
    if (ch!= '\n')
    {
        revPrint();
    }
    putchar(ch);
    return;
}

int main(void)
{
    printf("문자를 입력하세요 : ");

    revPrint();

    return 0;
}

