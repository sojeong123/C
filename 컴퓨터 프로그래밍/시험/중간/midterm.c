// 동덕여자대학교 컴퓨터학과 20201012 임소정
// 2020년 10월 12일 월요일
// 컴퓨터프로그래밍(02) 장재경교수님 중간고사
// 1번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int n) // 이 함수를 재귀적으로 작성
{
	// 코드 추가
	if (n > 100)
		return 0;
	else
	{
		printf("%d ", n);
		return 1 + f(n * 2);
	}
}

int main(void) // 변경하지 말라
{
	int n;
	scanf("%d", &n);
	printf("end\n%d\n", f(n)); // 
}

// 2번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int processEven(int* p, int size)
{
	// 코드 추가
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		if (*(p + i) % 2 == 0) {
			printf("%d ", *(p + i));
			sum += *(p + i);
		}
	}
	return sum;
}

int main(void) // 변경하지 마라
{
	int i;
	int n;
	int data[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &data[i]);
	printf("end\n%d\n", processEven(data, n));
}
// 3번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define X_VALUE 5 // 2차원 배열의 행의 수 
#define Y_VALUE 5 // 2차원 배열의 열의 수 

void readGridInfo(char grid[][Y_VALUE + 1]) // 변경하지 말라
{
	int i;
	// grid 및 지뢰 정보 입력 
	//printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]);
}

void countGrid(char grid[][Y_VALUE + 1], int nB[][Y_VALUE])
{
	// 코드 작성
	int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++) {
			if (grid[i][j] == '1') {
				if (j - 2 >= 0) {
					nB[i][j - 2]++;
				}
				if (j - 1 >= 0) {
					nB[i][j - 1]++;
				}
				if (j + 1 < Y_VALUE) {
					nB[i][j + 1]++;
				}
				if (j + 2 < Y_VALUE) {
					nB[i][j + 2]++;
				}
			}
		}
	}
}

void display_nB(int nB[][Y_VALUE]) // 변경하지 말라 
{
	int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++)
			printf("%d ", nB[i][j]);
		printf("\n");
	}
}

int main(void) // 변경하지 말라
{
	char grid[X_VALUE][Y_VALUE + 1]; // 문자열 마지막 \0 값 때문에 5*6 배열

	int nB[X_VALUE][Y_VALUE] = { 0 };

	readGridInfo(grid);
	countGrid(grid, nB);
	display_nB(nB);
}

// 4번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char a[20], b[20], c[20];
	int i, j, k;

	scanf("%s", a);
	scanf("%s", b);

	//여기에 코드를 추가하시오. 
	for (i = 0; i < 20; i++) {
		if (a[i] == '\0' || b[i] == '\0') {
			break;
		}
		if (a[i] < b[i]) {
			c[k] = a[i];
			k++;
		}
		else if (a[i] > b[i]) {
			c[k] = b[i];
			k++;
		}
		else {
			c[k] = a[i];
			k++;
		}
	}
	if (a[i] == '\0') {
		for (j = i; j < 20; j++) {
			c[k] = b[j];
			k++;
		}
	}
	else if (b[i] == '\0') {
		for (j = i; j < 20; j++) {
			c[k] = a[j];
			k++;
		}
	}


	printf("%s\n", c); // 변경하지 말라
}

// 5번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing(char s[])
{
	//여기에 코드 작성

	int i = 0;
	int max = 0;
	int count = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= s[i + 1])
		{
			count++;
		}
		else
		{
			if (max < count)
			{
				max = count;
			}
			count = 0;
		}
		i++;
	}
	return max + 1;
}

int main(void) // 변경하지 마라
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing(s));
}

// 6번 (Bonus)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing2(char s[])
{
	// 코드 작성
	int i = 0;
	int max = 0;
	int count = 0;
	int start = 0;
	int end = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= s[i + 1])
		{
			count++;
		}
		else
		{
			if (max < count)
			{
				max = count;
				end = i;
				start = end - max;
			}
			count = 0;
		}
		i++;
	}
	for (int i = start; i <= end; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
	return max + 1;
}

int main(void) //변경하지 말라
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing2(s)); // 문제2
}