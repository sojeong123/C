
// 10
// (문자열)
// 9번을 참고하여 다음과 같이 동작하는 프로그램을 작성하라.
// 주어진 문자열에 대해서 앞에서부터 문자 2개의 단위로 잘랐을 때 반복되는 것을 압축하여 표현하여 그 문자열과 길이를 출력하는 프로그램을 작성하라.
// 예를들어 "abababmnxyxy"의 경우, 2개 단위로 잘라서 압축한다면 "3abmn2xy"가 압축된 문자열이고 그 길이는 8이다.
// 
// 실행	예시
// abababxyz 		<-- 입력
// 3abxyz			<-- 출력 : 압축된 문자열 ab/ab/ab/xy/z
// 6				<-- 출력
// 
// aaaa				<-- 입력
// 4aa				<-- 출력 : 압축된 문자열 aa/aa
// 3				<-- 출력
// 
// xabab 			<-- 입력
// xabab				<-- 출력 : 압축된 문자열 x/ab/ab/b
// 5				<-- 출력
// 
// 제한사항
// 1. s의 길이는 1이상 1000미만이다.
// 2. s는 알파벳 소문자로만 구성되어 있다.
// 3. 중복되는 문자의 개수는 10미만이라고 하자(이는 프로그램을 쉽게 하기 위함이다.).


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[1001];

	scanf("%s", s);
	printf("\n%d\n", solution2(s));
}

int solution2(char* s)
{
	int answer = 0;
	int len = strlen(s);
	int i, j, k, l;
	int count = 1;
	int flag = 0;
	int temp = 0;
	char* temp_s = (char*)malloc(sizeof(char) * 1001);
	char* temp_s2 = (char*)malloc(sizeof(char) * 1001);

	for (i = 1; i <= len / 2; i++)
	{
		for (j = 0; j < len; j += i)
		{
			for (k = 0; k < i; k++)
			{
				temp_s[k] = s[j + k];
			}
			temp_s[k] = '\0';

			for (l = j + i; l < len; l += i)
			{
				for (k = 0; k < i; k++)
				{
					temp_s2[k] = s[l + k];
				}
				temp_s2[k] = '\0';

				if (strcmp(temp_s, temp_s2) == 0)
				{
					count++;
					flag = 1;
				}
				else
				{
					flag = 0;
					break;
				}
			}

			if (flag == 1)
			{
				temp += i;
				temp += (int)log10(count) + 1;
				count = 1;
			}
			else
			{
				temp += i;
			}
		}

		if (answer == 0)
		{
			answer = temp;
		}
		else if (answer > temp)
		{
			answer = temp;
		}

		temp = 0;
	}

	return answer;
}