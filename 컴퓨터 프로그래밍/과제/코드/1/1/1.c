//20201012 컴퓨터학과 임소정
#include <stdio.h>
int main(void)
{
	int num, sum = 0;
	int i, j;
	int isPrime = 1;

	while (1)
	{
		scanf_s("%d", &num);
		if (num == -1)
			break;

		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1)
			sum += num;
		isPrime = 1;
	}
	printf("%d\n", sum);
	return 0;
}