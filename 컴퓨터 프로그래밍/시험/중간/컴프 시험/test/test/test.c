// 문자열 (increasing sequence)
// 문자가 abcdf처럼 알파벳 순으로 이루어진 것을
// increasing sequence라고 한다.
// 즉, 선행 알파벳의 ascii값과 같거나, 더 큰 알파벳이 뒤에 나오는 sequence이다.
// 이런 정의에 의하면,
// baf는 increasing sequence가 아니다.
// 
// 길이가 50미만인 문자열을 읽어서,
// 그 문자열 안에서 연속적으로 나타내는 최대 길이의 increasing sequence를 찾는 문제다.
// 문자열을 매개변수로 하여 그 문자열 안에 최대 길이의 increasing sequence를 반환하는 함수인 maxIncreasing을 작성하라.
// 
// pabcabcdaaabcdcd의 경우,
// p abc abcd aaabcd가 increasing sequence가 되며,
// 이 중 가장 긴 것은 aaabcd이다.
// increasing sequence의 최대 길이를 출력한다.
// 
// 실행 예시
// pabcabcdaaabcdcd		// 입력: 문자열
// 6					// 출력: 최대 increasing sequence의 길이
// 
// crwyzabd				// 입력: 문자열
// 5					// 출력: 최대 increasing sequence의 길이


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//strlen을 이용하는 방법
int maxIncreasing(char s[])
{
	int i, j, k, len, max = 0;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			for (k = i; k < j; k++)
			{
				if (s[k] >= s[k + 1])
					break;
			}
			if (k == j)
			{
				if (max < j - i + 1)
					max = j - i + 1;
			}
		}
	}
	return max;
}

//strlen을 이용하지 않는 방법
/*
int maxIncreasing(char s[])
{
	int i, j, k, max = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i + 1; s[j] != '\0'; j++)
		{
			for (k = i; k < j; k++)
			{
				if (s[k] >= s[k + 1])
					break;
			}
			if (k == j)
			{
				if (max < j - i + 1)
					max = j - i + 1;
			}
		}
	}
	return max;
}
*/

//strlen을 이용하지 않고, 문자열의 길이를 매개변수로 받는 방법
int maxIncreasing(char s[])
{
int i, j, k, max = 0;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = i + 1; j < strlen(s); j++)
		{
			for (k = i; k < j; k++)
			{
				if (s[k] >= s[k + 1])
					break;
			}
			if (k == j)
			{
				if (max < j - i + 1)
					max = j - i + 1;
			}
		}
	}
	return max;
}
*/ 

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing(s));
}