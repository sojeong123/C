// 20201012 ��ǻ���а� �Ӽ���
// LAB9_0_2a
#include <stdio.h>
#include <ctype.h> //����ó�� �Լ� ����� ����
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	c = getchar();
	while (c != EOF)
	{
		if (isupper(c))
			putchar(tolower(c));
		else if (islower(c))
			putchar(toupper(c));
		else
			putchar(c);
		c = getchar();
	}
}