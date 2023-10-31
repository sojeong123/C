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

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing(char s[])
{
	// strlen을 사용하지않고, 매개변수로 받는 방법
	int i = 0;
	int max = 0;
	int count = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= s[i + 1])
		{
			count++;
		}
		else
		{
			if (max < count)
			{
				max = count;
			}
			count = 0;
		}
		i++;
	}
	return max + 1;
}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing(s));
}
*/


// 문자열(increasing sequence 2)
// 앞의 increasing sequenc 1에서는 최대 길이만 출력하였다.
// 최대길이의 increasing sequence도 출력하게 하라.
// 문자열을 매개변수로 하여 그 문자열 안에 최대 길이의
// increasing sequence를 출력하고 그 길이를 반환하는 함수인 maxIncreasing2를 작성하라.
// 
// 최대길이의 increasing sequence가 여러개일 경우,
// 가장 앞의 increasing sequence를 출력하라.
// 
// 실행 예시
// pabcabcdaaabcdcd	//입력 : 문자열
// aaabcd			//출력 : 최대 increasing sequence
// 6				//출력 : 최대increasing sequence의 길이
// 
// vxyzoabde			//입력 : 문자열
// vxyz				//출력 : vxyz와 abde중 앞의 것을 출력한다.
// 4				//출력 : 최대increasing sequence의 길이


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing2(char s[])
{
	// strlen을 사용하지않고, 매개변수로 받는 방법
	int i = 0;
	int max = 0;
	int count = 0;
	int start = 0;
	int end = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= s[i + 1])
		{
			count++;
		}
		else
		{
			if (max < count)
			{
				max = count;
				end = i;
				start = end - max;
			}
			count = 0;
		}
		i++;
	}
	for (int i = start; i <= end; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
	return max + 1;
}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing2(s));
}
