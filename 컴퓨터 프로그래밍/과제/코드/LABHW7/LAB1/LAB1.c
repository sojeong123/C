// 20201012 컴퓨터학과 임소정
// LAB1 (재귀)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int n);

void main()
{
	int n;
	printf("");
	scanf("%d", &n);
	printf("%d", sum(n));
}

int sum(int n)
{
	if (n == 1)
		return 12;
	else
		return sum(n - 1) + n * 10 + 2;
}