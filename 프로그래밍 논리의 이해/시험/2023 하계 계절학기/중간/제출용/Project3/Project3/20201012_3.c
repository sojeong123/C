//20201012 ��ǻ���а� �Ӽ���

//3��
#include <stdio.h>
int main(void)
{
	int n, i, j, sum = 0;

	printf("���� ���� �Է� : ");
	scanf_s("%d", &n);

	printf("\n%d�� ��� : ", n);

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

	printf("\n��� �� �Ҽ��� �� : %d\n", sum);
	return 0;
}