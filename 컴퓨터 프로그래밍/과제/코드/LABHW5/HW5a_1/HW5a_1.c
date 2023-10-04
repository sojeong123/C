// 20201012 ��ǻ���а� �Ӽ���
// HW5a_1 (��İ�_�Լ� ��� ����)
#include<stdio.h>
void printMatrix(int a[][3], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}

void readMatrix(int a[][3], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", &a[i][j]);
}

void readMatrix2(int a[][2], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 2; j++)
			scanf_s("%d", &a[i][j]);
}

int main(void)
{
	int X[4][2], Y[2][3], Z[4][3];
	printf("(4 X 2) ��� X �Է� :\n");
	readMatrix2(X, 4);
	printf("(2 X 3) ��� Y �Է� :\n");
	readMatrix(Y, 2);

	//Z�� ��İ��� �ִ� �ڵ�
	int i, j, k;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
		{
			Z[i][j] = 0;
			for (k = 0; k < 2; k++)
				Z[i][j] += X[i][k] * Y[k][j];
		}

	printf("��İ� :\n");
	printMatrix(Z, 4);
}