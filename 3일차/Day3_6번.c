#include <stdio.h>
#include <string.h>
#define arrMAXSIZE 100

int my_strcmp(const char* left, const char* right);

int main()
{
	char str1[arrMAXSIZE];
	char str2[arrMAXSIZE];

	int compare;

	printf("대상 문자열(left)   : ");
	gets_s(str1, sizeof(str1));

	printf("원본 문자열(right)  : ");
	gets_s(str2, sizeof(str2));

	printf("\n입력된 대상 문자열(left)  : %s\n", str1);
	printf("입력된 원본 문자열(right) : %s\n", str2);

	compare = my_strcmp(str1, str2);

	printf("left : right 문자열 비교 : %d", compare);

	return 0;
}
int my_strcmp(const char* left, const char* right)
{
	while (*left != '\0' && *right !='\0')
	{
		if (*left > *right)
		{
			return 1;
		}
		else if (*left < *right)
		{
			return -1;
		}
		else
		{
			left++;
			right++;
			if (*(left) == '\0' && *(right) == '\0')
				return 0;
			else
				continue;
		}
	}

	if (*left != '\0')
		return 1;
	else if (*right != '\0')
		return -1;
	return 0;
}