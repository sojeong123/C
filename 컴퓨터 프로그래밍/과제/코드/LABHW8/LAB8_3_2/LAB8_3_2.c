// 20201012 ��ǻ���а� �Ӽ���
// LAB 8_3_2
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int stringEqual(const char* s1, const char* s2)
{
	while (*s1 != '\0' && *s2 != '\0')
		if (*s1++ != *s2++)
			return 1;
	return (*s1 == '\0' && *s2 == '\0');
}

int main()
{
	char string1[50];
	char string2[50];

	printf("Enter the first string : ");
	scanf_s("%49s", string1, sizeof(string1));
	printf("Enter the second string : ");
	scanf_s("%49s", string2, sizeof(string2));

	if (stringEqual(string1, string2) == 0)
		printf("�� ���� ���ڿ��� �ٸ���\n");
	else
		printf("�� ���� ���ڿ��� ����\n");

	return 0;
}