#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define arrMAXSIZE 100

int my_atoi(const char* pStr);

int main()
{
	char str1[arrMAXSIZE];
	int convert;

	printf("정수로 변환할 문자열 입력 : ");
	gets_s(str1, sizeof(str1));

	convert = my_atoi(str1);
	printf("입력 문자열 : %s 변환된 숫자(int) : %d", str1, convert);

	return 0;
}

int my_atoi(const char* pStr)
{
	const char* start = pStr;

	int flag = 0; // 첫번째 문자 판단
	int result;

	if (*start == '+')
	{
		flag = 1;
	}
	else if (*start == '-')
	{
		flag = -1;
	}
	else
	{
		if (isdigit(*start) == 0)
			return -1;
	}

	switch (flag)
	{
	case -1:
	case  1:
		start++;
	case 0:
		result = *start - 48;
		start++;
		while (isdigit(*start))
		{
			result = result * 10 + *start - 48;
			start++;
		}
		break;
	}

	if (flag == -1)
		result *= -1;
	return result;
}