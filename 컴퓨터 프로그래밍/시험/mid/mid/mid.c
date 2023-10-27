// SeedFruit1
// 정수 n(이것을 씨앗수라고 하자)을 읽어
// 각 자리수의 숫자를 더하고
// 여기에 자신인 n을 더한 값인 m(이것을 열매수라고 하자)를 출력하는 프로그램을 작성하자.
// 즉, n이 91이라면
// m은 91 + 9 + 1 = 101이다.
// 
// 실행 예시
// 91	//입력(씨앗수)
// 101	//출력(열매수)

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
static int sum;

int calFruit(int n)
{
	if (n == 0)
		return sum;
	else
	{
		sum += n % 10;
		return calFruit(n / 10);
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	sum = n;
	printf("%d\n", calFruit(n));
}
*/

// SeedFruit2
// 앞의 SeedFruit1은 씨앗수를 입력받아 열매수를 출력했다.
// 
// 열매수는 씨앗수를 갖는 수이다.
// 50은 씨앗수 43에 대한 열매수다.
// 열매수가 아닌(즉, 씨앗수가 없는) 수도 있다.
// 예를 들어, 9나 20은 씨앗수가 없으므로 열매수가 아니다.
// 
// 숫자 a, b(a < b)를 입력받아, a이상 b이하의 수 중에서
// 열매수가 아닌 수들을 출력하는 프로그램을 작성하라.
// 
// 즉, a와 b가 1과 10이면 열매수가 아닌 수들이 다음과 같이 출력된다.
// 1 3 5 7 9
// 설명 : 2(1), 4(2), 6(3), 8(4), 10(5)은 열매수이므로 출력하지 않는다. (괄호안의 수는 씨앗수)
// 
// 실행 예시
// 1 10		//입력 : a와 b
// 1 3 5 7 9
// 
// 50 100	//입력 : a와 b
// 53 64 75 86 97

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
static int sum;

int calFruit(int n)
{
	if (n == 0)
		return sum;
	else
	{
		sum += n % 10;
		return calFruit(n / 10);
	}
}

int is_Fruit(int n)
{
	sum = 0;
	if (calFruit(n) == n)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i;
	int a, b;

	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
		if (!is_Fruit(i))
			printf("%d ", i);
}
*/

// 문자열 패스워드 체크
// 패스워드에  대한 안전도를 체크하는 프로그램을 작성하자.
// 패스워드가 주어졌을때, 각문자에 대해서
// 그 문자를 포함해서 연속된 문자들이 3개 있으면
// 안전도가 좋지 않은 경우다.
// 즉, acdeb에서 cde는 d,e로 연속된 문자가 나타난다.
// acd, dea, eb, b는 연속된 문자가 아니다.
// 문자열로 주어진 패스워드에 대해서
// 연속된 3개의 문자들이 나타나는 첫 부분을 1로 나타내고
// 나머지 문자는 0으로 출력하는 프로그램을 작성하자.
// 그리고 연속되는 숫자의 첫부분도 1로 출력하자.
// 
// 실행 예시
// acdeb	//입력
// 01000	//출력 : cde는 연속된 숫자이므로, 첫부분인 c자리에 1을 출력
// 
// abc123	//입력
// 100100	//출력 : abc와 123은 연속된 문자이므로	, 첫부분인 a와 1자리에 1을 출력
// 
// aaaabc	//입력
// 000100	//출력 : aaa는 연속된 문자가 아니지만, abc는 연속된 문자이므로 abc의 첫부분인 a에 1을 출력
// 
// 1234444	//입력
// 1000000	//출력 : 123은 연속된 문자이므로, 첫부분인 1자리에 1을 출력

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_is_word_in_word(char w1[], int start);
int is_is_word_in_word(char w1[], int start)
{
	if (w1[start] + w1[start + 2] == w1[start + 1] * 2 && w1[start] != w1[start + 1] && w1[start] != w1[start + 2] && w1[start + 1] != w1[start + 2])
		return 1;
	else
		return 0;
}

int main(void)
{
	char passwd[20];

	scanf("%s", passwd);

	for (int i = 0; passwd[i] != '\0'; i++)
		printf("%d", is_is_word_in_word(passwd, i));

	return 0;
}
*/