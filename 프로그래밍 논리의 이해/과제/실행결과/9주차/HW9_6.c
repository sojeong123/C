//20201012 ��ǻ���а� �Ӽ���
#include <stdio.h>
int main(void)
{
	int amount;
	int bread, cookie, cola;
	int total;

	printf("Enter �ݾ� : ");
	scanf_s("%d", &amount);

	for (bread = 1; bread * 500 <= amount; bread++)
	{
		for (cookie = 1; cookie * 700 <= amount; cookie++)
		{
			for (cola = 1; cola * 400 <= amount; cola++)
			{
				total = bread * 500 + cookie * 700 + cola * 400;

				if (total == amount)
					printf("�� : %d, ��Ű : %d, �ݶ� : %d\n", bread, cookie, cola);
			}
		}
	}

	return 0;
}