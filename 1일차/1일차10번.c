#include <stdio.h>

int validateBinary(int num);
int binaryToDecimal(int num);

int main(void) {
	int num;
	int check = -1;
	while (check == -1) {
		printf("������ �Է� (0 �Ǵ� 1) : ");
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
			printf("�������� �ƴմϴ�.\n0 �Ǵ� 1�� �Է��Ͻÿ�!!!\n");
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

	printf("�Է��� ������ : %d\n", num);

	while (n > 0) {
		result += (n % 10) * value;
		n /= 10;
		value *= 2;
	}

	printf("��ȯ�� ������ : %d", result);

	return result;
}