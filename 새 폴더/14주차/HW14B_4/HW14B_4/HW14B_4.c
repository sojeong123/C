/***************************************
HW14B_4 20201012 ��ǻ���а� 1�г� �Ӽ���
****************************************/
#include <stdio.h>
void calculatePoint(char s[]);
int main(void)
{
	char str[20];
	printf("�ܾ �Է��ϼ���(��ĭ����): ");
	scanf_s("%s", str, 20);
	printf("������ %d\n", calculatePoint(str));
}
void calculatePoint(char s[])
{
	int sum = 0, i;
	char c;
	for (i = 0; s[i]; i++)
	{
		c = s[i];
		if (c >= 'a' && c <= 'z')
			sum += c - 'a' + 1;
		else if (c >= 'A' && c <= 'Z')
			sum += c - 'A' + 1;
	}
	return;
}