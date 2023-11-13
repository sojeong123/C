// 20201012 컴퓨터학과 임소정
// LAB9_0_2b
#include <stdio.h>
#include <ctype.h> //문자처리 함수 사용을 위해
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	while ((c = getchar()) != EOF)
	{
		if (isupper(c))
			putchar(tolower(c));
		else if (islower(c))
			putchar(toupper(c));
		else
			putchar(c);
	}
}