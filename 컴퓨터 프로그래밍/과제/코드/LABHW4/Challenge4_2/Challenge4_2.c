//20201012 컴퓨터학과 임소정
//Challenge4_2
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