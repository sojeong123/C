//20201012 ��ǻ���а� �Ӽ���
//Challenge6d
#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0
// Palindrome �˻�
BOOL isPalindrome(char str[]);
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[MAX_STRING];
	printf("* Palindrome üũ\n\n");
	printf("���ڿ� �Է�(���ڼ� %d ����): ", MAX_STRING);
	scanf("%s", str);
	if (isPalindrome(str)) // Palindrome �˻�
		printf("\"%s\" is a Palindrome\n\n", str); // ���� ����Ϸ��� \���� ���
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	return 0;
}

BOOL isPalindrome(char s[])
{
	//���ڿ� s��(����� s�� ������������, �̴� 2�б⶧ ����)
	//üũ�ؼ� palindrome�̸� TRUE���� palindrome�ƴϸ� FALSE���� return�Ѵ�.
	int i, j;
	int len = strlen(s);
	for (i = 0, j = len - 1; i < j; i++, j--) {
		if (s[i] != s[j]) {
			return FALSE;
		}
	}
	return TRUE;

}
