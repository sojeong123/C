// 20201012 컴퓨터학과 임소정
// HW(수평오목)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

void display(char b[][BOARD_SIZE]) {
	char ch;
	int i, j;
	printf("    0 1 2 3 4 5 6 7 8 9\n");
	printf("   ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%d :", i);
		for (j = 0; j < BOARD_SIZE; j++) {
			if (b[i][j] == ' ') {
				printf("  ");
			}
			else {
				printf(" %c", b[i][j]);
			}
		}
		printf("\n");
	}
}

int winCheck(char b[][BOARD_SIZE], int r, int c) {
	int count = 1;
	char player = b[r][c];

	// 오른쪽으로 가로 확인
	for (int i = c + 1; i < BOARD_SIZE && b[r][i] == player; i++)
		count++;
	// 왼쪽으로 가로 확인
	for (int i = c - 1; i >= 0 && b[r][i] == player; i--)
		count++;

	return count >= 5;
}

int main() {
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
	do {
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ') {

			continue;
		}

		board[r][c] = turn;
		display(board);
		count++;

		if (winCheck(board, r, c)) {
			printf("Player %c wins!\n", turn);
			return 0;
		}

		if (count > BOARD_SIZE * BOARD_SIZE) {
			printf("Nobody wins!\n");
			return 0;
		}

		if (turn == 'X')
			turn = 'O';
		else
			turn = 'X';
	} while (1);

	return 0;
}