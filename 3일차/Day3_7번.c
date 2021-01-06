#include <stdio.h>

#define arrMAXSIZE 100

char* my_strchr(const char* pStr, int ch);

int main()
{
	char str1[arrMAXSIZE];
	char ch;
	char* search;

	printf("문자열 입력(str) : ");
	gets_s(str1, sizeof(str1));

	printf("검색 문자 입력   : ");
	scanf_s("%c", &ch,sizeof(ch));
	
	search = my_strchr(str1, ch);

	if (search != NULL)
	{
		printf("문자열 \'%s\'에서 검색된 \'%c\'의 위치: %d", str1, ch, search - str1 + 1);
	}
	else
	{
		printf("문자열 \'%s\'에서 찾고자 하는 \'%c\'가 존재하지 않습니다.", str1, ch);
	}

	return 0;
}

char* my_strchr(const char* pStr, int ch)
{
	char* location = pStr;

	while (*location != '\0')
	{
		if ((int)*location == ch)
			return location;
		else
			location++;
	}
	return NULL;
}