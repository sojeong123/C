//20201012 컴퓨터학과 임소정
//21년 프논이 학기말 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isHiddenPassword(char passwd[], char input[])
{
	int i, j;

	j = 0;
	for (i = 0; input[i] != '\0'; i++)
		if (input[i] == passwd[j])
			j++;
	if (passwd[j] == '\0')
		return (1);
	else
		return (0);
}

int main(void)
{
	char passwd[20], input[20];
	int i;
	scanf("%s", passwd);
	for (i = 0; i < 3; i++) {
		scanf("%s", input);
		if (isHiddenPassword(passwd, input))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}