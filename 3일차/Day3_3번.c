#include <stdio.h>

#define arrMAXSIZE 100

size_t my_strlen(const char* pStr);

int main()
{
	char str[arrMAXSIZE];
	size_t len;

	printf("문자열 입력 : ");
	gets_s(str, sizeof(str));

	len = my_strlen(str);

	printf("입력 문자열 : %s\n", str);
	printf("문자열의 문자 개수 : %d", len);

	return 0;
}

size_t my_strlen(const char* pStr)
{
	size_t length = 0;

	while (*pStr!='\0')
	{
		pStr++;
		length++;
	}
		
	return length;
}