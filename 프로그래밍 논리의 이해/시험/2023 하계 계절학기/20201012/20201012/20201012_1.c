//20201012 ��ǻ���а� �Ӽ���
#include<stdio.h>
int main(void)
{
	int num, sum = 0, cnt = 0;

	while (1)
	{
		printf("0���� ū(%d��°) �� �Է� : ", cnt + 1);
		scanf_s("%d", &num);

		if (num <= 0)
		{
			continue;
		}

		sum += num;
		cnt++;

		if (sum >= 50)
		{
			break;
		}
	}

	printf("�� = %d\n", sum);
	printf("������ �������� �� = %d\n", cnt);

	return 0;
}