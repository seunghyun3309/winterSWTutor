#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// **�ܼ� ���� ���**
// ������ ������� �����Ͻð� �𸣽� ��쿡�� ���ø� �ǰڽ��ϴ�.
// 1. ���带 ���� �մϴ�.
// 2. ����â�� 'cmd' �Ǵ� '��� ������Ʈ'�� ���� 
// 3. cd 'Debug ���� ��ġ'�� cmd ��� ����
// ��) cd C:\Users\�̽���\source\repos\5����\Debug
// 4. '������Ʈ��.exe' ������ ã�Ƽ� my_copy.exe�� ���� �̸��� �ٲ۴�.
// 5. ���α׷� ������ ó�� ���� �Ͻø� �˴ϴ�.
// ��) my_copy test.txt copy.txt

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		printf("����\n");
		printf("my_copy [source filename] [output filename]\n");
		return 0;
	}

	FILE* fread = fopen(argv[1], "rb");
	FILE* fwrite = fopen(argv[2], "wb");

	if (fread == NULL || fwrite == NULL) return 0;

	char ch;
	while (!feof(fread))
	{
		ch = fgetc(fread);
		fputc(ch, fwrite);

	}

	fclose(fread);
	fclose(fwrite);

	return 0;
}