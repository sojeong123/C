//20201012 컴퓨터학과 임소정
//2020프논 학기말고사 5번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char w0[81] = "apple";
	char w1[81], w2[81], w3[81];
	scanf("%s %s %s", w1, w2, w3);
	printf("%d", checking(w0, w1));
	printf("%d", checking(w0, w2));
	printf("%d", checking(w0, w3));
}

int checking(char w0[], char w[])
{
	int i, j;
	int len0 = strlen(w0);
	int len = strlen(w);
	int count = 0;
	for (i = 0; i < len0; i++) {
		if (w0[i] == w[i]) {
			count++;
		}
	}
	if (count == len0) {
		return 1;
	}
	else {
		return 0;
	}
}