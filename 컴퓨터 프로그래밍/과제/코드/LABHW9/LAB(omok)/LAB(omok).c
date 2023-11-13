// 20201012 컴퓨터학과 임소정
// LAB(오목)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 3 // 추후에 10으로 바꾸어서 진행한다
void display(char b[][BOARD_SIZE]) {
	int i, j;
	printf("    ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%d ", i);
	printf("\n");
	printf("   -------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%d |", i);
		for (j = 0; j < BOARD_SIZE; j++) {
			if (b[i][j] == ' ') {
				printf(" ");
			}
			else {
				printf("%c", b[i][j]);
			}
			printf(" ");
		}
		printf("\n");
	}
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';
	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ') {

			continue;
		}

		board[r][c] = turn;
		display(board);
		count++;

		if (turn == 'X')
			turn = 'O';
		else
			turn = 'X';
	} while (count <= BOARD_SIZE * BOARD_SIZE);
	return 0;
}