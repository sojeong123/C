// Challenge6a
// 두 개의 단어를 입력받아서 같은지 다른지를 판별하는 프로그램을 작성하라.
// 아래의 실행결과를 모두 실행시켜보자.
// 실행결과
// Enter the first word : Park
// Enter the second word : Pak
// 두 단어는 다르다.

// Enter the first word : Pak
// Enter the second word : Park
// 두 단어는 다르다.

// Enter the first word : Pak
// Enter the second word : Pakk
// 두 단어는 다르다.

// Enter the first word : Pakk
// Enter the second word : Pak
// 두 단어는 다르다.

// Enter the first word : Pak
// Enter the second word : Pak
// 두 단어는 같다.

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
		printf("두 단어는 다르다.\n");
	} else {
		for (i = 0; i < len1; i++) {
			if (word1[i] == word2[i]) {
				count++;
			}
		}
		if (count == len1) {
			printf("두 단어는 같다.\n");
		} else {
			printf("두 단어는 다르다.\n");
		}
	}

	return 0;
}
*/

// Challegne6b
// 매개변수 word안의 숫자(연속 고려)들의 합을 리턴하는 함수 solution을 작성하라
// 하나의 단어를 입력 받아서 이 단어 안에 포함된 숫자의 합을 출력하는 프로그램을 작성하라.
// 단어 안에 숫자가 연이어 나올 경우 하나의 수로 간주한다.
// 실행 예시
// Enter a word : ab22c3d5
// 글자 안의 수의 합은 30

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
// 주어진 단어가 palindrome인지를 판별하는  프로그램을 작성하라.
// palindrome이란 앞으로 읽으나 뒤로 읽으나 같은 단어를 말한다.
// madam나 abccba처럼 말이다.
// 실행결과
// *Palindrome 체크
//
// 문자열 입력<문자수 81 이하> : madam
// "madam" is a Palindrome.
//
// *Palindrome 체크
// 
// 문자열 입력<문자수 81 이하> : father
// "father" is not a Palindrome.

/*
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
*/

// 2020프논 학기말고사 5번
// (느슨한 패스워드 체킹)
// 프논이 교수는 apple 이라는 패스워드를 쓴다.
// 로그인시 패스워드를 입력할 때 자꾸 apple 뒤에 뭔가를 붙이는 이상한 습관이 생겼다.
// 패스워드 입력시 앞부분만 맞으면 로그인이 성공 하도록 <느슨한 패스워드 체킹 시스템>으로 바꾸려한다.
// 즉, apple 을 넣으면 당연히 로그인 성공이지만 apple1, 혹은 appleapple 이라고 넣어도 로그인 성공이 되게 하고 싶다.
// 이러한 느슨한패스워드체킹을 테스트하기 위해 패스워드를 3 번 입력하게 하고 각 패스워드에 대해서 성공하면 1 을
// 실패하면 0 을 출력한다.
// 예를 들어, 세 번 모두 맞는 패스워드이면 111 을,
// 처음 시도만 맞으면 100, 다 틀리면 000 을 출력한다.
// 실행예시
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

// 2020프논 학기말고사 6번
// (단어속단어 여부)
// is_word_in_word 함수는 다음과 같은 prototype 을 갖는다.
// int is_word_in_word(char w1[], int start, char w2[]);
// 위의 함수는 단어 w2 가 단어 w1 의 start 인덱스위치에 있으면 1 을, 아니면 0 을 반환한다.
// 예를 들어 w1 가 ababcd 이고 w2 가 abc 일 때,
// start 가 2 이면 위의 함수는 1 을 반환하고
// 그 외에는 0 을 반환한다.
// 주어진 프로그램의 main 함수는
// 문자열 s1 와 s2 를 입력으로 받아서
// start 를 0 부터(w1 의 길이 - 1)까지 반복적으로 is_word_in_word 를 호출하여 그 반환값(0 또는 1)을 출력한다.
// 즉, s1 가 ababcd, s2 가 abc 라면
// start 가 0 일때: 0
// start 가 1 일때 : 0
// start 가 2 일때 : 1 < -s1 에서 인덱스가 2 인 위치에 s2 가 존재하므로
// start 가 3 일때 : 0
// start 가 4 일때 : 0
// start 가 5 일때 : 0
// 그러므로 001000 을 출력한다.Copy
// is_word_in_word 함수를 정의하여 아래와 같은 실행예가 되도록 프로그램하라.
// 실행예시
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
*/

// 2018프논 학기말고사_스트링 접합
// (문자열 접합)
// 알파벳 순으로 나열된 2개의 스트링 a,b를 입력받아서
// 이를 하나로 합쳐서 c라는 새로운 스트링을 만드는 함수인
// mergeString을 정의하라.
// c도 알파벳 순으로 나열되어 있어야한다.
// 실행 예시
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
// ABBCXYZ			// B가 먼저 출력된후 C가 출력되도록 주의할것

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
// (일촌의 일촌)
// 사용자 5명을 가정하자.
// 각각 0부터 4까지 번호를 붙인다.
// 1촌 친구관계는 다음과 같다고 가정할 때,
// 0과 1, 1과 2, 2와 4, 3과 4
// 2촌까지의 인맥관계를 구하는 프로그램을 작성하라.

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_OF_MEMBERS 5

//함수 원형
void print_links(int data[][NUM_OF_MEMBERS]); //2차원 배열 출력
void matrix_multiplication(int data[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS]);
//2차원 배열 논리곱 data X data -> result

int main(void)
{
	// 0과 1, 1과 2, 2와 4, 3과 4가 각각 1촌임을 보이도록 배열을 초기화하라.
	int link_data[NUM_OF_MEMBERS][NUM_OF_MEMBERS] =
	{
		{0, 1, 0, 0, 0},
		{1, 0, 1, 0, 0},
		{0, 1, 0, 0, 1},
		{0, 0, 0, 0, 1},
		{0, 0, 1, 1, 0}
	};

	// 2촌 관계를 넣을 배열을 0으로 초기화한다.
	int link_result[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };
	printf("=================================================================\n");
	printf("Friends matrix\n");
	printf("=================================================================\n");
	print_links(link_data); // 최초 1촌 관계 출력
	matrix_multiplication(link_data, link_result); // 2촌 관계를 link_result에 넣는다
	printf("=================================================================\n");
	printf("Friends of friends matrix\n");
	printf("=================================================================\n");
	print_links(link_result); // 2촌까지의 관계 출력
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