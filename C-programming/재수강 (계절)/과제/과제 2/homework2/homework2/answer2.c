// 2��
#include <stdio.h>
int main(void)
{
	int num1, num2, i, j;
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		for (i = num2; i <= num1; i++)
		{
			for (j = 1; j <= 9; j++)
			{
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
	else
	{
		for (i = num1; i <= num2; i++)
		{
			for (j = 1; j <= 9; j++)
			{
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
	return 0;
}