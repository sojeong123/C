//20201012 컴퓨터학과 임소정
//2020프논 학기말고사 6번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 문자열 w2 가 문자열 w1 의 start 위치에 있으면 1 을, 아니면 0 을 반환하는 함수
int main(void) // main 은 변경하지 말고 사용한다. 변경시 감점
{
	char s1[20], s2[20];
	int i, j;
	scanf("%s", s1);
	scanf("%s", s2);
	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));
}

int is_word_in_word(char w1[], int start, char w2[])
{
	int i, j;
	int len1 = strlen(w1);
	int len2 = strlen(w2);
	int count = 0;
	for (i = start, j = 0; i < len1; i++, j++) {
		if (w1[i] == w2[j]) {
			count++;
		}
	}
	if (count == len2) {
		return 1;
	}
	else {
		return 0;
	}
}