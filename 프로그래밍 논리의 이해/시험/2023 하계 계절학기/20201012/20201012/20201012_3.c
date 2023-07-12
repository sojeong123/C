//20201012 컴퓨터학과 임소정
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int isPrime(int a);
int main(void)
{
	int n, i, j, cnt = 0;
	int arr[50] = { 0 };
	int prime[50] = { 0 };

	srand(time(NULL));

	printf("Enter the number : ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 90 + 10;
	}

	printf("\n=== 원본 데이터 출력 ===\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		if ((i + 1) % 7 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");

	printf("=== 소수 데이터 출력 ===\n");
	for (i = 0; i < n; i++)
	{
		if (isPrime(arr[i]) == 1)
		{
			prime[cnt] = arr[i];
			cnt++;
		}
	}

	if (cnt == 0)
	{
		printf("소수가 없다.\n");
	}
	else
	{
		for (i = 0; i < cnt; i++)
		{
			printf("%d ", prime[i]);
			if ((i + 1) % 7 == 0)
			{
				printf("\n");
			}
		}
		printf("\n");
	}

	return 0;
}

int isPrime(int a)
{
	int i;

	if (a == 1)
	{
		return 0;
	}

	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}

	return 1;
}