//20201012 ��ǻ���а� �Ӽ���
//HW4_2
#include <stdio.h>
int fibo(int n);
void main()
{
	int n, idx;

	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����) : ");
	scanf_s("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)		//���ٿ� 5���� ���
			printf("\n");
	}
	printf("\n");
}

int fibo(int n)
{
	int i, a = 1, b = 1, c;

	if (n == 0 || n == 1)
		return 1;
	else
	{
		for (i = 2; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}