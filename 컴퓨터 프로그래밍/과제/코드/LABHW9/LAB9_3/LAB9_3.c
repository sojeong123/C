// 20201012 컴퓨터학과 임소정
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

	printf("가)str1 의 길이 = %d\n", strlen(str1)); // 6
	printf(" str2 의 길이 = %d\n", strlen(str2)); // 5

	strcpy(str1, str2);
	printf("나)str1 = %s\t\tstr2 = %s\n", str1, str2); // str1 = abcde str2 = abcde

	strncpy(str1, str3, 2);
	printf("다)str1 = %s\t\tstr3 = %s\n", str1, str3); // str1 = 12cde str3 = 1234

	strcat(str1, str2);
	printf("라)str1 = %s\tstr2 = %s\n", str1, str2); // str1 = 12cdeabcde str2 = abcde

	strncat(str1, str3, 2);
	printf("마)str1 = %s\tstr3 = %s\n", str1, str3); // str1 = 12cdeabcde12 str3 = 1234

	printf("바)%d %d %d\n", strcmp("aaa", "abc"), strcmp("aaa", "aaa"), strcmp("ddd", "ccc", str3)); // -1 0 1

	strcpy(str1, "111");
	n = atoi(str1) * 7;
	printf("사)str1 를 7 배 한 값은 %d\n", n); // str1 를 7배 한 값은 777

	printf("아)\n");
	n = 1;
	token = strtok(s, delimiters);
	while (token != NULL)
	{
		printf("%d 번째 토큰은 %s\n", n++, token);
		token = strtok(NULL, delimiters);
	}
	// 1 번째 토큰은 Life
	// 2 번째 토큰은 is
	// 3 번째 토큰은 short
	// 4 번째 토큰은 but
	// 5 번째 토큰은 art
	// 6 번째 토큰은 is
	// 7 번째 토큰은 long
}