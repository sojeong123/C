#include <stdio.h>
int main(void)
{
	char letter;

	printf("Enter a upper letter(A-Y) : ");
	scanf_s("%c", &letter);

	printf("Character given is %c(%d).\n", letter, letter);
	printf("The next character is %c(%d).\n", letter + 1, letter + 1);
	printf("The lower case letter is %c(%d).\n", letter + 32, letter + 32);
}