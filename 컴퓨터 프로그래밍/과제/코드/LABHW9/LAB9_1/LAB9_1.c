// 20201012 ��ǻ���а� �Ӽ���
// LAB9_1
#include <stdio.h>
void main()
{
	char c;
	printf("Enter ���ڿ�(q�������� ���ڿ��� ������)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	while (getchar() != '\n');
	printf("\n----------------------------------------------------------\n");
	printf("Enter �ι�° ���ڿ�(q�������� ���ڿ��� ������)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	while (getchar() != '\n');
	putchar('\n');
}