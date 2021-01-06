#include <stdio.h>

//***12***//
int main()
{
	int n = 3;
	printf("**********  메  뉴  **********\n");
	printf("1. 알파벳 박스 모양 출력\n");
	printf("2. 알파벳 피라미드 모양 출력\n");
	printf("3. 프로그램 종료\n");
	printf("*******************************\n");
	printf("메뉴 선택 ");
	scanf("%d", &n);


	if (n == 1)
	{
		for (int i = 0; i < 26; i++)
		{
			char alpha = 'A' + i;
			for (int j = 0; j < 26; j++)
			{
				printf("%c ", alpha);
				if (alpha == 'Z')
				{
					alpha = 'A';
				}
				else
				{
					alpha += 1;
				}
			}
			printf("\n");
		}

	}
	else if (n == 2)
	{
		for (int i = 0; i < 26; i++)
		{
			for (int j = 0; j < 26 - i; j++)
			{
				printf(" ");
			}
			char alpha = 'A';
			for (int j = 0; j <= i; j++)
			{
				printf("%c ", alpha);
				if (alpha == 'Z')
				{
					alpha = 'A';
				}
				else
				{
					alpha += 1;
				}
			}
			printf("\n");
		}
	}
	else //3번 선택
	{
		printf("프로그램을 종료합니다.\n");
	}

	return 0;
}