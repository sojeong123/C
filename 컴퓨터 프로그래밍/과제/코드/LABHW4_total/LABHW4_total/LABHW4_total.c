//LAB4_2
/*
#include <stdio.h>
int sum_rec(int);
void main()
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum_rec(n));
}

//재귀함수 이용
int sum_rec(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum_rec(n - 1);
}
*/

//LAB4_3
//피보나치 수열의 값을 출력하려 한다. 지시된 내용에 따라 작업을 수행하라.
//피보나치 수열은 다음과 같은 재귀적 정의에 의해 정해진다.
//F(n)=F(n-1)+F(n-2)
//F(0)=F(1)=1

/*
#include <stdio.h>
int fibo(int n);
int main(void)
{
	int n, idx;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수) : ");
	scanf_s("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)		//한줄에 5개씩 출력
			printf("\n");
	}
	printf("\n");
}

int fibo(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}
*/

//HW4_1 (static 변수 사용)
//아래와 같이 입금만을 처리하는 프로그램을 완성하라.
//main함수 외에 아래와 같은 prototype을 갖는 함수를 사용하라.
//void save(int money);

//실행 결과
//저금할 금액<-1 for exit>: 100
//현재까지의 입금액 100
//저금할 금액<-1 for exit>: 200
//현재까지의 입금액 300
//저금할 금액<-1 for exit>: 300
//현재까지의 입금액 600
//저금할 금액<-1 for exit>: -1
//입금 완료

//static 변수를 사용하라.
//감시값 제어반복문의 구조를 이용하라.

/*
#include <stdio.h>
void save(int money);
void main()
{
	int money;

	while (1)
	{
		printf("저금할 금액<-1 for exit>: ");
		scanf_s("%d", &money);
		if (money == -1)
			break;
		save(money);
	}
	printf("입금 완료\n");
}

void save(int money)
{
	static int sum = 0;
	sum += money;
	printf("현재까지의 입금액 %d\n", sum);
}
*/

//HW4_2
//재귀 함수를 사용하지 않고 다시 프로그램하라.
//즉, main함수는 그대로 두고 함수 fibo만 변경하라.

/*
#include <stdio.h>
int fibo(int n);
void main()
{
	int n, idx;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수) : ");
	scanf_s("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)		//한줄에 5개씩 출력
			printf("\n");
	}
	printf("\n");
}

int fibo(int n)
{
	int i, a = 1, b = 1, c;

	if (n == 0 || n == 1)
		return 1;
	else
	{
		for (i = 2; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}
*/

//HW4_3_0
//2의 n승을 구하는 함수를 재귀적으로 구현하자.

/*
#include <stdio.h>
int twoPower(int x);
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);

	printf("2의 %d승은 %d이다.\n", n, twoPower(n));
}

int twoPower(int x)
{
	if (x == 0)
		return 1;
	else
		return 2 * twoPower(x - 1);
}
*/

//HW4_3_1
//x의 y승을 구하는 함수를 재귀적으로 구현하자.

/*
#include <stdio.h>
int xPower(int x, int y);
int main(void)
{
	int x, y;
	printf("Enter two numbers: ");
	scanf_s("%d %d", &x, &y);

	printf("%d의 %d승은 %d이다.\n", x, y, xPower(x, y));
}

int xPower(int x, int y)
{
	if (y == 0)
		return 1;
	else
		return x * xPower(x, y - 1);
}
*/

//HW4_4
//수학에서 조합은 n개에서 r개를 뽑는 가지 수이다.
//조합은 아래와 같이 재귀적으로 정의한다.
//조합의 가지수를 구하는 함수를 comb라고 하자.
//아래의 정의를 보고 comb함수를 recursion을 이용하여 완성하시오.
///nCr = 1(if r = 0 or r = n)
//=n-1Cr-1 + n-1Cr

/*
#include<stdio.h>
int comb(int n, int r)
{
if (r == 0 || r == n)
		return 1;
	else
		return comb(n - 1, r - 1) + comb(n - 1, r);
}

int main(void)
{
	int n, r;

	printf("Enter n and r: ");
	scanf_s("%d %d", &n, &r);
	printf("%d", comb(n, r));
	return 0;
}
*/

//HW4_5_1 (반복)
//어떤 정수 n이 짝수이면 2로 나누고 홀수이면 3을 곱한 후 1을 더한다.
//이렇게 해서 새로 만들어진 숫자 n으로 놓고 n=1이 될때까지 같은 작업을 반복한다.
//예를 들어 n=22이면 다음과 같은 수열이 만들어진다.
//22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

//이 때 1이 나올 때까지 만들어진 수의 개수를 (n과 1포함) 사이클 길이라 한다.
//예를 들어 n=22인 경우엔느 사이클 길이가 16이다(15아니다).
//특정한 수를 파라미터로 받아, 위와 같은 수열을 출력하고 사이클 길이를 리턴해주는 함수를 반복문을 이용하여 작성하시오.
//함수의 원형은 int get_cycle_number(int n)이다.

/*
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);

	printf("사이클 길이는 %d이다.\n", get_cycle_number(n));
}

int get_cycle_number(int n)
{
	int cnt = 1;
	while (n != 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		cnt++;
	}
	return cnt;
}
*/

//HW4_5_2 (재귀)
//HW4_5_1에서의 get_cycle_number(int n)함수를 순환을 이용하여 작성하라.
//get_cycle_number함수 안에서 지역변수를 사용하지 마시오.

/*
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);

	printf("사이클 길이는 %d이다.\n", get_cycle_number(n));
}

int get_cycle_number(int n)
{
	static int cnt = 1;
	if (n == 1)
		return cnt;
	else
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		cnt++;
		return get_cycle_number(n);
	}
}
*/

//Challenge4_1
//두 정수의 최대공약수를 구하는 함수를 반복문을 이용하여 작성하라.
//유클리드 호제법을 이용한다!
//a를 b로 나누었을 때 몫이 q이고 나머지가 r이면,
//a와 b의 최대공약수는 b와 r의 최대공약수와 같다.
//R이 0인 경우 최대공약수는 b이다.

//즉, a = 27, b = 15라 할 때,
//27 % 15 = 12
//15 % 12 = 3
//12 % 3 = 0	//그러므로 3이 최대공약수다.

/*
#include <stdio.h>
int gcd(int x, int y);
int main(void)
{
	int a, b, big, small;

	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);

	if (a < b)
	{
		big = b;
		small = a;
	}
	else
	{
		big = a;
		small = b;
	}

	printf("%d와 %d의 최대공약수는 %d\n", a, b, gcd(big, small));
}

int gcd(int x, int y)
{
	int r;
	while (1)
	{
		r = x % y;
		if (r == 0)
			return y;
		else
		{
			x = y;
			y = r;
		}
	}
}
*/

//Challenge4_2
//두 정수의 최대공약수를 구하는 함수를 재귀함수를 이용하여 작성하라.
//위의 Challenge4_1에서 함수gcd만 변경하면 된다.

/*
#include <stdio.h>
int gcd(int x, int y);
int main(void)
{
	int a, b, big, small;

	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);

	if (a < b)
	{
		big = b;
		small = a;
	}
	else
	{
		big = a;
		small = b;
	}

	printf("%d와 %d의 최대공약수는 %d\n", a, b, gcd(big, small));
}

int gcd(int x, int y)
{
	int r;
	r = x % y;
	if (r == 0)
		return y;
	else
		return gcd(y, r);
}
*/

//Project1
//아래의 두 함수 isSetEqual과 addOneElement, printSet를 정의하여, 아래처럼 실행결과가 나오게 하라.
//isSetEqual과 addOneElement를 정의할 때, 주어진 함수 hasElement를 사용하라.

//실행 결과
//A : <1, 2, 3>
//B : <3, 2, 1, 4>
//집합 A와 B는 다르다.
//
//A에 3을 추가하면
//It is redundant. Please retry.
//집합 A : <1, 2, 3>
//A에 4를 추가하면
//집합 A : <1, 2, 3, 4>
//집합 A와 B는 같다.

/*
#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0
#include <stdio.h>

//집합을 출력한다.
void printSet(int set[], int size)
{
	int i;
	printf("<");
	for (i = 0; i < size; i++)
		printf("%d ", set[i]);
	printf(">\n");
}

// setA 와 setB 가 같으면 1 을 다르면 0 을 반환한다.
int isSetEqual(int set1[], int size1, int set2[], int size2)
{
	int i;
	if (size1 != size2)
		return 0;
	for (i = 0; i < size1; i++)
		if (!hasElement(set2, size2, set1[i]))
			return 0;
	return 1;
}

//원소가 집합에 존재하지 않으면 추가, 이미 존재하면 redundant라고 출력하고, 현재 집합 크기를 반환
int addOneElement(int set[], int size, int element)
{
	if (hasElement(set, size, element))
	{
		printf("It is redundant. Please retry.\n");
		return size;
	}
	else
	{
		set[size] = element;
		size++;
		return size;
	}
}

// set 에 element 가 있으면 1 을 없으면 0 을 반환한다
int hasElement(int set[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
		if (set[i] == element)
			return HAVE_ELEMENT; // we found it!
	return DO_NOT_HAVE_ELEMENT;
}

int main(void)
{
	int setA[MAX_SET_SIZE] = { 1, 2, 3 };
	int setB[MAX_SET_SIZE] = { 3, 2, 1, 4 };
	int num;
	int sizeA = 3, sizeB = 4;
	printf("A:"); printSet(setA, sizeA);
	printf("B:"); printSet(setB, sizeB);
	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("집한 A 와 B 는 같다\n");
	else
		printf("집한 A 와 B 는 다르다\n\n");
	printf("A 에 3 을 추가하면\n");
	sizeA = addOneElement(setA, sizeA, 3); // 3 을 SetA 에 추가한다
	printf("집합 A:"); printSet(setA, sizeA);
	printf("A 에 4 를 추가하면\n");
	sizeA = addOneElement(setA, sizeA, 4); // 4 를 SetA 에 추가한다
	printf("집합 A:"); printSet(setA, sizeA);
	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("집한 A 와 B 는 같다\n");
	else
		printf("집한 A 와 B 는 다르다\n");
}
*/