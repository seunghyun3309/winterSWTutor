#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// **�ܼ� ���� ���**
// ������ ������� �����Ͻð� �𸣽� ��쿡�� ���ø� �ǰڽ��ϴ�.
// 1. ���带 ���� �մϴ�.
// 2. ����â�� 'cmd' �Ǵ� '��� ������Ʈ'�� ���� 
// 3. cd 'Debug ���� ��ġ'�� cmd ��� ����
// ��) cd C:\Users\�̽���\source\repos\5����\Debug
// 4. '������Ʈ��.exe' ������ ã�Ƽ� my_view.exe�� ���� �̸��� �ٲ۴�.
// 5. ���α׷� ������ ó�� ���� �Ͻø� �˴ϴ�.
// ��) my_view test.txt

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("���� : ");
		printf("my_view [source filename]\n");
		return 0;
	}

	FILE* fread = fopen(argv[1], "rb");

	if (fread == NULL) return 0;

	char ch[100];
	int idx = 1;
	while (!feof(fread))
	{

		fgets(ch, sizeof(ch), fread);
		printf("%03d %s\n", idx, ch);
		idx++;
	}

	fclose(fread);

	return 0;
}