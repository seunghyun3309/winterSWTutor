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
    printf("���ڸ� �Է��ϼ��� : ");

    revPrint();

    return 0;
}

