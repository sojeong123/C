// 프로그래머스 스쿨

// <5주 과제>
// 프논이2019학기말
// (2차원 배열 시계방향 rotate)
// 행의 개수와 열의 개수가 5인 2차원 배열의 원소들을 입력받아
// 시계방향으로 90도 회전하여 출력하려한다.
// 함수 rotate2dimArray를 완성시켜 아래와 같이 출력되게 하라.
//
// 실행예:
// 입력)
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25
// 출력)
// 21 16 11 6 1
// 22 17 12 7 2
// 23 18 13 8 3
// 24 19 14 9 4
// 25 20 15 10 5

/*
#include <stdio.h>
// a를 90도 시계방향으로 회전하여 b에 넣는다
void rotate2dimArray(int a[][5], int b[][5], int size)
{
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++)
			b[j][size - 1 - i] = a[i][j];
	}

	return;
}

int main(void)
{
	int A[5][5];
	int B[5][5];
	int n, key;
	int i, j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &A[i][j]);

	rotate2dimArray(A, B, 5);
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
}
*/

// 지뢰찾기
// 입력프롬트
// Input Grid :
// 는 제거하고 돌려보세요.

/*
#include<stdio.h>

#define X_VALUE 5 //2차원 배열의 행의 수
#define Y_VALUE 5 //2차원 배열의 열의 수

void readBombInfo(char grid[][Y_VALUE+1])
{
	int i;
	// grid 및 지뢰 정보 입력
	//printf("Input Grid\n");
	for(i = 0 ; i < X_VALUE; i++ )
		scanf( "%s", grid[i] );
}
void countBomb(char grid[][Y_VALUE+1], int numOfBombs[][Y_VALUE])
{
	int i, j;

	for (i = 0; i < X_VALUE; i++)
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*') {
				// 여기에 지뢰의 개수를 세어 numOfBombs에 넣는 코드 작성
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
void display_numOfBombs(char grid[][Y_VALUE+1], int numOfBombs[][Y_VALUE])
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

int main(void)
{
	char grid[X_VALUE][Y_VALUE+1]; //문자열의 경우 마지막에 NULL이 들어가야 하므로
// 5X5 배열이 아닌 5X6 배열이 되어야 한다.
	int numOfBombs[X_VALUE][Y_VALUE] = {0}; //지뢰의 개수를 넣는 정수형 5X5 배열

	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	display_numOfBombs(grid, numOfBombs);
}
*/

// <6주 과제>
// 프논이 HW6_2
// 실행 예시
// abcd1e2f		//입력된 문자열
// 3			//출력 : 1+2=3
// 
// abcd12e3		//입력된 문자열
// 6			//출력 : 1+2+3=6

/*
#include <stdio.h>
int main(void)
{
	char word[81];
	int i;
	int total = 0;

	printf("Enter one word: ");
	scanf_s("%s", word);

	// 코드 작성

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '0' && word[i] <= '9')
		{
			total += word[i] - '0';
		}
	}

	printf("%d\n", total);

	return 0;
}
*/

// 프논이 Challenge6b
// (단어속 연속숫자)
// 매개변수 word안의 숫자(연속 고려)들이 합을 return하는 함수인 solution함수를 작성하라.

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
	char word[81];
	int total;

	scanf_s("%s", word);
	total = solution(word);
	printf("%d\n", total);
	
	return 0;
}

int solution(char* word)
{
	int i;
	int total = 0;
	int answer = 0;

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '0' && word[i] <= '9')
		{
			answer = answer * 10 + (word[i] - '0');
		}
		else
		{
			total += answer;
			answer = 0;
		}
	}
	total += answer;

	return total;
}
*/

// 프논이 2018 학기말고사
// (스트링 접합)
// 알파벳순(모두 소문자)으로 정렬되어있는 문자열 a와 문자열 b를
// 정렬되게 merge하여 c에 넣는 프로그램을 작성하라.
// 문자열 a와 문자열 b는 길이가 19이하로 가정하자.
// 
// 실행 예시
// ace bd		//입력 : a와 b
// abcde		//출력 : c
// 
// abc abc		//입력 : a와 b
// aabbcc		//출력 : c
// 
// abc xyz		//입력 : a와 b
// abcxyz		//출력 : c

/*
#include <stdio.h>
int main(void)
{
	char a[20], b[20], c[40];
	int i, j, k;

	scanf("%s %s", a, b);

	// 코드 작성

	for (i = 0, j = 0, k = 0; a[i] != '\0' && b[j] != '\0'; k++)
	{
		if (a[i] < b[j])
		{
			c[k] = a[i];
			i++;
		}
		else
		{
			c[k] = b[j];
			j++;
		}
	}
	while (a[i] != '\0')
	{
		c[k] = a[i];
		i++;
		k++;
	}
	while (b[j] != '\0')
	{
		c[k] = b[j];
		j++;
		k++;
	}
	c[k] = '\0';

	printf("%s\n", c);

	return 0;
}
*/