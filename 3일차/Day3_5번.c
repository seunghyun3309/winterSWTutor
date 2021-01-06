#include <stdio.h>
#include <string.h>
#define arrMAXSIZE 100

char* my_strcat(char* dest, const char* src);

int main()
{
	char str1[arrMAXSIZE];
	char str2[arrMAXSIZE];

	printf("대상 문자열(dest) : ");
	gets_s(str1, sizeof(str1));

	printf("원본 문자열(src)  : ");
	gets_s(str2, sizeof(str2));

	printf("입력된 대상 문자열(dst) : %s\n", str1);
	printf("입력된 원본 문자열(src) : %s\n", str2);

	my_strcat(str1, str2);
	//strcat_s(str1, sizeof(str2), str2);

	printf("대상 문자열(dst) : %s\n", str1);
	printf("원본 문자열(src) : %s\n", str2);

	return 0;
}
char* my_strcat(char* dest, const char* src)
{
	char* start = dest;
	const char* src_start = src;
	size_t src_len = 0;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		src++;
		src_len++;
	}

	//*dest = ' ';
	//dest++;

	for (int i = 0; i < src_len; i++)
	{
		*dest = *(src_start + i);
		dest++;
	}
	
	*dest = '\0';

	return start;
}
