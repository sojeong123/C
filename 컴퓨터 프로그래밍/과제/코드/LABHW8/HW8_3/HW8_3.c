// 20201012 ��ǻ���а� �Ӽ���
// HW 8_3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_array(int pa[][3], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			printf("%d ", pa[i][j]);
}

int max_array(int pa[][3], int size)
{
	int i, j, max;
	max = pa[0][0];
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			if (max < pa[i][j])
				max = pa[i][j];
	return max;
}

int sum_array(int pa[][3], int size)		// sum_array(int(*pa)[3], int size)�� ����
{
	int i, j, sum = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			sum += pa[i][j];
	return sum;
}

int main(void)
{
int array[][3] = { {1, 22, 70}, {23, 80, 34}, {90, 20, 4}, {40, 99, 30} };
	int rowNb = sizeof(array) / sizeof(array[0]);

	print_array(array, rowNb);
	printf("\n���� ū ���� %d\n", max_array(array, rowNb));
	printf("������Ʈ���� ���� %d\n", sum_array(array, rowNb));
}