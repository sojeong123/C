// 20201012 ��ǻ���а� �Ӽ���
// LAB 8_4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_array(int pa[][3], int size)
{
	int i, j;
	for(i = 0; i < size; i++)
		for(j = 0; i < size; i++)
			printf("%d ", *(pa[i]+ j));
}

// �Լ� print_array���� �Ű������� pa�� ǥ���� ��ó�� max_array�Լ��� �����϶�.
int max_array(int pa[][3], int size)
{
	int i, j, max;
	max = pa[0][0];
	for (i = 0; i < size; i++)
		for (j = 0; i < size; i++)
			if (max < pa[i][j])
				max = pa[i][j];
	return max;
}

int main(void)
{
	int array[][3] = { {1, 22, 70}, {23, 80, 34}, {90, 20, 4}, {40, 99, 30} };
	int rowNb = sizeof(array) / sizeof(array[0]);

	print_array(array, rowNb);
	printf("\n���� ū ���� %d�̴�.\n", max_array(array, rowNb));
}