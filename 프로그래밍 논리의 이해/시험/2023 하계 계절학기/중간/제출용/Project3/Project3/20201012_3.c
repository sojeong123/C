//20201012 컴퓨터학과 임소정

//3번
#include <stdio.h>
int main(void)
{
	int n, i, j, sum = 0;

	printf("양의 정수 입력 : ");
	scanf_s("%d", &n);

	printf("\n%d의 약수 : ", n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			for (j = 2; j <= i; j++)
			{
				if (i % j == 0)
				{
					if (i == j)
					{
						sum += i;
					}
					else
					{
						break;
					}
				}
			}
		}
	}

	printf("\n약수 중 소수의 합 : %d\n", sum);
	return 0;
}