//20201012 컴퓨터학과 임소정
#include <stdio.h>
int isPalindrom(int a);
int main(void)
{
	int num;

	printf("2자리 이상의 정수를 입력하시오. : ");
	scanf_s("%d", &num);

	if (isPalindrom(num) == 1)
	{
		printf("%d은 회문이다.\n", num);
	}
	else
	{
		printf("%d은 회문이 아니다.\n", num);
	}

	return 0;
}

int isPalindrom(int a)
{
	int i, j, k, cnt = 0;
	int arr[10] = { 0 };

	for (i = 0; i < 10; i++)
	{
		arr[i] = a % 10;
		a /= 10;
		if (a == 0)
		{
			break;
		}
	}

	for (j = 0; j <= i; j++)
	{
		if (arr[j] == arr[i - j])
		{
			cnt++;
		}
	}

	if (cnt == i + 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}