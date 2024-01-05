// 3번
#include <stdio.h>
int main(void)
{
	int num1, num2, i, j, gcd;
	printf("두 개의 정수를 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		for (i = 1; i <= num2; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				gcd = i;
			}
		}
	}
	else
	{
		for (i = 1; i <= num1; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				gcd = i;
			}
		}
	}
	printf("최대 공약수: %d\n", gcd);
	return 0;
}