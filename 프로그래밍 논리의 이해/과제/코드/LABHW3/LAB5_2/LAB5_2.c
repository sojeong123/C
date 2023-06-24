#include <stdio.h>
int main(void)
{
	char alphabet;
	int value;
	
	printf("Enter an alphabet: ");
	scanf_s("%c", &alphabet);

	printf("%c %d\n", alphabet, alphabet);

	printf("Enter a ascii value: ");
	scanf_s("%d", &value);

	printf("%d %c\n", value, value);
}