// 20201012 컴퓨터학과 임소정
// LAB9_1
#include <stdio.h>
void main()
{
	char c;
	printf("Enter 문자열(q이전까지 문자열로 인정함)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	while (getchar() != '\n');
	printf("\n----------------------------------------------------------\n");
	printf("Enter 두번째 문자열(q이전까지 문자열로 인정함)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	while (getchar() != '\n');
	putchar('\n');
}