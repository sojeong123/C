// 3��
#include <stdio.h>
int main(void)
{
	int num1, num2, i, j, gcd;
	printf("�� ���� ������ �Է��ϼ���: ");
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
	printf("�ִ� �����: %d\n", gcd);
	return 0;
}