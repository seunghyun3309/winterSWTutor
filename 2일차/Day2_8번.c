#include <stdio.h>
#include <ctype.h>

void strConvert(const char* fromStr, char* toStr);

int main()
{
	char temp[100];

	printf("���ڿ� �Է� : ");
	gets_s(temp, sizeof(temp));

	char* last = temp;
	while (*(last) != '\0')
		last++;

	strConvert(temp, last);
	return 0;
}

void strConvert(const char* fromStr, char* toStr)
{
	const char* move = fromStr;
	printf("��ȯ�� ���ڿ� : ");
	for (move; move < toStr; move++)
	{
		if ((*move) >= 'a' && (*move) <= 'z')
		{
			putchar((*move)+'A'-'a');
		}
			
		else if ((*move)>='A'&& (*move) <= 'Z')
		{
			putchar((*move) + 'a' - 'A');
		}

		else
			putchar(*move);
	}
}