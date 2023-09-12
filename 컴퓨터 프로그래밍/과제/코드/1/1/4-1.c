//20201012 컴퓨터학과 임소정
#include <stdio.h>
void changeToDigitEncode(char s[], char e[])
{
	int i, j;
	for (i = 0; s[i] != '\0'; i++)
	{
		e[i] = s[i] - 64;
	}
	e[i] = '\0';
}
int main(void)
{
	char s[20];
	char e[20];

	scanf_s("%s", s, 20);
	changeToDigitEncode(s, e);
	printf("%s\n", e);
	return 0;
}