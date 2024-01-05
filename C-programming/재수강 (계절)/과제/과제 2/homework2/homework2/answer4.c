// 4번
#include <stdio.h>
int main(void)
{
	int i, j, count = 0;

	printf("10개의 소수 출력: ");

	for (i = 2; count < 10; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
			count++;
		}
	}
	return 0;
}