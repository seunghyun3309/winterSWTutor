#include <stdio.h>

//***12***//
int main()
{
	int n = 3;
	printf("**********  ��  ��  **********\n");
	printf("1. ���ĺ� �ڽ� ��� ���\n");
	printf("2. ���ĺ� �Ƕ�̵� ��� ���\n");
	printf("3. ���α׷� ����\n");
	printf("*******************************\n");
	printf("�޴� ���� ");
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
	else //3�� ����
	{
		printf("���α׷��� �����մϴ�.\n");
	}

	return 0;
}