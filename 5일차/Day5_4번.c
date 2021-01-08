#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// **콘솔 실행 방법**
// 각자의 방법으로 실행하시고 모르실 경우에만 보시면 되겠습니다.
// 1. 빌드를 먼저 합니다.
// 2. 실행창에 'cmd' 또는 '명령 프롬프트'를 실행 
// 3. cd 'Debug 파일 위치'로 cmd 경로 설정
// 예) cd C:\Users\이승현\source\repos\5일차\Debug
// 4. '프로젝트명.exe' 파일을 찾아서 my_view.exe로 파일 이름을 바꾼다.
// 5. 프로그램 실행결과 처럼 실행 하시면 됩니다.
// 예) my_view test.txt

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("사용법 : ");
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