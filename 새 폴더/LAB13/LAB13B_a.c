#include <stdio.h>
int main(void)
{
	char word[11];
	int i;

	printf("Enter a word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		if (i % 2 == 0)
			printf("%c", word[i]);
	printf("\n");
}
