#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc == 3)
	{
		int line = 0, voca = 0, ch = 0; // ���� �� = line �ܾ�� = voca ���ڼ� = ch
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
			else if (input == '\n') //������ ���ڿ��� ����
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
		printf("���� �� : %d\n", line);
		printf("�ܾ� �� : %d\n", voca);
		printf("���� �� : %d\n", ch);
	}
	else
	{
		printf("���α׷� ���� : wc FileName\n");
		return 1;
	}
	return 0;
}