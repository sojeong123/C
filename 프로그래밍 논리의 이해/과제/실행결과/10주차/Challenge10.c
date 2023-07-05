//20201012 ��ǻ���а� �Ӽ���
#include <stdio.h>
void printFibo(int n);
int main(void)
{
	int num, i;
	printf("��� �Ǻ���ġ �������� ����ұ��? (3���� ū ����): ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
		printFibo(i);

	printf("\n");

	return 0;
}

void printFibo(int n)
{
	int i, fibo1 = 1, fibo2 = 1, fibo;

	if (n == 0 || n == 1) {
		printf("%d ", fibo1);
		return;
	}

	for (i = 2; i <= n; i++) {
		fibo = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fibo;
	}

	printf("%d ", fibo);
}