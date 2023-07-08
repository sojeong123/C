//20201012 컴퓨터학과 임소정
//HW(메르센소수)
/*
#include <stdio.h>
long long twoToThePower(int n);
int isPrime(long long x);

long long twoToThePower(int n)
{
	long long result = 1;
	for (int i = 0; i < n; i++)
		result *= 2;
	return result;
}

int isPrime(long long x)
{
	int i;
	int isPrime = 1;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	return isPrime;
}

int main(void)
{
	int n;
	long long m;
	printf("Enter a number : ");
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		m = twoToThePower(i) - 1;
		if (isPrime(m) == 1)
			printf("(2^%d -1) = %lld은 메르센 소수이다.\n", i, m);
	}

	return 0;
}
*/