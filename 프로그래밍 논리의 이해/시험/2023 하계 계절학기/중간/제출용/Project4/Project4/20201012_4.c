//20201012 ��ǻ���а� �Ӽ���

//4��
#include <stdio.h>
int main(void)
{
	int i, j, n;

	printf("��� �Է� : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= i)
				printf("*");
			else
				printf("@");
		}
		printf("\n");
	}

	return 0;
}