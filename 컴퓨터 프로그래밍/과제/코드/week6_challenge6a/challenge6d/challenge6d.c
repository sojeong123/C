//20201012 컴퓨터학과 임소정
//Challenge6d
#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0
// Palindrome 검사
BOOL isPalindrome(char str[]);
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[MAX_STRING];
	printf("* Palindrome 체크\n\n");
	printf("문자열 입력(문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);
	if (isPalindrome(str)) // Palindrome 검사
		printf("\"%s\" is a Palindrome\n\n", str); // “를 출력하려면 \”를 써야
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	return 0;
}

BOOL isPalindrome(char s[])
{
	//문자열 s를(사실은 s는 포인터이지만, 이는 2학기때 배운다)
	//체크해서 palindrome이면 TRUE값을 palindrome아니면 FALSE값을 return한다.
	int i, j;
	int len = strlen(s);
	for (i = 0, j = len - 1; i < j; i++, j--) {
		if (s[i] != s[j]) {
			return FALSE;
		}
	}
	return TRUE;

}
