// 5개의 문자를 입력받아
// 1차원 배열에 넣고
// 5개의 숫자를 오른족으로 하나씩 돌려서 출력한다.
// 실행 예시
// 10 20 30 40 50	//입력
// 50 10 20 30 40	//출력
//
// 10 20 30 40 50	//입력
// 20 30 40 50 10	//출력

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void initArray(int arr[], int size)
{
	int i, k=0;
	for (i = 0; i <size; i++)
	{
		scanf("%d", &arr[i]);
	}
	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}

void turnArray(int arr1[], int arr2[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		arr2[i] = arr1[(i + 1) % size];
	}
	return;
}

int main(void)
{
	int arr1[5];
	int arr2[5];
	int i;
	int n;

	initArray(arr1, 5);
	turnArray(arr1, arr2, 5);
	printArray(arr2, 5);
}
*/


// 1차원 배열 rotate
// 5개의 문자를 입력받아 배열에 넣고
// n을 입력받은후
// 5개의 숫자를 오른쪽으로 하나씩 돌려서 출력하는 것을 n번 반복한다.
// 실행 예시
// 10 20 30 40 50	//입력 (5개의 정수 입력)
// 2		//입력 : 반복의 횟수는 2
// 50 10 20 30 40	//출력 : 1회전
// 40 50 10 20 30	//출력 : 2회전

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void initArray(int arr[], int size)
{
	int i, k = 0;
	for (i = 0; i <size; i++)
	{
		scanf("%d", &arr[i]);
	}
	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}
*/

// (문자열)패스워드체크
// 패스워드에 대한 안전도를 체크하기위한 하나의 방법은 다음과 같다.
// 패스워드가 주어졌을때 각 문자에 대해서
// 그 문자를 포함해서 연속된 문자들이 세 개 있으면 안전도가 좋지 않는 경우이다.
// abc, cde, xyz, 123, 567이 여기에 해당된다.
// acdeb의 경우
// cde는 c를 시작으로 d, e로 연속된 문자가 나타난다.
// acd, dea, eb, b는 연속된 문자들이 아니다.
// 
// 문자열로 주어진 패스워드에 대해서
// 연속된 세개의 문자들이 나타나는 첫 부분을 1로 나타내고
// 나머지 문자부분은 0으로 출력 하는 문제이다.
// 
// 즉, 패스워드 acdeb에 대해서
// 01000을 출력하는 프로그램을 작성하라.
// 
// 실행 예시
// abc123	//입력
// 100100	//출력
// 
// acdeb	//입력
// 01000	//출력
// 
// aaaabc
// 000100
// 
// 1234444
// 1100000


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_word_in_word(char w1[], int start);
int is_word_in_word(char w1[], int start)
{
	if (w1[start] + w1[start + 2] == w1[start + 1] * 2 && w1[start] != w1[start + 1] && w1[start] != w1[start + 2] && w1[start + 1] != w1[start + 2])
		return 1;
	else
		return 0;
}
int main(void)
{
	char passwd[20];

	scanf("%s", passwd);
	for (int i = 0; passwd[i] != '\0'; i++)
		printf("%d", is_word_in_word(passwd, i));
	printf("\n");
	return 0;
}

