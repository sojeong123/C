//20201012 ��ǻ���а� �Ӽ���
//LAB16_5 (�� �ؿ� �Լ�ȭ�� �� �ֽ��ϴ�.)

//�Լ�ȭ ��
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 5

int main(void)
{
	int table[ROW][COL];
	int i, j, sum = 0;
	double avg;

	srand(time(NULL));

	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			table[i][j] = rand() % 100;
	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			sum += table[i][j];

	avg = (double)sum / (ROW * COL);

	printf("�߻��� ������ ����� %.0lf�Դϴ�.\n", avg);

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%4d ", table[i][j]);
		printf("\n");
	}

	return 0;
}
*/

//�Լ�ȭ ��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 5

void initTable(int table[][5], int row);
int totalTable(int table[][5], int row);
void printTable(int table[][5], int row);

int main(void)
{
	int table[3][5];
	int i, j;
	int total = 0;

	srand(time(NULL));

	initTable(table, 3);
	printf("�߻��� ������ ����� %d�Դϴ�.\n", totalTable(table, 3) / 15);

	printTable(table, 3);			//ȣ��

	return 0;
}

void initTable(int table[][5], int row)
{
	int i, j;

	for (i = 0; i < row; i++)
		for (j = 0; j < 5; j++)
			table[i][j] = rand() % 100;
}

int totalTable(int table[][5], int row)
{
	int i, j, sum = 0;

	for (i = 0; i < row; i++)
		for (j = 0; j < 5; j++)
			sum += table[i][j];

	return sum;
}

void printTable(int table[][5], int row)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%4d ", table[i][j]);
		printf("\n");
	}
}