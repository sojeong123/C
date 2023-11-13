// 20201012 컴퓨터학과 임소정
// HW(실제 오목)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i, j;
	int sum;
	char player = b[r][c];

	// 여기에 수평오목이 되면, 1을 반환하는 코드를 삽입
	int ri, ci;

	// 수평 탐색 (왼쪽을 탐색하고 오른쪽 탐색)
	sum = 1;
	ci = c - 1;
	ri = r;
	while (ci != -1 && b[ri][ci] == player)
	{
		sum++;
		ci--;
	}

	ci = c + 1;
	ri = r;
	while (ci != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ci--;
	}

	if (sum == 5)
		return 1;

	// 수직 탐색 (위쪽을 탐색하고 아래쪽 탐색)
	sum = 1;
	ci = c;
	ri = r - 1;
	while (ri != -1 && b[ri][ci] == player)
	{
		sum++;
		ri--;
	}

	ci = c;
	ri = r + 1;
	while (ri != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ri--;
	}

	if (sum == 5)
		return 1;

	// 대각선 탐색 (왼쪽 위를 탐색하고 오른쪽 아래 탐색)
	sum = 1;
	ci = c - 1;
	ri = r - 1;
	while (ci != -1 && ri != -1 && b[ri][ci] == player)
	{
		sum++;
		ci--;
		ri--;
	}

	ci = c + 1;
	ri = r + 1;
	while (ci != BOARD_SIZE && ri != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ci--;
		ri--;
	}

	if (sum == 5)
		return 1;

	// 역대각선 탐색 (오른쪽 위를 탐색하고 왼쪽 아래 탐색)
	sum = 1;
	ci = c - 1;
	ri = r + 1;
	while (ci != -1 && ri != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ci--;
		ri++;
	}

	ci = c + 1;
	ri = r - 1;
	while (ci != BOARD_SIZE && ri != -1 && b[ri][ci] == player)
	{
		sum++;
		ci++;
		ri--;
	}

	if (sum == 5)
		return 1;

	return 0;
}

void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;
	printf("    ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d ", i);
	printf("\n     -----------------------------\n");
	for (i = 0; i < BOARD_SIZE; i++)
	{
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c ", b[i][j]);
		printf("\n");
	}
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;		// 바둑돌을 놓는 위치
	int i, j;
	int count;		// 바둑판에 돌을 가득 채우면 게임 종료
	int lose;
	int win;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열): ", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ')
			continue;			//이미 말이 놓인 자리

		board[r][c] = turn;
		display(board);

		if (win = winCheck(board, r, c))
			printf("Player %c wins!\n", turn);
		turn = (turn == 'X') ? 'O' : 'X';
		count++;
	} while (!win && count <= BOARD_SIZE * BOARD_SIZE);

	if (!win && count == BOARD_SIZE * BOARD_SIZE)
		printf("Nobody win!\n");
}