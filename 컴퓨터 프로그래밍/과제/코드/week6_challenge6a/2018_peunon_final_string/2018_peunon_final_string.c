//20201012 컴퓨터학과 임소정
//2018프논 학기말고사_스트링 접합
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int mergeString(char c[], char a[], char b[])
{
	int i, j, k;
	int len1 = strlen(a);
	int len2 = strlen(b);
	int len = len1 + len2;

	for (i = 0; i < len; i++) {
		c[i] = '\0';
	}
	for (i = 0; i < len1; i++) {
		c[i] = a[i];
	}
	for (j = 0; j < len2; j++) {
		c[i + j] = b[j];
	}
	for (k = 0; k < len; k++) {
		for (i = 0; i < len - 1; i++) {
			if (c[i] > c[i + 1]) {
				char temp = c[i];
				c[i] = c[i + 1];
				c[i + 1] = temp;
			}
		}
	}
	return 0;
}

int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];
	memset(mergedWord, 0, sizeof(mergedWord));

	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
}