#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    printf("���� ���� ��...\n\n");
    FILE* fread = fopen("test.txt", "r");
    FILE* fwrite = fopen("copy.txt", "w");

    while (1)
    {
        char arr[100];//���ڿ��� ���� ����
        char* pStr = fgets(arr, 100, fread);
        if (pStr == NULL)
        {
            //������ ��
            break;
        }

        //���� ��� �о���̱�. (��¿� \n�� ����.)
        //printf("fgets 1sr arg : %s", arr);
        fputs(arr, fwrite);
        if (fread == NULL)
            return 0;
    }

    printf("���� �Ϸ�!!!\n");
    fclose(fread);
    fclose(fwrite);


    return 0;
}