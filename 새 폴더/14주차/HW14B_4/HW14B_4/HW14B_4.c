/***************************************
HW14B_4 20201012 컴퓨터학과 1학년 임소정
****************************************/
#include <stdio.h>
void calculatePoint(char s[]);
int main(void)
{
	char str[20];
	printf("단어를 입력하세요(빈칸없이): ");
	scanf_s("%s", str, 20);
	printf("점수는 %d\n", calculatePoint(str));
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