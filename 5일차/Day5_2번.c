#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    printf("파일 복사 중...\n\n");
    FILE* fread = fopen("test.txt", "r");
    FILE* fwrite = fopen("copy.txt", "w");

    while (1)
    {
        char arr[100];//문자열을 담을 변수
        char* pStr = fgets(arr, 100, fread);
        if (pStr == NULL)
        {
            //파일의 끝
            break;
        }

        //파일 계속 읽어들이기. (출력에 \n가 없음.)
        //printf("fgets 1sr arg : %s", arr);
        fputs(arr, fwrite);
        if (fread == NULL)
            return 0;
    }

    printf("복사 완료!!!\n");
    fclose(fread);
    fclose(fwrite);


    return 0;
}