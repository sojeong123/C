// 20201012 컴퓨터학과 임소정
// Challenge5_1 (자리 예약 시스템)
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
		printf("좌석을 예약하시겠습니까<y/n>? ");
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
			printf("잘못된 입력입니다.\n");
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
	printf("몇번째 좌석을 예약하시겠습니까? <열 행>의 형태로 입력 : ");
	scanf_s("%d %d", col, row);
	while (getchar() != '\n');
}

void processReservation(int s[][COL], int row, int col)
{
	if (s[row - 1][col - 1] == 0)
	{
		s[row - 1][col - 1] = 1;
		printf("예약되었습니다.\n");
		printSeats(s, ROW, COL);
		printf("\n");
	}
	else
		printf("이미 예약된 자리입니다.\n");
}