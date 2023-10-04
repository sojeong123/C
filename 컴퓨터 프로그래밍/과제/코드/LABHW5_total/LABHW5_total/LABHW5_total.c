//20201012 컴퓨터학과 임소정

// LAB5a_2 (2차원 배열 한 번 돌리기)
// 4*4 int형 배열에 A부분과 같이 값을 넣어 출력하고
// 배열의 요소들을 오른쪽 방향으로 90도씩 한번을 이동시켜
// B부분처럼 출력하는 프로그램을 작성하자.
// 밑줄친 부분을 저절하게 함수화하라

// 실행 예시
//  1  2  3  4
//  5  6  7  8
//  9 10 11 12
// 13 14 15 16				//여기까지가 A부분
//
// 13  9  5  1
// 14 10  6  2
// 15 11  7  3
// 16 12  8  4				//여기까지가 B부분

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

// HW5a_2 (2차원 배열 돌리기)
// LAB5a_2의 발전 문제이다.
// 4*4 int형 2차원 배열에 아래의 <A>와 같이 값을 넣어 출력하고
// 배열의 요소들을 오른쪽 방향으로 90도씩 4번을 이동시키면서
// 출력하는 프로그램을 작성하자.
// 실행 예시에서 보여지듯이 90도씩 4번 돌리면 원래의 배열로 돌아오게 하라.
// 위의 LAB에서 작성한 함수를 사용하라.

// 실행 예시
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
//20201012 컴퓨터학과 임소정
//LABHW3_3_2
#include <stdio.h>
#define SIZE 10

char askReservation(int* num);
void printSeats(int s[], int size);
void processReservation(int a[], int size, int num);

char askReservation(int* num)
{
	char choice;
	printf("\n좌석을 예약하시겠습니까(몇명)? ");
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

//좌석표 출력
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

	printf("******좌석 예약 시스템******\n");

	while (askReservation(&num) == 'y')
	{
		processReservation(seats, SIZE, num);
	}
}
*/

// Challenge5_1 (자리 예약 시스템)
// 열과 행을 갖는 좌석을 갖는 자리예약 시스템을 구현하는 프로그램을 작성하라.
// 기본 기능은 앞의 문제와 같다.
// 아래의 시행예를 갖는 프로그램을 작성하라.
// 함수들을 적절히 사용하여 모듈화하라.

// 실행 예시
// 좌석을 예약하시겠습니까<y/n>? y
// ---------------------------------
//			1 2 3 4 5 6 7 8 9 10
// ---------------------------------
// 1	 	0 0 0 0 0 0 0 0 0 0
// 2		0 0 0 0 0 0 0 0 0 0
// 3		0 0 0 0 0 0 0 0 0 0
// 
// 몇번째 좌석을 예약하시겠습니까? <열 행>의 형태로 입력 : 3 5
// 예약되었습니다.
// ---------------------------------
//			1 2 3 4 5 6 7 8 9 10
// ---------------------------------
// 1	 	0 0 0 0 0 0 0 0 0 0
// 2		0 0 0 0 0 0 0 0 0 0
// 3		0 0 0 0 1 0 0 0 0 0
// 
// 좌석을 예약하시겠습니까<y/n>? y
// ---------------------------------
//			1 2 3 4 5 6 7 8 9 10
// ---------------------------------
// 1	 	0 0 0 0 0 0 0 0 0 0
// 2		0 0 0 0 0 0 0 0 0 0
// 3		0 0 0 0 1 0 0 0 0 0
// 
// 몇번째 좌석을 예약하시겠습니까? <열 행>의 형태로 입력 : 3 5
// 이미 예약된 자리입니다.
// 좌석을 예약하시겠습니까<y/n>? y
// ---------------------------------
//			1 2 3 4 5 6 7 8 9 10
// ---------------------------------
// 1	 	0 0 0 0 0 0 0 0 0 0
// 2		0 0 0 0 0 0 0 0 0 0
// 3		0 0 0 0 1 0 0 0 0 0
// 
// 몇번째 좌석을 예약하시겠습니까? <열 행>의 형태로 입력 : 1 3
// 예약되었습니다.
// ---------------------------------
// 			1 2 3 4 5 6 7 8 9 10
// ---------------------------------
// 1	 	0 0 1 0 0 0 0 0 0 0
// 2		0 0 0 0 0 0 0 0 0 0
// 3		0 0 0 0 1 0 0 0 0 0
// 
// 좌석을 예약하시겠습니까<y/n>? n
// 프로그램을 종료합니다.

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
*/

// LAB5a (행렬합)
// 4*3인 행렬 A, B를 입력받아,
// 행렬합을 구하여 출력하는 프로그램을 작성하라.
// A와 B의 행렬원소의 값을 입력받는다.
// C에 행렬합을 저장하여 이를 출력한다.
// 입력/처리/출력 부분을 각각 함수화하라.
// void readMatrix(int a[][3], int size)
// void matrixAdd(int a[][3], int b[][3], int c[][3], int size)
// void printMatrix(int a[][3], int size)

// 실행 예시
// (4 X 3) 행렬 A 입력 :
// 1 2 3
// 1 2 3
// 1 2 3
// 1 2 3
// (4 X 3) 행렬 B 입력 :
// 1 2 3
// 10 20 30
// 100 200 300
// 1000 2000 3000
// 행렬합 :
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

	printf("(4 X 3) 행렬 A 입력 :\n");
	readMatrix(A, 4);
	printf("(4 X 3) 행렬 B 입력 :\n");
	readMatrix(B, 4);

	matrixAdd(A, B, C, 4);
	
	printf("행렬합 :\n");
	printMatrix(C, 4);
}
*/

// HW5a_1 (행렬곱_함수 사용 안함)
// 행렬 X(4*2)와 Y(2*3)에 대해서
// 두 행렬의 곱(Z에 넣어서)을 구하여
// 출력하는 프로그램을 작성하시오.
// 
// 1) X와 Y의 행렬원소의 값을 입력받는다.
//	  앞의 LAB에서 정의한 readMatrix함수를 사용할 수 있는가?
// 2) 배열 Z에 행렬의 곱을 저장하여 출력한다.
// 3) LAB에서 작성한 함수를 (가능하면) 사용하고
//    일단 행렬곱을 계산하는 부분을 main에서 해보라.
// 4) 행렬곱 함수를 사용하지 말라.

// 실행 예시
// (4 X 2) 행렬 X 입력 :
// 1 1
// 2 2
// 3 3
// 4 4
// (2 X 3) 행렬 Y 입력 :
// 1 2 3
// 10 20 30
// 행렬곱 :
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
	printf("(4 X 2) 행렬 X 입력 :\n");
	readMatrix2(X, 4);
	printf("(2 X 3) 행렬 Y 입력 :\n");
	readMatrix(Y, 2);

	//Z에 행렬곱을 넣는 코드
	int i, j, k;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
		{
			Z[i][j] = 0;
			for (k = 0; k < 2; k++)
				Z[i][j] += X[i][k] * Y[k][j];
		}

	printf("행렬곱 :\n");
	printMatrix(Z, 4);
}
*/

// HW (지뢰찾기)
// 윈도우 운영체제의 보조 프로그램에는 아래 그림과 같은
// '지뢰찾기'라는 게임이 있었다
// 이번 프로젝트는 '지뢰찾기' 게임에 관한 것이다.

// 이 게임은 2차원 그리드에 컴퓨터가 미리 랜덤한 셀에 지뢰들을 설치해놓고
// 사용자는 그 지뢰를 빠른 시간에 찾는 것이 목표이다.
// 이 게임의 핵심은 다음과 같다.
// 1. 사용자가 지뢰가 아니라고 추정하는 셀을 선택한다.
// 2. 그 셀을 마우스로 누르면 그 셀 주변에 지뢰가 몇개 설치되어 있는지
//    게임이 (컴퓨터가) 알려주고
// 3. 사용자는 그 숫자들을 기반으로 지뢰가 어디에 있는지 찾아내는 것이다.

// 위 그림에서 1번 위치에서는 주변 지뢰는 1개,
// 2번 위치에서는 2개, 3번 위치에서는 3개이다.
// 여기서 주변 셀은 선택된 셀의 상/하/좌/우/좌상/우상/좌하/우하에 있는 셀을 의미한다.
// 예를 들어 1번 위치는 위, 왼쪽에 셀이 없으므로
// 다음 장의 그림과 같은 청색으로 표시된 부분이 주변 셀이 된다.
// 
// 그리고 3번 위치에서의 주변 셀은 아래 그림과 같다.
// 
// 이 두 가지 예를 보면 여러분들도 주변 셀에 설치된 지뢰의 개수를 쉽게 셀 수 있을 것이다.
// 이번 프로젝트는 주변 셀에 설치된 지뢰의 개수를 모두 구하는 것이다.
// 즉, 여러분이 그리드 정보와 지뢰를 입력하면 결과로 모든 셀에 대하여
// 그 주변에 설치된 지뢰의 개수를 구하는 것이다.

// 위 그림에서 왼쪽과 같이 입력하면, 오른쪽과 같이 계산하여 출력하는 프로그램을 작성하는 것이다.

// 프로그램을 위하여 입력을 다음과 같이 한다.
// 지뢰는 문자 *로 표시하고 일반 셀은 #으로 표시한다.
// 입력의 예는 아래와 같다.

// #####
// #*###
// ##*##
// #*###
// ###*#

// 결과는 지뢰가 설치되어 있지 않은 셀 위치에 주변 지뢰의 개수를 출력한다.
// 위 예제의 결과는 아래와 같다.

// 11100
// 1*210
// 23*10
// 1*321
// 112*1

// 그리드와 결과를 저장하기 위해 2차원 배열을 사용할 것이다.
// 위의 예제에서는 크기가 5*5인 2차원 배열을 사용된다.
// 프로그램의 일부 코드는 다음과 같다.
// 여러분이 해야 할 일은 아래 프로그램을 완성하는 것이다.
// 다양한 test case로 실행시켜보라.

//틀린 코드
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

//정답 코드
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