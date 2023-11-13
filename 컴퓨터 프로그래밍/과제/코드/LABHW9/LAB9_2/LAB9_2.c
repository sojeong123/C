// 20201012 컴퓨터학과 임소정
// LAB9_2
// LAB9_2a
/*
#include <stdio.h> // LAB9_2a
#include <string.h>
int main(void)
{
	char str1[5];
	printf("문자열을 입력하세요:");
	gets(str1);
	printf("입력한 문자열는 %s\n", str1);
	printf("문자열의 크기는 %d\n", strlen(str1));
}
*/

// LAB9_2b
/*
#include <stdio.h> // LAB9_2b
#include <string.h>
int main(void)
{
	char str2[5];
	printf("문자열을 입력하세요:");
	fgets(str2, sizeof(str2), stdin);
	printf("입력한 문자열는 %s\n", str2);
	printf("문자열의 크기는 %d\n", strlen(str2));
}
*/