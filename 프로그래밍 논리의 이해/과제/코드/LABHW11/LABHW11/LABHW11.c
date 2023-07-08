//LAB11_0_1
/*
#include <stdio.h>
int square1(void);
int main(void)
{
	int result;
	result = square1();
	printf("제곱은 %d.\n", result);
	return 0;
}

int square1(void)
{
	int x = 5;
	return x * x;
}
*/

//LAB11_0_2
/*
#include <stdio.h>
int main(void)
{
	int result;
	result = square2(5);
	printf("제곱은 %d.\n", result);
}

int square2(int x)
{
	return x * x;
}
*/

//LAB11_1
/*
#include <stdio.h>
int sum1ToN(int n);
int main(void)
{
	printf("1부터 5 까지의 합은 %d.\n", sum1ToN(5));
	printf("1부터 7 까지의 합은 %d.\n", sum1ToN(7));
	printf("1부터 10 까지의 합은 %d.\n", sum1ToN(10));
}

int sum1ToN(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}
*/

//LAB11_2
/*
#include <stdio.h>
int power(int a, int b);
int main(void)
{
	int x, y;
	printf("Enter the number X : ");
	scanf_s("%d", &x);
	printf("Enter the number Y : ");
	scanf_s("%d", &y);
	printf("%d ^ %d == %d\n", x, y, power(x, y));
}

int power(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
		result *= a;
	return result;
}
*/

//LAB11_3
/*
#include <stdio.h>
int scoreReading(void);
char gradeDecision(int s1);
int main(void)
{
	int score;
	score = scoreReading();
	printf("Grade is %c!\n", gradeDecision(score));
}

int scoreReading(void)
{
	int score;
	printf("Enter a score : ");
	scanf_s("%d", &score);
	return score;
}

char gradeDecision(int s1)
{
	if (s1 >= 80)
		return 'A';
	else if (s1 >= 50)
		return 'B';
	else
		return 'F';
}
*/

//HW11_1
/*
#include <stdio.h>
int sumMToN(int m, int n);
int main(void)
{
	printf("%d부터 %d까지의 합은 %d.\n", 2, 5, sumMToN(2, 5));
	printf("%d부터 %d까지의 합은 %d.\n", 3, 7, sumMToN(3, 7));
	printf("%d부터 %d까지의 합은 %d.\n", 2, 10, sumMToN(2, 10));
}

int sumMToN(int m, int n)
{
	int sum = 0;
	for (int i = m; i <= n; i++)
		sum += i;
	return sum;
}
*/

//HW11_2
/*
#include <stdio.h>
int power(int a, int b);
int main(void)
{
	for (int i = 0; i <= 10; i++)
		printf("5 ^ %d == %d\n", i, power(5, i));
}

int power(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
		result *= a;
	return result;
}
*/

//HW11_3
/*
#include <stdio.h>
int scoreReading(void);
char gradeDecision(int s1, int s2);
int main(void)
{
	int score1, score2;
	score1 = scoreReading();
	score2 = scoreReading();
	printf("Grade is %c!\n", gradeDecision(score1, score2));
}

int scoreReading(void)
{
	int s;
	printf("Enter a score : ");
	scanf_s("%d", &s);
	return s;
}

char gradeDecision(int s1, int s2)
{
	int average;
	char grade;

	average = (s1 + s2) / 2;

	if (average >= 80)
		grade = 'A';
	else if (average >= 50)
		grade = 'B';
	else
		grade = 'F';

	return grade;
}
*/

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

//HW9_다(revisited)
/*
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int n;

	while (1)
	{
		printf("Enter a number : ");
		scanf_s("%d", &n);

		if (n == -1)
			break;

		printf("길이는 %d.\n", get_cycle_number(n));
	}
}

int get_cycle_number(int num)
{
	int count = 1;

	while (num != 1)
	{
		printf("%d ", num);
		if (num % 2 == 0)
			num /= 2;
		else
			num = num * 3 + 1;
		count++;
	}

	printf("%d\n", num);
	return count;
}
*/