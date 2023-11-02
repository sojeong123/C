// 20201012 컴퓨터학과 임소정
// LAB 8_3_1
#include <stdio.h>
int stringLength(char* s1)
{
	int len = 0;
	while (*s1)		//'\0'인지 체크
	{
		len++;
		s1++;
	}
	return len;
}

void stringCopy(char* s1, const char* s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

int main(void)
{
	char copied[500];
	char data1[] = "abcde";
	char data2[] = "ABCDEFGH";

	stringCopy(copied, data1);
	printf("첫번째 복사를 시행한후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
	stringCopy(copied, data2);
	printf("두번째 복사를 시행한후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
}