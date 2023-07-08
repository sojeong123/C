//20201012 컴퓨터학과 임소정

//HW11_4_0
/*
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int isPrime = 1;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	if (isPrime == 1)
		printf("소수입니다.\n");
	else
		printf("소수가 아닙니다.\n");

	return 0;
}
*/

//HW11_4_1
//단계 1
/*
#include <stdio.h>
int isPrime(int num);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf_s("%d", &num);

	if (isPrime(num) == 1)
		printf("소수입니다.\n");
	else
		printf("소수가 아닙니다.\n");

	return 0;
}

int isPrime(int num)
{
	int i;
	int isPrime = 1;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	return isPrime;
}
*/

//단계 2
/*
#include <stdio.h>
int isPrime(int num);
int main(void)
{
	int num;
	printf("Enter a number<-1 for exit> : ");
	scanf_s("%d", &num);

	while (num != -1)
	{
		if (isPrime(num) == 1)
			printf("소수입니다.\n");
		else
			printf("소수가 아닙니다.\n");

		printf("Enter a number<-1 for exit> : ");
		scanf_s("%d", &num);
	}

	return 0;
}

int isPrime(int num)
{
	int i;
	int isPrime = 1;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	return isPrime;
}
*/