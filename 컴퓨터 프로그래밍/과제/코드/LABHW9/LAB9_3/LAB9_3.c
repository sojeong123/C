// 20201012 ��ǻ���а� �Ӽ���
// LAB9_3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char str1[15] = "ABCDED";
	char str2[15] = "abcde";
	char str3[15] = "1234";
	int n;

	char s[] = "Life is short, but art is long";
	char delimiters[] = " ,\n\0";
	char* token;

	printf("��)str1 �� ���� = %d\n", strlen(str1)); // 6
	printf(" str2 �� ���� = %d\n", strlen(str2)); // 5

	strcpy(str1, str2);
	printf("��)str1 = %s\t\tstr2 = %s\n", str1, str2); // str1 = abcde str2 = abcde

	strncpy(str1, str3, 2);
	printf("��)str1 = %s\t\tstr3 = %s\n", str1, str3); // str1 = 12cde str3 = 1234

	strcat(str1, str2);
	printf("��)str1 = %s\tstr2 = %s\n", str1, str2); // str1 = 12cdeabcde str2 = abcde

	strncat(str1, str3, 2);
	printf("��)str1 = %s\tstr3 = %s\n", str1, str3); // str1 = 12cdeabcde12 str3 = 1234

	printf("��)%d %d %d\n", strcmp("aaa", "abc"), strcmp("aaa", "aaa"), strcmp("ddd", "ccc", str3)); // -1 0 1

	strcpy(str1, "111");
	n = atoi(str1) * 7;
	printf("��)str1 �� 7 �� �� ���� %d\n", n); // str1 �� 7�� �� ���� 777

	printf("��)\n");
	n = 1;
	token = strtok(s, delimiters);
	while (token != NULL)
	{
		printf("%d ��° ��ū�� %s\n", n++, token);
		token = strtok(NULL, delimiters);
	}
	// 1 ��° ��ū�� Life
	// 2 ��° ��ū�� is
	// 3 ��° ��ū�� short
	// 4 ��° ��ū�� but
	// 5 ��° ��ū�� art
	// 6 ��° ��ū�� is
	// 7 ��° ��ū�� long
}