//20201012 ��ǻ���а� �Ӽ���
//LAB4_2
#include <stdio.h>
int sum_rec(int);
void main()
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum_rec(n));
}

//����Լ� �̿�
int sum_rec(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum_rec(n - 1);
}