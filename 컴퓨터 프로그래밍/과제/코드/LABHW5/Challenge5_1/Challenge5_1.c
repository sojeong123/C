// 20201012 ��ǻ���а� �Ӽ���
// Challenge5_1 (�ڸ� ���� �ý���)
#include <stdio.h>
#define ROW 3
#define COL 10

void printSeats(int s[][COL], int row, int col);
void askReservation(int* row, int* col);
void processReservation(int s[][COL], int row, int col);


int main(void)
{
	int seats[ROW][COL] = { 0 };
	int row, col;
	char choice;

	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�<y/n>? ");
		scanf_s("%c", &choice);

		while (getchar() != '\n');
		if (choice == 'y')
		{
			printSeats(seats, ROW, COL);
			printf("\n");
			askReservation(&col, &row);
			processReservation(seats, row, col);
		}
		else if (choice == 'n')
			break;
		else
			printf("�߸��� �Է��Դϴ�.\n");
	}
}

void printSeats(int s[][COL], int row, int col)
{
	int i, j;
	printf("---------------------------------\n");
	printf("\t1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------------------\n");
	for (i = 0; i < row; i++)
	{
		printf("%d\t", i + 1);
		for (j = 0; j < col; j++)
			printf("%d ", s[i][j]);
		printf("\n");
	}
}

void askReservation(int* row, int* col)
{
	printf("���° �¼��� �����Ͻðڽ��ϱ�? <�� ��>�� ���·� �Է� : ");
	scanf_s("%d %d", col, row);
	while (getchar() != '\n');
}

void processReservation(int s[][COL], int row, int col)
{
	if (s[row - 1][col - 1] == 0)
	{
		s[row - 1][col - 1] = 1;
		printf("����Ǿ����ϴ�.\n");
		printSeats(s, ROW, COL);
		printf("\n");
	}
	else
		printf("�̹� ����� �ڸ��Դϴ�.\n");
}