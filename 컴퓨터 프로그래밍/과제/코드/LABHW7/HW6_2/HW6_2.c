// 20201012 ��ǻ���а� �Ӽ���
// HW6_2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
	char str[MAX];
	int i, sum = 0;

	printf("Enter one word : ");
	scanf("%s", str);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			sum += str[i] - '0';
	}

	printf("�ȿ� �ִ� ���ڵ��� ���� %d\n", sum);
}