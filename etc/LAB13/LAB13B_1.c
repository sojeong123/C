#include <stdio.h>
int main(void)
{
	char s[81];
	int i;
	int length;
	
	printf("Enter a string:");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++);

	length = i;
	printf("±æÀÌ´Â %d\n", length);
	for (i = 0; i < length; i++)
		printf("%c\n", s[length - i - 1]);
}
