// 동덕여자대학교 컴퓨터학과 20201012 임소정
// 컴퓨터프로그래밍 (01)

// 1번
/* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int n)
{
	if (n > 100)
		return 0;
	else
	{
		printf("%d ", n);
		return 1 + f(n * 2);
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("end\n%d\n", f(n));
}
*/

// 2번
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int processEven(int* p, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		if (*(p + i) % 2 == 0) {
			printf("%d ", *(p + i));
			sum += *(p + i);
		}
	}
	return sum;
}

int main(void)
{
	int i;
	int n;
	int data[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &data[i]);
	printf("%d\n", processEven(data, n));
}
*/

// 3번
/*
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
*/

// 4번
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char a[20], b[20], c[20];
	int i, j, k = 0;
	scanf("%s", a);
	scanf("%s", b);
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
	printf("%s", c);
}
*/

// 5번
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing(char s[])
{
	int i, j, k, max = 0, count = 0;
	for (i = 0; i < strlen(s); i++) {
		for (j = i; j < strlen(s); j++) {
			if (s[j] >= s[j + 1]) {
				count = j - i + 1;
				if (max < count) {
					max = count;
				}
				break;
			}
		}
	}
	return max;
}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing(s));
}
*/

// 6번 (Bonus 가산점)
/*

*/



// 문자열(increasing sequence 2)
// 앞의 increasing sequenc 1에서는 최대 길이만 출력하였다.
// 최대길이의 increasing sequence도 출력하게 하라.
// 문자열을 매개변수로 하여 그 문자열 안에 최대 길이의
// increasing sequence를 출력하고 그 길이를 반환하는 함수인 maxIncreasing2를 작성하라.
// 
// 최대길이의 increasing sequence가 여러개일 경우,
// 가장 앞의 increasing sequence를 출력하라.
// 
// 실행 예시
// pabcabcdaaabcdcd	//입력 : 문자열
// aaabcd			//출력 : 최대 increasing sequence
// 6				//출력 : 최대increasing sequence의 길이
// 
// vxyzoabde			//입력 : 문자열
// vxyz				//출력 : vxyz와 abde중 앞의 것을 출력한다.
// 4				//출력 : 최대increasing sequence의 길이


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing2(char s[])
{
	/*
int i, j, k, max = 0, count = 0, start = 0, end = 0;
	for (i = 0; i < strlen(s); i++) {
		for (j = i; j < strlen(s); j++) {
			if (s[j] >= s[j + 1]) {
				count = j - i + 1;
				if (max < count) {
					max = count;
					start = i;
					end = j;
				}
				break;
			}
		}
	}
	for (k = start; k <= end; k++) {
		printf("%c", s[k]);
	}
	printf("\n");
	return max;
	*/

	// strlen은 사용하지 말자.
	/*
	int i, j, k, max = 0, count = 0, start = 0, end = 0;

	for (i = 0; s[i] != '\0'; i++) {
		for (j = i; s[j] != '\0'; j++) {
			if (s[j] >= s[j + 1]) {
				count = j - i + 1;
				if (max < count) {
					max = count;
					start = i;
					end = j;
				}
				break;
			}
		}
	}
	for (k = start; k <= end; k++) {
		printf("%c", s[k]);
	}
	printf("\n");
	return max;
	*/

int i, j, k, max = 0, count = 0, start = 0, end = 0;

	for (i = 0; s[i] != '\0'; i++) {
		for (j = i; s[j] != '\0'; j++) {
			if (s[j] >= s[j + 1]) {
				count = j - i + 1;
				if (max < count) {
					max = count;
					start = i;
					end = j;
				}
				break;
			}
		}
	}
	for (k = start; k <= end; k++) {
		printf("%c", s[k]);
	}
	printf("\n");
	return max;
}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing2(s));
})