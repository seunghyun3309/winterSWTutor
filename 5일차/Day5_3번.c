#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// **콘솔 실행 방법**
// 각자의 방법으로 실행하시고 모르실 경우에만 보시면 되겠습니다.
// 1. 빌드를 먼저 합니다.
// 2. 실행창에 'cmd' 또는 '명령 프롬프트'를 실행 
// 3. cd 'Debug 파일 위치'로 cmd 경로 설정
// 예) cd C:\Users\이승현\source\repos\5일차\Debug
// 4. '프로젝트명.exe' 파일을 찾아서 my_copy.exe로 파일 이름을 바꾼다.
// 5. 프로그램 실행결과 처럼 실행 하시면 됩니다.
// 예) my_copy test.txt copy.txt

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		printf("사용법\n");
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