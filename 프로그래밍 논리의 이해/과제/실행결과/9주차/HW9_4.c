//20201012 ��ǻ���а� �Ӽ���
#include <stdio.h>
int main(void)
{
	int count = 1;
	int num = 2;
	int prime = 1;

	do
	{
		prime = 1;
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				prime = 0;
				break;
			}
		}

		if (prime == 1)
		{
			printf("%d��° �Ҽ� %d\n", count, num);
			count++;
		}

		num++;
	} while (count <= 10);

	return 0;
}