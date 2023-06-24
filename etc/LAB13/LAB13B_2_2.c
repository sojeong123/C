#include <stdio.h>
int main(void)  
{
	char word[81], newWord[81];
	int i, j = 0;

	printf("Enter one word: ");
	scanf("%s", word);
        
	for (i = 0; word[i] != '\0'; i++)
		if (word[i] >= 65 && word[i] <= 90)
		{	newWord[j] = word[i];
			j++;
		}
	newWord[j] = '\0';

	printf("%s\n", newWord);

	return 0;
}
