//20201012 컴퓨터학과 임소정
//HW4_2
#include <stdio.h>
int fibo(int n);
void main()
{
	int n, idx;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수) : ");
	scanf_s("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)		//한줄에 5개씩 출력
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