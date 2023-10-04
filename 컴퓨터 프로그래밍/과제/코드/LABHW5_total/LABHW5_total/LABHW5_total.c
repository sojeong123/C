//20201012 ��ǻ���а� �Ӽ���

// LAB5a_2 (2���� �迭 �� �� ������)
// 4*4 int�� �迭�� A�κа� ���� ���� �־� ����ϰ�
// �迭�� ��ҵ��� ������ �������� 90���� �ѹ��� �̵�����
// B�κ�ó�� ����ϴ� ���α׷��� �ۼ�����.
// ����ģ �κ��� �����ϰ� �Լ�ȭ�϶�

// ���� ����
//  1  2  3  4
//  5  6  7  8
//  9 10 11 12
// 13 14 15 16				//��������� A�κ�
//
// 13  9  5  1
// 14 10  6  2
// 15 11  7  3
// 16 12  8  4				//��������� B�κ�

/*
#include <stdio.h>
#define SIZE 4

void printArray(int arr[][SIZE], int size);
void rotateArray(int arr[][SIZE], int size);

int main(void)
{
	int arr[SIZE][SIZE] = { {1,2,3,4},
							{5,6,7,8},
							{9,10,11,12},
							{13,14,15,16} };
	
	printArray(arr, SIZE);
	printf("\n");
	rotateArray(arr, SIZE);
	
	return 0;
}

void printArray(int arr[][SIZE], int size)
{
	int i, j;
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
}

void rotateArray(int arr[][SIZE], int size)
{
	int i, j;
	int temp[SIZE][SIZE];
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
			temp[i][j] = arr[size-1-j][i];
	}
	
	printArray(temp, SIZE);
}
*/

// HW5a_2 (2���� �迭 ������)
// LAB5a_2�� ���� �����̴�.
// 4*4 int�� 2���� �迭�� �Ʒ��� <A>�� ���� ���� �־� ����ϰ�
// �迭�� ��ҵ��� ������ �������� 90���� 4���� �̵���Ű�鼭
// ����ϴ� ���α׷��� �ۼ�����.
// ���� ���ÿ��� ���������� 90���� 4�� ������ ������ �迭�� ���ƿ��� �϶�.
// ���� LAB���� �ۼ��� �Լ��� ����϶�.

// ���� ����
//  1  2  3  4
//  5  6  7  8
//  9 10 11 12
// 13 14 15 16
// 
// 13  9  5  1
// 14 10  6  2
// 15 11  7  3
// 16 12  8  4
// 
// 16 15 14 13
// 12 11 10  9
//  8  7  6  5
//  4  3  2  1
// 
//  4  8 12 16
//  3  7 11 15
//  2  6 10 14
//  1  5  9 13
// 
//  1  2  3  4
//  5  6  7  8
//  9 10 11 12
// 13 14 15 16

/*
#include <stdio.h>
#define SIZE 4

void printArray(int arr[][SIZE], int size);
void rotateArray(int arr[][SIZE], int size);

int main(void)
{
	int arr[SIZE][SIZE] = { {1,2,3,4},
							{5,6,7,8},
							{9,10,11,12},
							{13,14,15,16} };

	printArray(arr, SIZE);
	printf("\n");
	rotateArray(arr, SIZE);
	printf("\n");
	rotateArray(arr, SIZE);
	printf("\n");
	rotateArray(arr, SIZE);
	printf("\n");
	rotateArray(arr, SIZE);

	return 0;
}

void printArray(int arr[][SIZE], int size)
{
	int i, j;

	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
}

void rotateArray(int arr[][SIZE], int size)
{
	int i, j;
	int temp[SIZE][SIZE];

	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
			temp[i][j] = arr[size-1-j][i];
	}

	printArray(temp, SIZE);
}
*/

/*
//20201012 ��ǻ���а� �Ӽ���
//LABHW3_3_2
#include <stdio.h>
#define SIZE 10

char askReservation(int* num);
void printSeats(int s[], int size);
void processReservation(int a[], int size, int num);

char askReservation(int* num)
{
	char choice;
	printf("\n�¼��� �����Ͻðڽ��ϱ�(���)? ");
	scanf_s("%d", num);
	while (getchar() != '\n');
	return 'y';
}

void processReservation(int a[], int size, int num)
{
	int i, j;
	int count = 0;
	for (i = 0; i < size; i++)
	{
		if (a[i] == 0)
		{
			a[i] = 1;
			count++;
		}
		if (count == num)
			break;
	}
	printSeats(a, size);
}

//�¼�ǥ ���
void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%d ", s[i]);
	printf("\n");
}

int main(void)
{
	int seats[SIZE] = { 0 };
	int num;

	printf("******�¼� ���� �ý���******\n");

	while (askReservation(&num) == 'y')
	{
		processReservation(seats, SIZE, num);
	}
}
*/

// Challenge5_1 (�ڸ� ���� �ý���)
// ���� ���� ���� �¼��� ���� �ڸ����� �ý����� �����ϴ� ���α׷��� �ۼ��϶�.
// �⺻ ����� ���� ������ ����.
// �Ʒ��� ���࿹�� ���� ���α׷��� �ۼ��϶�.
// �Լ����� ������ ����Ͽ� ���ȭ�϶�.

// ���� ����
// �¼��� �����Ͻðڽ��ϱ�<y/n>? y
// ---------------------------------
//			1 2 3 4 5 6 7 8 9 10
// ---------------------------------
// 1	 	0 0 0 0 0 0 0 0 0 0
// 2		0 0 0 0 0 0 0 0 0 0
// 3		0 0 0 0 0 0 0 0 0 0
// 
// ���° �¼��� �����Ͻðڽ��ϱ�? <�� ��>�� ���·� �Է� : 3 5
// ����Ǿ����ϴ�.
// ---------------------------------
//			1 2 3 4 5 6 7 8 9 10
// ---------------------------------
// 1	 	0 0 0 0 0 0 0 0 0 0
// 2		0 0 0 0 0 0 0 0 0 0
// 3		0 0 0 0 1 0 0 0 0 0
// 
// �¼��� �����Ͻðڽ��ϱ�<y/n>? y
// ---------------------------------
//			1 2 3 4 5 6 7 8 9 10
// ---------------------------------
// 1	 	0 0 0 0 0 0 0 0 0 0
// 2		0 0 0 0 0 0 0 0 0 0
// 3		0 0 0 0 1 0 0 0 0 0
// 
// ���° �¼��� �����Ͻðڽ��ϱ�? <�� ��>�� ���·� �Է� : 3 5
// �̹� ����� �ڸ��Դϴ�.
// �¼��� �����Ͻðڽ��ϱ�<y/n>? y
// ---------------------------------
//			1 2 3 4 5 6 7 8 9 10
// ---------------------------------
// 1	 	0 0 0 0 0 0 0 0 0 0
// 2		0 0 0 0 0 0 0 0 0 0
// 3		0 0 0 0 1 0 0 0 0 0
// 
// ���° �¼��� �����Ͻðڽ��ϱ�? <�� ��>�� ���·� �Է� : 1 3
// ����Ǿ����ϴ�.
// ---------------------------------
// 			1 2 3 4 5 6 7 8 9 10
// ---------------------------------
// 1	 	0 0 1 0 0 0 0 0 0 0
// 2		0 0 0 0 0 0 0 0 0 0
// 3		0 0 0 0 1 0 0 0 0 0
// 
// �¼��� �����Ͻðڽ��ϱ�<y/n>? n
// ���α׷��� �����մϴ�.

/*
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
*/

// LAB5a (�����)
// 4*3�� ��� A, B�� �Է¹޾�,
// ������� ���Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
// A�� B�� ��Ŀ����� ���� �Է¹޴´�.
// C�� ������� �����Ͽ� �̸� ����Ѵ�.
// �Է�/ó��/��� �κ��� ���� �Լ�ȭ�϶�.
// void readMatrix(int a[][3], int size)
// void matrixAdd(int a[][3], int b[][3], int c[][3], int size)
// void printMatrix(int a[][3], int size)

// ���� ����
// (4 X 3) ��� A �Է� :
// 1 2 3
// 1 2 3
// 1 2 3
// 1 2 3
// (4 X 3) ��� B �Է� :
// 1 2 3
// 10 20 30
// 100 200 300
// 1000 2000 3000
// ����� :
//    2    4    6
//   11   22   33
//  101  202  303
// 1001 2002 3003

/*
#include<stdio.h>
void matrixAdd(int a[][3], int b[][3], int c[][3], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
}

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

int main(void)
{
	int A[4][3], B[4][3], C[4][3];

	printf("(4 X 3) ��� A �Է� :\n");
	readMatrix(A, 4);
	printf("(4 X 3) ��� B �Է� :\n");
	readMatrix(B, 4);

	matrixAdd(A, B, C, 4);
	
	printf("����� :\n");
	printMatrix(C, 4);
}
*/

// HW5a_1 (��İ�_�Լ� ��� ����)
// ��� X(4*2)�� Y(2*3)�� ���ؼ�
// �� ����� ��(Z�� �־)�� ���Ͽ�
// ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 
// 1) X�� Y�� ��Ŀ����� ���� �Է¹޴´�.
//	  ���� LAB���� ������ readMatrix�Լ��� ����� �� �ִ°�?
// 2) �迭 Z�� ����� ���� �����Ͽ� ����Ѵ�.
// 3) LAB���� �ۼ��� �Լ��� (�����ϸ�) ����ϰ�
//    �ϴ� ��İ��� ����ϴ� �κ��� main���� �غ���.
// 4) ��İ� �Լ��� ������� ����.

// ���� ����
// (4 X 2) ��� X �Է� :
// 1 1
// 2 2
// 3 3
// 4 4
// (2 X 3) ��� Y �Է� :
// 1 2 3
// 10 20 30
// ��İ� :
// 11 22  33
// 22 44  66
// 33 66  99
// 44 88 132

/*
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
*/

// HW (����ã��)
// ������ �ü���� ���� ���α׷����� �Ʒ� �׸��� ����
// '����ã��'��� ������ �־���
// �̹� ������Ʈ�� '����ã��' ���ӿ� ���� ���̴�.

// �� ������ 2���� �׸��忡 ��ǻ�Ͱ� �̸� ������ ���� ���ڵ��� ��ġ�س���
// ����ڴ� �� ���ڸ� ���� �ð��� ã�� ���� ��ǥ�̴�.
// �� ������ �ٽ��� ������ ����.
// 1. ����ڰ� ���ڰ� �ƴ϶�� �����ϴ� ���� �����Ѵ�.
// 2. �� ���� ���콺�� ������ �� �� �ֺ��� ���ڰ� � ��ġ�Ǿ� �ִ���
//    ������ (��ǻ�Ͱ�) �˷��ְ�
// 3. ����ڴ� �� ���ڵ��� ������� ���ڰ� ��� �ִ��� ã�Ƴ��� ���̴�.

// �� �׸����� 1�� ��ġ������ �ֺ� ���ڴ� 1��,
// 2�� ��ġ������ 2��, 3�� ��ġ������ 3���̴�.
// ���⼭ �ֺ� ���� ���õ� ���� ��/��/��/��/�»�/���/����/���Ͽ� �ִ� ���� �ǹ��Ѵ�.
// ���� ��� 1�� ��ġ�� ��, ���ʿ� ���� �����Ƿ�
// ���� ���� �׸��� ���� û������ ǥ�õ� �κ��� �ֺ� ���� �ȴ�.
// 
// �׸��� 3�� ��ġ������ �ֺ� ���� �Ʒ� �׸��� ����.
// 
// �� �� ���� ���� ���� �����е鵵 �ֺ� ���� ��ġ�� ������ ������ ���� �� �� ���� ���̴�.
// �̹� ������Ʈ�� �ֺ� ���� ��ġ�� ������ ������ ��� ���ϴ� ���̴�.
// ��, �������� �׸��� ������ ���ڸ� �Է��ϸ� ����� ��� ���� ���Ͽ�
// �� �ֺ��� ��ġ�� ������ ������ ���ϴ� ���̴�.

// �� �׸����� ���ʰ� ���� �Է��ϸ�, �����ʰ� ���� ����Ͽ� ����ϴ� ���α׷��� �ۼ��ϴ� ���̴�.

// ���α׷��� ���Ͽ� �Է��� ������ ���� �Ѵ�.
// ���ڴ� ���� *�� ǥ���ϰ� �Ϲ� ���� #���� ǥ���Ѵ�.
// �Է��� ���� �Ʒ��� ����.

// #####
// #*###
// ##*##
// #*###
// ###*#

// ����� ���ڰ� ��ġ�Ǿ� ���� ���� �� ��ġ�� �ֺ� ������ ������ ����Ѵ�.
// �� ������ ����� �Ʒ��� ����.

// 11100
// 1*210
// 23*10
// 1*321
// 112*1

// �׸���� ����� �����ϱ� ���� 2���� �迭�� ����� ���̴�.
// ���� ���������� ũ�Ⱑ 5*5�� 2���� �迭�� ���ȴ�.
// ���α׷��� �Ϻ� �ڵ�� ������ ����.
// �������� �ؾ� �� ���� �Ʒ� ���α׷��� �ϼ��ϴ� ���̴�.
// �پ��� test case�� ������Ѻ���.

//Ʋ�� �ڵ�
/*
#include<stdio.h>
#define X_VALUE 5
#define Y_VALUE 5

void readBombInfo(char grid[][Y_VALUE + 1])
{
	int i;
	printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf_s("%s", grid[i]);
}

void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;

	for (i = 0; i < X_VALUE; i++)
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*')
			{
				if (i - 1 >= 0 && j - 1 >= 0)
					numOfBombs[i - 1][j - 1]++;
				if (i - 1 >= 0)
					numOfBombs[i - 1][j]++;
				if (i - 1 >= 0 && j + 1 < Y_VALUE)
					numOfBombs[i - 1][j + 1]++;
				if (j - 1 >= 0)
					numOfBombs[i][j - 1]++;
				if (j + 1 < Y_VALUE)
					numOfBombs[i][j + 1]++;
				if (i + 1 < X_VALUE && j - 1 >= 0)
					numOfBombs[i + 1][j - 1]++;
				if (i + 1 < X_VALUE)
					numOfBombs[i + 1][j]++;
				if (i + 1 < X_VALUE && j + 1 < Y_VALUE)
					numOfBombs[i + 1][j + 1]++;
			}
}

void display_numOfBombs(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;
	for (i = 0; i < X_VALUE; i++)
	{
		for (j = 0; j < Y_VALUE; j++)
		{
			if (grid[i][j] == '*')
				printf("*");
			else
				printf("%d", numOfBombs[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	char grid[X_VALUE][Y_VALUE + 1];
	int numOfBombs[X_VALUE][Y_VALUE] = { 0 };	

	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	display_numOfBombs(grid, numOfBombs);
}
*/

//���� �ڵ�
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define X_VALUE 5 
#define Y_VALUE 5 

void readBombInfo(char grid[][Y_VALUE + 1])
{
	int i;

	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]);
}
void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;

	for (i = 0; i < X_VALUE; i++)
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*') {
				if (i - 1 >= 0) {
					numOfBombs[i - 1][j]++;
					if (j - 1 >= 0)
						numOfBombs[i - 1][j - 1]++;
					if (j + 1 < Y_VALUE)
						numOfBombs[i - 1][j + 1]++;
				}
				if (i + 1 < X_VALUE) {
					numOfBombs[i + 1][j]++;
					if (j - 1 >= 0)
						numOfBombs[i + 1][j - 1]++;
					if (j + 1 < Y_VALUE)
						numOfBombs[i + 1][j + 1]++;
				}
				if (j - 1 >= 0)
					numOfBombs[i][j - 1]++;
				if (j + 1 < Y_VALUE)
					numOfBombs[i][j + 1]++;
			}
}
void display_numOfBombs(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*')
				printf("*");
			else
				printf("%d", numOfBombs[i][j]);
		printf("\n");
	}
}
int main()
{
	char grid[X_VALUE][Y_VALUE + 1];
	int numOfBombs[X_VALUE][Y_VALUE] = { 0 };

	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	display_numOfBombs(grid, numOfBombs);
}
*/