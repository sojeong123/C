// 1
// cycleNB와 유사한 문제다.
// 주어진 입력 n에 2씩 곱하면서 100이하의 수로 등비수열을 만들려 한다.
// 입력이 9라면,
// 9 18 36 72가 우리가 원하는 등비수열이다.
// 이 등비수열과 그 길이(여기에서는 4)를 출력하는 프로그램을 작성하라.
// 
// 실행 예시
// 9			//입력 : n
// 9 18 36 72	//출력 : 공비가 2이고 100 이하인 등비수열
// 4			//출력 : 등비수열의 길이
// 
// 50			//입력 : n
// 50 100		//출력 : 공비가 2이고 100 이하인 등비수열
// 2			//출력 : 등비수열의 길이
// 
// 재귀 함수를 사용하라.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int n)
{
	//이 함수를 재귀적으로 작성
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


// 지뢰찾기
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


// 지뢰찾기 변형(2차원 배열)
// 위의 지뢰찾기를 조금 변형한 문제다.
// char형 2차원배열인 grid에는 0 또는 1(지뢰)의 문자가 입력되어 있다.
// 정수형 배열인 nB에서
// nB[i][j]는 grid[i][j] 주변에 다음과 같이
// 행의 왼쪽 2개와 오른쪽2개, 총 4개의 숫자 1들의 합을 저장한다.
// - 왼쪽
// - 왼쪽의 왼쪽
// - 오른쪽
// - 오른쪽의 오른쪽
// 
// 최종적으로 nB배열을 출력한다.
// 
// 예를 들어, 다음과 같이 지뢰가 grid배열에 입력되었을떄,
// 10011
// 10110
// 00000
// 10001
// 00001
// 
// nB 배열의 첫번쨰 행에는
// 02311
// 이 저장된다.
// 
// 즉,
// nb[0][0] = grid[0][1] + grid[0][2] = 0
// nb[0][1] = grid[0][0] + grid[0][2] + grid[0][3] = 2
// nb[0][2] = grid[0][0] + grid[0][1] + grid[0][3] + grid[0][4] = 3
// nb[0][3] = grid[0][1] + grid[0][2] + grid[0][4] = 1
// nb[0][4] = grid[0][2] + grid[0][3] = 1
// 
// 배열 nB의 원소들을 출력하면 다음과 같다.
// 0 2 3 1 1
// 1 3 2 1 2
// 0 0 0 0 0
// 0 1 2 1 0
// 0 0 1 1 0
// 
// 실행 예시
// 10011
// 10110
// 00000
// 10001
// 00001		//입력 : 위의 5줄을 입력해서, grid 배열에 넣는다.
// 0 2 3 1 1	//출력 : nB배열의 첫번째 행
// 1 3 2 1 2	//출력 : nB배열의 두번째 행
// 0 0 0 0 0	//출력 : nB배열의 세번째 행
// 0 1 2 1 0	//출력 : nB배열의 네번째 행
// 0 0 1 1 0	//출력 : nB배열의 다섯번째 행

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
*/


// 문자열(increasing sequence 1)
// 문자열 abcdf처럼 알파벳 순으로 이루어진 것을 increasing sequence라고 하자.
// 즉, 선행 알파벳의 ascii값과 같거나, 더 큰 알파벳이 뒤에 나오는 sequence다.
// 이런 정의에 의하면
// baf는 increasing sequence가 아니다.
// 
// 길이가 50미만인 문자열을 읽어들여서,
// 그 문자열 안에서 연속적으로 나타내는
// 최대길이의 increasing sequence를 찾는 프로그램을 작성하라.
// 문자열을 매개변수로 하여 그 문자열 안에 최대 길이의
// increasing sequence를 찾아서 그 길이를 반환하는 함수인 maxIncreasing를 작성하라.
// 
// pabcabcdaaabcdcd의 경우
// p abc abcd aaabcd가 increasing sequence가 되며,
// 이 중 가장 긴 것은 aaabcd이다.
// increasing sequence의 최대 길이를 출력한다.
// 
// 실행 예시
// pabcabcdaaabcdcd	//입력 : 문자열
// 6				//출력 : increasing sequence의 최대 길이
// 
// orwyzabd			//입력 : 문자열
// 5				//출력 : increasing sequence의 최대 길이

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing(char s[])
{
	// 코드 작성
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
	// strlen, strcpy 등 문자열 함수를 사용하지 말고 작성하자.
int i, j, k, max = 0, count = 0, start = 0, end = 0;


}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing2(s));
}


// 문자열 합치기
// 크기가 20미만인 2개의 문자열a, 문자열b를 입력받아,
// 두 문자열의 같은 위치를 비교하여, 
// 알파벳 순서가 빠른 문자만 문자열c에 저장한후, 출력하는 프로그램을 작성하라.
// 마지막에 한쪽 문자열에만 문자들이 남을 경우, 남은 문자들을 그대로 c에 복사한다.
// 문자열은 모두 소문자로만 이루어져 있다.
// 
// 실행 예시
// abcde		//입력 : 첫번째 문자열
// xyz			//입력 : 두번째 문자열
// abcde		//출력
// 
// mnpq			//입력 : 첫번째 문자열
// axbyccc		//입력 : 두번째 문자열
// anbqccc		//출력

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


// 짝수의 합 (정수형 배열과 포인터)
// 인수로 전달받은 배열 중에서 짝수를 출력하고
// 그들의 합을 반환하는 함수인 processEven를 작성하라.
// 
// 실행 예시
// 5			//n을 입력
// 4 6 7 8 10	//n개의 정수를 입력
// 4 6 8        //출력 : 짝수들 출력
// 18			//합 출력
// 
// 4			//n을 입력
// 50 63 21 10	//n개의 정수를 입력
// 50 10		//출력 : 짝수들 출력
// 60			//합 출력

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int processEven(int* p, int size)
{
	// 포인터가 이동하는 방법, 즉 포인터의 값을 변화시키는 방법으로 작성하자.
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