// 4��
#include <stdio.h>
int main(void)
{
	int i, j, count = 0;

	printf("10���� �Ҽ� ���: ");

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