// Challenge6a
// �� ���� �ܾ �Է¹޾Ƽ� ������ �ٸ����� �Ǻ��ϴ� ���α׷��� �ۼ��϶�.
// �Ʒ��� �������� ��� ������Ѻ���.
// ������
// Enter the first word : Park
// Enter the second word : Pak
// �� �ܾ�� �ٸ���.

// Enter the first word : Pak
// Enter the second word : Park
// �� �ܾ�� �ٸ���.

// Enter the first word : Pak
// Enter the second word : Pakk
// �� �ܾ�� �ٸ���.

// Enter the first word : Pakk
// Enter the second word : Pak
// �� �ܾ�� �ٸ���.

// Enter the first word : Pak
// Enter the second word : Pak
// �� �ܾ�� ����.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main (void) {
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
		printf("�� �ܾ�� �ٸ���.\n");
	} else {
		for (i = 0; i < len1; i++) {
			if (word1[i] == word2[i]) {
				count++;
			}
		}
		if (count == len1) {
			printf("�� �ܾ�� ����.\n");
		} else {
			printf("�� �ܾ�� �ٸ���.\n");
		}
	}

	return 0;
}
*/

// Challegne6b
// �Ű����� word���� ����(���� ���)���� ���� �����ϴ� �Լ� solution�� �ۼ��϶�
// �ϳ��� �ܾ �Է� �޾Ƽ� �� �ܾ� �ȿ� ���Ե� ������ ���� ����ϴ� ���α׷��� �ۼ��϶�.
// �ܾ� �ȿ� ���ڰ� ���̾� ���� ��� �ϳ��� ���� �����Ѵ�.
// ���� ����
// Enter a word : ab22c3d5
// ���� ���� ���� ���� 30

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(void)
{
	char word[81];
	int total;

	scanf("%s", word);
	total = solution(word);
	printf("%d\n", total);

	return 0;

}

int solution(char* word)
{
	int answer = 0;
	int i, j;
	int len = strlen(word);
	int count = 0;
	int sum = 0;

	for (i = 0; i < len; i++) {
		if (word[i] >= '0' && word[i] <= '9') {
			count++;
		}
		else {
			if (count > 0) {
				char* temp = (char*)malloc(sizeof(char) * (count + 1));
				for (j = 0; j < count; j++) {
					temp[j] = word[i - count + j];
				}
				temp[j] = '\0';
				sum += atoi(temp);
				free(temp);
				count = 0;
			}
		}
	}

	if (count > 0) {
		char* temp = (char*)malloc(sizeof(char) * (count + 1));
		for (j = 0; j < count; j++) {
			temp[j] = word[i - count + j];
		}
		temp[j] = '\0';
		sum += atoi(temp);
		free(temp);
		count = 0;
	}

	answer = sum;

	return answer;
}
*/


// Challenge6d
// �־��� �ܾ palindrome������ �Ǻ��ϴ�  ���α׷��� �ۼ��϶�.
// palindrome�̶� ������ ������ �ڷ� ������ ���� �ܾ ���Ѵ�.
// madam�� abccbaó�� ���̴�.
// ������
// *Palindrome üũ
//
// ���ڿ� �Է�<���ڼ� 81 ����> : madam
// "madam" is a Palindrome.
//
// *Palindrome üũ
// 
// ���ڿ� �Է�<���ڼ� 81 ����> : father
// "father" is not a Palindrome.

/*
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
*/

// 2020���� �б⸻��� 5��
// (������ �н����� üŷ)
// ������ ������ apple �̶�� �н����带 ����.
// �α��ν� �н����带 �Է��� �� �ڲ� apple �ڿ� ������ ���̴� �̻��� ������ �����.
// �н����� �Է½� �պκи� ������ �α����� ���� �ϵ��� <������ �н����� üŷ �ý���>���� �ٲٷ��Ѵ�.
// ��, apple �� ������ �翬�� �α��� ���������� apple1, Ȥ�� appleapple �̶�� �־ �α��� ������ �ǰ� �ϰ� �ʹ�.
// �̷��� �������н�����üŷ�� �׽�Ʈ�ϱ� ���� �н����带 3 �� �Է��ϰ� �ϰ� �� �н����忡 ���ؼ� �����ϸ� 1 ��
// �����ϸ� 0 �� ����Ѵ�.
// ���� ���, �� �� ��� �´� �н������̸� 111 ��,
// ó�� �õ��� ������ 100, �� Ʋ���� 000 �� ����Ѵ�.
// ���࿹��
// apple apple1 applebb
// 111
//
// appleee appl bple
// 100

/*
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
*/

// 2020���� �б⸻��� 6��
// (�ܾ�Ӵܾ� ����)
// is_word_in_word �Լ��� ������ ���� prototype �� ���´�.
// int is_word_in_word(char w1[], int start, char w2[]);
// ���� �Լ��� �ܾ� w2 �� �ܾ� w1 �� start �ε�����ġ�� ������ 1 ��, �ƴϸ� 0 �� ��ȯ�Ѵ�.
// ���� ��� w1 �� ababcd �̰� w2 �� abc �� ��,
// start �� 2 �̸� ���� �Լ��� 1 �� ��ȯ�ϰ�
// �� �ܿ��� 0 �� ��ȯ�Ѵ�.
// �־��� ���α׷��� main �Լ���
// ���ڿ� s1 �� s2 �� �Է����� �޾Ƽ�
// start �� 0 ����(w1 �� ���� - 1)���� �ݺ������� is_word_in_word �� ȣ���Ͽ� �� ��ȯ��(0 �Ǵ� 1)�� ����Ѵ�.
// ��, s1 �� ababcd, s2 �� abc ���
// start �� 0 �϶�: 0
// start �� 1 �϶� : 0
// start �� 2 �϶� : 1 < -s1 ���� �ε����� 2 �� ��ġ�� s2 �� �����ϹǷ�
// start �� 3 �϶� : 0
// start �� 4 �϶� : 0
// start �� 5 �϶� : 0
// �׷��Ƿ� 001000 �� ����Ѵ�.Copy
// is_word_in_word �Լ��� �����Ͽ� �Ʒ��� ���� ���࿹�� �ǵ��� ���α׷��϶�.
// ���࿹��
// ababcd abc
// 001000
// 
// cabbcc cc
// 000010
// 
// abcabc abc
// 100100
// 
// abcdef xx
// 000000

/*
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
*/

// 2018���� �б⸻���_��Ʈ�� ����
// (���ڿ� ����)
// ���ĺ� ������ ������ 2���� ��Ʈ�� a,b�� �Է¹޾Ƽ�
// �̸� �ϳ��� ���ļ� c��� ���ο� ��Ʈ���� ����� �Լ���
// mergeString�� �����϶�.
// c�� ���ĺ� ������ �����Ǿ� �־���Ѵ�.
// ���� ����
// ADEFX
// BGHYZ
// ABDEFGHXYZ
// 
// ABC
// XYZ
// ABCXYZ
// 
// ABCX
// ACYZ
// AABCCXYZ
// 
// ABC
// BXYZ
// ABBCXYZ			// B�� ���� ��µ��� C�� ��µǵ��� �����Ұ�

/*
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
*/

// Project4_0
// (������ ����)
// ����� 5���� ��������.
// ���� 0���� 4���� ��ȣ�� ���δ�.
// 1�� ģ������� ������ ���ٰ� ������ ��,
// 0�� 1, 1�� 2, 2�� 4, 3�� 4
// 2�̱����� �θư��踦 ���ϴ� ���α׷��� �ۼ��϶�.

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_OF_MEMBERS 5

//�Լ� ����
void print_links(int data[][NUM_OF_MEMBERS]); //2���� �迭 ���
void matrix_multiplication(int data[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS]);
//2���� �迭 ���� data X data -> result

int main(void)
{
	// 0�� 1, 1�� 2, 2�� 4, 3�� 4�� ���� 1������ ���̵��� �迭�� �ʱ�ȭ�϶�.
	int link_data[NUM_OF_MEMBERS][NUM_OF_MEMBERS] =
	{
		{0, 1, 0, 0, 0},
		{1, 0, 1, 0, 0},
		{0, 1, 0, 0, 1},
		{0, 0, 0, 0, 1},
		{0, 0, 1, 1, 0}
	};

	// 2�� ���踦 ���� �迭�� 0���� �ʱ�ȭ�Ѵ�.
	int link_result[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };
	printf("=================================================================\n");
	printf("Friends matrix\n");
	printf("=================================================================\n");
	print_links(link_data); // ���� 1�� ���� ���
	matrix_multiplication(link_data, link_result); // 2�� ���踦 link_result�� �ִ´�
	printf("=================================================================\n");
	printf("Friends of friends matrix\n");
	printf("=================================================================\n");
	print_links(link_result); // 2�̱����� ���� ���
}

void print_links(int data[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
	{
		for (j = 0; j < NUM_OF_MEMBERS; j++)
			printf("%d ", data[i][j]);
		printf("\n");
	}
}

void matrix_multiplication(int data[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS])
{
	int i, j, k;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
	{
		for (j = 0; j < NUM_OF_MEMBERS; j++)
		{
			for (k = 0; k < NUM_OF_MEMBERS; k++)
				result[i][j] += data[i][k] * data[k][j];
			if (result[i][j] > 0)
				result[i][j] = 1;
		}
	}
}
*/