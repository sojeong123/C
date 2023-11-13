// 20201012 ��ǻ���а� �Ӽ���
// LAB(����)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 3 // ���Ŀ� 10���� �ٲپ �����Ѵ�
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
		printf("Player %c(�� ��):", turn);
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