//20201012 컴퓨터학과 임소정
//Challenge6a
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char word1[20], word2[20];
	int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w;
	int len1, len2;
	int count = 0;

	printf("Enter the first word : ");
	scanf("%s", word1);
	printf("Enter the second word : ");
	scanf("%s", word2);

	len1 = strlen(word1);
	len2 = strlen(word2);

	if (len1 != len2) {
		printf("두 단어는 다르다.\n");
	}
	else {
		for (i = 0; i < len1; i++) {
			if (word1[i] == word2[i]) {
				count++;
			}
		}
		if (count == len1) {
			printf("두 단어는 같다.\n");
		}
		else {
			printf("두 단어는 다르다.\n");
		}
	}

	return 0;
}