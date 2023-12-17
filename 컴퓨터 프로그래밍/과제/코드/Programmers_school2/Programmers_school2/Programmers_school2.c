// 프로그래머스 스쿨 기말 사전 연습
// 필기 테스트
// 1
/*
#include <stdio.h>
int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	printf("%d\n", arr[0]);
	printf("\n");
}
*/

// 2
/*
#include<stdio.h>
int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; i += 2)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");
}
*/

// 3
/*
#include <stdio.h>
int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	printf("%d\n", arr[0]);
	printf("\n");
}
*/

// 4
/*
#include<stdio.h>
int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; i += 2)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");
}
*/

// 실습 테스트
// 1
// (빈칸 넣기 문제)
// 문자열을 읽어서 그 길이를 출력하는 프로그램을 완성하라.
// 
// 실행 예시
// abc			<-- 입력 : 문자열
// 3			<-- 출력 : 문자열의 길이

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int strLength(char* str) {
	char* p = str;
	int len = 0;

	while(*p) {
		len++;
		p++;
	}

	return len;
}
int main(void)
{
	char  str[20];

	scanf("%s", str);
	printf("%d\n", strLength(str));
}
*/