// ���α׷��ӽ� ���� �⸻ ���� ����
// �ʱ� �׽�Ʈ
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

// �ǽ� �׽�Ʈ
// 1
// (��ĭ �ֱ� ����)
// ���ڿ��� �о �� ���̸� ����ϴ� ���α׷��� �ϼ��϶�.
// 
// ���� ����
// abc			<-- �Է� : ���ڿ�
// 3			<-- ��� : ���ڿ��� ����

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