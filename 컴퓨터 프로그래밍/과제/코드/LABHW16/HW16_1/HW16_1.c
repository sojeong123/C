//20201012 ��ǻ���а� �Ӽ���
//HW16_1
#include <stdio.h>
int main(void)
{
	int gugudan[9][9] = { 0 };
	int i, j, dan;

	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			gugudan[i][j] = (i + 2) * (j + 1);

	printf("--������ ǥ�� ������ �����ϴ�.\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%3d ", gugudan[i][j]);
		printf("\n");
	}

	printf("--���ϴ� ��������? ");
	scanf_s("%d", &dan);

	for (i = 0; i < 9; i++)
		printf("%3d ", gugudan[dan - 2][i]);
	printf("\n");

	return 0;
}