#include <stdio.h>
#include <ctype.h>

void strConvert(const char* fromStr, char* toStr);

int main()
{
	char temp[100];

	printf("문자열 입력 : ");
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
	printf("변환된 문자열 : ");
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