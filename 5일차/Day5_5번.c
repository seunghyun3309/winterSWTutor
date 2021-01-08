#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc == 3)
	{
		int line = 0, voca = 0, ch = 0; // 라인 수 = line 단어수 = voca 문자수 = ch
		FILE* fp;

		fp = fopen(argv[2], "rb");
		if (fp == NULL)
		{
			printf("File opening Failed\n");
			return 2;
		}

		char input;
		while ((input = fgetc(fp)) != EOF)
		{
			if (input == '\r')
			{
				line++;
				voca++;
			}
			else if (input == '\n') //개행은 문자에서 제외
			{

			}
			else if (input == ' ')
			{
				voca++;
			}
			else
			{
				ch++;
			}

		}
		if (line != 0)
			line++;

		fclose(fp);
		printf("라인 수 : %d\n", line);
		printf("단어 수 : %d\n", voca);
		printf("문자 수 : %d\n", ch);
	}
	else
	{
		printf("프로그램 사용법 : wc FileName\n");
		return 1;
	}
	return 0;
}