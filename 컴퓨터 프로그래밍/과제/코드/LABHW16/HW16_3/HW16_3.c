//20201012 ��ǻ���а� �Ӽ���
//HW16_3
#include <stdio.h>
int main(void)
{
	int gradeTable[5][4] = { {10, 15, 20, 0}, {30, 35, 20, 0}, {60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0} };
	int i, j;

	printf("a>\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d ", gradeTable[i][j]);
		printf("\n");
	}

	printf("\nb>\n");
	for (i = 0; i < 5; i++)
		gradeTable[i][3] = 0;

	for (i = 0; i < 4; i++)
		gradeTable[4][i] = 0;

	//�� �л��� ������ ���Ѵ�.
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			gradeTable[i][3] += gradeTable[i][j];

	//�� ������ ������ ���Ѵ�.
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			gradeTable[4][i] += gradeTable[j][i];

	//����Ѵ�.
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d ", gradeTable[i][j]);
		printf("\n");
	}

	return 0;
}