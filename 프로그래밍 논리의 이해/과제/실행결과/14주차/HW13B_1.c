//20201012 컴퓨터학과 임소정
//HW13B_1
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, j = 0;

	printf("Enter one word : ");
	scanf_s("%s", word, sizeof(word));

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 65 && word[i] <= 90)
		{
			newWord[j] = word[i] + 32;
			j++;
		}
		else if (word[i] >= 97 && word[i] <= 122)
		{
			newWord[j] = word[i] - 32;
			j++;
		}
		else
		{
			newWord[j] = word[i];
			j++;
		}
	}

	newWord[j] = '\0';

	printf("word given : %s\n", word);
	printf("new word : %s\n", newWord);

	return 0;
}