//20201012 ��ǻ���а� �Ӽ���
//2020���� �б⸻��� 6��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���ڿ� w2 �� ���ڿ� w1 �� start ��ġ�� ������ 1 ��, �ƴϸ� 0 �� ��ȯ�ϴ� �Լ�
int main(void) // main �� �������� ���� ����Ѵ�. ����� ����
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