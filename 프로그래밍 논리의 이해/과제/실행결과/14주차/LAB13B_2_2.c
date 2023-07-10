//20201012 컴퓨터학과 임소정
//LAB13B_2_2
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, j = 0;

	printf("Enter a word : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 65 && word[i] <= 90)
		{
			newWord[j] = word[i];
			j++;
		}
	}

	newWord[j] = '\0';

	printf("%s\n", newWord);

	return 0;
}