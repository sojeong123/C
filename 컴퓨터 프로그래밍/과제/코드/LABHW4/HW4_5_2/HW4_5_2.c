//20201012 ��ǻ���а� �Ӽ���
//HW4_5_2
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);

	printf("����Ŭ ���̴� %d�̴�.\n", get_cycle_number(n));
}

int get_cycle_number(int n)
{
	static int cnt = 1;
	if (n == 1)
		return cnt;
	else
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		cnt++;
		return get_cycle_number(n);
	}
}