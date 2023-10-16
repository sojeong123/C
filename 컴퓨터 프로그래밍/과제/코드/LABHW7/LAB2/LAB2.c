// 20201012 컴퓨터학과 임소정
// LAB2 (재귀)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void to_binary(int n);

void main()
{
	int n;
	printf("");
	scanf("%d", &n);
	to_binary(n);
	printf("\n");
}

void to_binary(int n)
{
	if (n == 0)
		return;
	else
	{
		to_binary(n / 2);
		printf("%d", n % 2);
	}
}