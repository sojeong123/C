/*
//논리1 : 1부터 n까지의 합을 계산(1+2+3+...+n)
#include <stdio.h>
int main(void)
{
	int i, n, sum = 0;

	printf("n의 값을 입력하세요 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		sum += i;

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	return 0;
}
*/

/*
//논리2 : 1부터 n까지의 곱을 계산(1*2*3*...*n)
#include <stdio.h>
int main(void)
{
	int i, n, mul = 1;

	printf("n의 값을 입력하세요 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		mul *= i;

	printf("1부터 %d까지의 곱은 %d입니다.\n", n, mul);
	return 0;
}
*/

/*
//논리3 : 3을 n번 더함(3+3+3+...+3)
#include <stdio.h>
int main(void)
{
	int i, n, sum = 0;

	printf("n의 값을 입력하세요 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		sum += 3;

	printf("3을 %d번 더한 값은 %d입니다.\n", n, sum);
	return 0;
}
*/

/*
//논리4 : 5를 n번 곱함(5*5*5*...*5)
#include <stdio.h>
int main(void)
{
	int i, n, mul = 1;

	printf("n의 값을 입력하세요 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)		//"for (i = 0; i < n; i++)"로 해도 됨
		mul *= 5;

	printf("5를 %d번 곱한 값은 %d입니다.\n", n, mul);
	return 0;
}
*/

/*
//논리5 : n개의 점수를 읽어서 총점을 계산,
//평균을 계산(점수1 + 점수2 + ... + 점수n)
#include <stdio.h>
int main(void)
{
	int i, n, score, sum = 0;
	double avg;

	printf("몇 개의 점수를 입력하시겠습니까? ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("점수를 입력하세요 : ");
		scanf("%d", &score);
		sum += score;
	}

	avg = (double)sum / n;
	printf("총점은 %d이고, 평균은 %.1lf입니다.\n", sum, avg);
	return 0;
}
*/

/*
//논리6 : n개의 점수를 읽어서 최대값을 찾는다.
//(점수1, 점수2, ..., 점수n 중 가장 큰 값)
#include <stdio.h>
int main(void)
{
	int i, n, score;
	//max = 아주 작은 값;
	int max = -2147483647;		//int형의 최소값
	i = 0;
	while (i < n)
	{
		printf("점수를 입력하세요 : ");
		scanf("%d", &score);
		if (score > max)
			max = score;
		i++;
	}
	printf("최대값은 %d입니다.\n", max);
	return 0;
}
*/

/*
//논리6-1 : n개의 점수를 읽어서, 최대값과 최소값을 찾는다.
#include <stdio.h>
int main(void)
{
	int i, n, score;
	int max = -2147483647;		//int형의 최소값
	int min = 2147483647;		//int형의 최대값
	i = 0;
	while (i < n)
	{
		printf("점수를 입력하세요 : ");
		scanf("%d", &score);
		if (score > max)
			max = score;
		if (score < min)
			min = score;
		i++;
	}
	printf("최대값은 %d이고, 최소값은 %d입니다.\n", max, min);
	return 0;
}
*/

/*
//논리7 : n의 약수를 찾아 출력한다.
#include <stdio.h>
int main(void)
{
	int i, n;

	printf("n의 값을 입력하세요 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}
*/

/*
//논리8 : n이 소수인지 아닌지를 판별한다.(소수이다 아니다를 출력)
//n이 소수인 경우는 1을 아니면 0을 반환하는 함수 isPrime(int n)을 정의하라.
#include <stdio.h>
int isPrime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int n;

	printf("n의 값을 입력하세요 : ");
	scanf("%d", &n);

	if (isPrime(n) == 1)
		printf("%d는 소수입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);
	return 0;
}
*/

/*
int isPrime(int n)
{
	int prime = 1;

	if(n<2) return 0;		/n이 1일때
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return 0;		/n이 2이상일때
}
*/

/*
//논리8 : n이 소수인지 아닌지를 판별한다.(소수이다 아니다를 출력)
//n이 소수인 경우는 1을 아니면 0을 반환하는 함수 isPrime(int n)을 정의하라.
#include <stdio.h>
int main(void)
{
	int i, n, prime;
	prime = 1;		//소수라고 일단 설정
	
	//i <- 2.. (n-1)
	
	if (n % i == 0)
		prime = 0;	//소수가 아님
	break;

	if (prime)
		printf("%d는 소수입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);
	return 0;
}
*/

//isPrime(int n), 나누는 수가 n과 같아진다면 소수인 점을 이용하는 방법

//논리8 : n이 소수인지 아닌지를 판별한다. (소수이다 아니다를 출력)

/*
//1번째 방법 : 약수의 개수를 세어서 2개이면 소수인 점을 이용하는 방법
//isPrime함수를 사용하지 않는다.
#include <stdio.h>
int main(void)
{
	int i, n, cnt = 0;

	printf("n의 값을 입력하세요 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cnt++;
	}
	if (cnt == 2)
		printf("%d는 소수입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);
	return 0;
}
*/

/*
//2번째 방법 : 나누는 수가 n과 같아진다면 소수인 점을 이용하는 방법
//isPrime함수를 사용하지 않는다.
#include <stdio.h>
int main(void)
{
	int i, n;

	printf("n의 값을 입력하세요 : ");
	scanf("%d", &n);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			break;
	}
	if (i == n)
		printf("%d는 소수입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);
	return 0;
}
*/

/*
//3번째 방법 : isPrime함수를 사용한다.
//isPrime함수를 사용한다.
#include <stdio.h>
int isPrime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int n;

	printf("n의 값을 입력하세요 : ");
	scanf("%d", &n);

	if (isPrime(n) == 1)
		printf("%d는 소수입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);
	return 0;
}
*/


//교수의 답변//
/*
//방법 1 : prime변수 이용
int prime = 1;
for (int i = 2; i < n; i++)
{
	if (n % i == 0)
		prime = 0;
	break;
}

if (prime)
	printf("%d는 소수입니다.\n", n);
else
	printf("%d는 소수가 아닙니다.\n", n);
*/

/*
//방법 2 : prime변수 이용하지 않음.
for(i=2; i<n; i++)
{
	if(n%i==0)
		break;
}

if(i==n)
	printf("%d는 소수입니다.\n", n);
else
	printf("%d는 소수가 아닙니다.\n", n);
*/


//방법 3 : 약수의 개수를 세어서 2개이면 소수인 점을 이용하는 방법
//<참고 : 효율성 가장 안 좋음.>
/*
int count = 0;
for (int i = 1; i <= n; i++)
{
	if (n % i == 0)
		count++;
}

if (count == 2)
	printf("%d는 소수입니다.\n", n);
else
	printf("%d는 소수가 아닙니다.\n", n);
*/

//방법 4 : Prime함수를 사용한다.
/*
