//20201012 ��ǻ���а� �Ӽ���
//HW4_3_1
#include <stdio.h>
int xPower(int x, int y);
int main(void)
{
	int x, y;
	printf("Enter two numbers: ");
	scanf_s("%d %d", &x, &y);

	printf("%d�� %d���� %d�̴�.\n", x, y, xPower(x, y));
}

int xPower(int x, int y)
{
	if (y == 0)
		return 1;
	else
		return x * xPower(x, y - 1);
}