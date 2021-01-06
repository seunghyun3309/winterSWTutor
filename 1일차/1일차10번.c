#include <stdio.h>

int validateBinary(int num);
int binaryToDecimal(int num);

int main(void) {
	int num;
	int check = -1;
	while (check == -1) {
		printf("이진수 입력 (0 또는 1) : ");
		scanf_s("%d", &num);
		check = validateBinary(num);
	}

	binaryToDecimal(num);

	return 0;
}

int validateBinary(int num) {
	int n = num;
	while (n > 0) {
		if (n % 10 != 0 && n % 10 != 1) {
			printf("이진수가 아닙니다.\n0 또는 1만 입력하시오!!!\n");
			return -1;
		}

		n /= 10;
	}
	return 1;
}

int binaryToDecimal(int num) {
	int n = num;
	int value = 1;
	int result = 0;

	printf("입력한 이진수 : %d\n", num);

	while (n > 0) {
		result += (n % 10) * value;
		n /= 10;
		value *= 2;
	}

	printf("변환된 십진수 : %d", result);

	return result;
}