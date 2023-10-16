// 20201012 컴퓨터학과 임소정
// HW6_3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, len;

	printf("Enter one word : ");
	scanf("%s", word);

	len = strlen(word);
	for (i = 0; i < len; i++)
	{
		newWord[i] = word[len - i - 1];
	}
	newWord[i] = '\0';

	printf("The reversed word is %s\n", newWord);
}