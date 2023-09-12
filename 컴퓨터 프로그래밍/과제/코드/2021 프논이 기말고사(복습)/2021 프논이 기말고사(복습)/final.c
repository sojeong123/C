//20201012 컴퓨터학과 임소정
//2021 프논이 기말고사(복습)

/*
//1번 (10점)
//소수의 합(감시값 반복문) (난이도 하)

//-1이 나올 떄까지 정수(2이상의)를 반복적으로 읽어
//정수가 소수인 경우 합을 계산하려 한다.

//실행 예시
//2 3 4 5 6 7 8 9 -1 
//17

//11 22 33 -1
//11

//-1
//0

#include <stdio.h>
int main(void)
{
	int num, sum = 0;
	int i, j;
	int isPrime = 1;

	while (1)
	{
		scanf_s("%d", &num);
		if (num == -1)
			break;

		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1)
			sum += num;
		isPrime = 1;
	}
	printf("%d\n", sum);
	return 0;
}
*/

/*
//2번 (10점)
//단어 속 문자 위치(문자열) (난이도 하)

//문자열(크기가 20미만)을 입력받고
//key문자를 입력받은 후 key문자가
//이 문자열 안에 몇번째에 있는지를 출력하라.
//key문자가 문자열 안에 없는 경우 -1을 출력한다.
//key가 여러번 나오는 경우 가장 앞에 것에 대한 위치를 출력한다.

//실행 예시
//abcdefg c
//3

//abcdefg x
//-1

//힌트 : 
//문자열을 입력받기 위해 아래와 같이 선언하고 입력받는다.
//char s[20];
//char key;
//scanf("%s %c", s, &key);

#include <stdio.h>
int main(void)
{
	char s[20];
	char key;
	int i, j;
	int isKey = 0;

	scanf_s("%s %c", s, 20, &key, 1);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == key)
		{
			printf("%d\n", i+1);
			isKey = 1;
			break;
		}
	}
	if (isKey == 0)
		printf("-1");
	return 0;
}
*/

/*
//3번 (20점)
//상위하위 분류(배열) (난이도 중)
//배열의 개수 n(1이상 20이하)을 입력받고,
//n개의 정수를 입력받아서
//기준점수를 하나	 입력받아서
//그 기준점수 미만의 점수들을 먼저 출력한 후
//그 기준점수 이상의 점수들을 출력하라.
//점수들을 출력할 떄 입력받은 순서를 유지한다.

//실행 예시
//10
//2 9 3 8 4 7 5 6 1 10
//5

//2 3 4 1
//9 8 7 6 10

//출력할 떄 숫자 사이에 공백을 1개씩 둔다.
//기준점수 미만의 점수들을 출력한 후에 줄을 바꾼 후
//기준점수 이상의 점수들을 출력한다.

#include <stdio.h>
int main(void)
{
	int n;
	int i, j;
	int score[20];
	int key;

	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &score[i]);
	scanf_s("%d", &key);

	for (i = 0; i < n; i++)
	{
		if (score[i] < key)
			printf("%d ", score[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		if (score[i] >= key)
			printf("%d ", score[i]);
	}
	return 0;
}
*/


//4번
//숫자로 암호화
//대문자들에 대해서
//A는 1, B는 2, C는 3, ..., Z는 26으로 암호화한다.

//주어진 단어(대문자로 구성된)(크기가 20 미만)에 대해서 위의 매칭 방법대로 암호화하려한다.
//예를 들어 주어진 단어가 ABD면 암호화 결과는 124가 된다.
//가정 1. 단어는 대문자로만 이루어진다.

/*
//4-1 (20점)
//A부터 I까지 암호화 (난이도 중)
//아래의 가정을 추가한다.
//가정2. A(1로 매칭)부터 I(9로 매칭)까지의 문자로만 이루어진다.

//대문자로 이루어진 문자열s를 위의 암호화규칙을 적용하여
//숫자들로 된 문자열e로 변환하는 함수
//changeToDigitEncode(char s[], char e[])를 작성하라. 원형은 아래와 같다.
//void changeToDigitEncode(char s[], char e[]);

//실행 예시
//ABBA
//1221

//BIG
//297

#include <stdio.h>
void changeToDigitEncode(char s[], char e[])
{
	int i, j;
	for (i = 0; s[i] != '\0'; i++)
	{
		e[i] = s[i] - 64;
	}
	e[i] = '\0';
}
int main(void)
{
	char s[20];
	char e[20];

	scanf_s("%s", s, 20);
	changeToDigitEncode(s, e);
	printf("%s\n", e);
	return 0;
}
*/


//4-2 (15점)
//A부터 Z까지 암호화 (난이도 중)
//위의 4-1에서의 가정2를 아래와 같이 변경한다.
//가정2. A(1로 매칭)부터 Z(26로 매칭)까지의 문자로 이루어진다.

//A-Z의 문자로 이루어진 문자열s를 숫자들로된 문자열e로 변환하는 함수인
//changeToDigitEncode(char s[], char e[])를 작성하라.
//4-1의 뼈대코드를 이용하라.

//실행 예시
//AZ
//126

//BTS
//22019

#include <stdio.h>
void changeToDigitEncode(char s[], char e[])
{
	int i, j;
	for (i = 0; s[i] != '\0'; i++)
	{
		e[i] = s[i] - 65;
	}
	e[i] = '\0';
}
int main(void)
{
	char s[20];
	char e[20];

	scanf_s("%s", s, 20);
	changeToDigitEncode(s, e);
	printf("%s\n", e);
	return 0;
}