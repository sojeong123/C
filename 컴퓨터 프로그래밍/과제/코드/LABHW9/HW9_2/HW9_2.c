// 20201012 ��ǻ���а� �Ӽ���
// HW9_2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char jumin[15];
	printf("�ֹε�Ϲ�ȣ �Է�('-' ����): ");
	scanf("%s", jumin);

	// �⵵ ����
	char year_str[5];
	strncpy(year_str, jumin, 2);  // �ֹε�Ϲ�ȣ �� �� �ڸ�
	year_str[2] = '\0';  // ���ڿ� ���� ǥ��
	int year = atoi(year_str);  // ���ڿ��� ������ ��ȯ

	// ���� Ȯ��
	int gender_digit = jumin[7] - '0';  // �ֹε�Ϲ�ȣ �޺κ��� ù �ڸ�

	printf("����� 19%d�⵵ ���̱���\n", year);
	if (gender_digit == 1) {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", year + 77 + 1900);
	}
	else if (gender_digit == 2) {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", year + 84 + 1900);
	}

	return 0;
}