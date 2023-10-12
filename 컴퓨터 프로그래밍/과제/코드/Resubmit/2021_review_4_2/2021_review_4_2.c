//20201012 컴퓨터학과 임소정
//21년 프논이 학기말 4_2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeToDigitEncode(char s[], char e[]);

int main(void)
{
	char str[20];
	char encoding_str[39];

	scanf("%s", str);
	changeToDigitEncode(str, encoding_str);
	printf("%s", encoding_str);

	return 0;
}

void changeToDigitEncode(char s[], char e[])
{
	int i, j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'I')
			e[j++] = s[i] - 'A' + '1';
		else if (s[i] <= 'S')
		{
			e[j++] = '1';
			e[j++] = s[i] - 'J' + '0';
		}
		else
		{
			e[j++] = '2';
			e[j++] = s[i] - 'T' + '0';
		}
	}
	e[j] = '\0';

	return;
}