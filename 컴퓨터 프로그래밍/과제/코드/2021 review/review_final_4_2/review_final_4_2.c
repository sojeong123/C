//20201012 컴퓨터학과 임소정
//2021 프논이 기말고사(복습)
//4-2 (20점)
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

	printf("암호를 입력하시오: ");
	scanf_s("%s", s);

	changeToDigitEncode(s, e);

	printf("%s\n", e);

	return 0;
}
