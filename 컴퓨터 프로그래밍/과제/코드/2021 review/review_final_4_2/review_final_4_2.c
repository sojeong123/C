//20201012 ��ǻ���а� �Ӽ���
//2021 ������ �⸻���(����)
//4-2 (20��)
#include <stdio.h>
void changeToDigitEncode(char s[], char e[]) {
	int i = 0;
	while (s[i] != '\0') {
		e[i] = s[i] - 'A' + 1 + '0';
		i++;
	}
	e[i] = '\0';
}

int main() {
	char s[100], e[100];

	printf("��ȣ�� �Է��Ͻÿ�: ");
	scanf_s("%s", s);

	changeToDigitEncode(s, e);

	printf("%s\n", e);

	return 0;
}
