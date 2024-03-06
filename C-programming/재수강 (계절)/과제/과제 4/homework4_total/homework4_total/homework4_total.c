// 1번
// 길이가 10인 배열을 선언하고 총 10개의 정수를 입력받아서,\
// 홀수와 짝수를 구분지어서 출력하는 프로그램을 작성해보세요.
// 일단 홀수부터 출력하고 나서, 짝수를 출력하도록 하세요.
// 단, 10개의 정수는 main함수 내에서 입력받도록 하고,
// 배열을 인자로 받아서 배열 내에 존재하는 홀수만을 출력하는 함수와
// 짝수만을 출력하는 함수를 각각 정의해서
// 이 함수들을 호출하는 형식으로 프로그램을 작성하세요.
// 출력 예시
// 총 10개의 숫자 입력
// 입력 : 1
// 입력 : 2
// 입력 : 3
// 입력 : 4
// 입력 : 5
// 입력 : 6
// 입력 : 7
// 입력 : 8
// 입력 : 9
// 입력 : 0
// 홀수 출력 : 1, 3, 5, 7, 9,
// 짝수 출력 : 2, 4, 6, 8, 0,

/*
#include <stdio.h>
void print_odd(int *arr);
void print_even(int *arr);
int main(void)
{
	int arr[10];
	int i;

	printf("총 10개의 숫자 입력\n");
	for (i = 0; i < 10; i++)
	{
		printf("입력 : ");
		scanf_s("%d", &arr[i]);
	}

	print_odd(arr);
	print_even(arr);

	return 0;
}

void print_odd(int *arr)
{
	int i;

	printf("홀수 출력 : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}

void print_even(int *arr)
{
	int i;

	printf("짝수 출력 : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}
*/

// 사용자 정의 함수를 만들지 않고, main함수에서 문제에서 요구하는 기능을 작성해보세요.
/*
#include <stdio.h>
int main(void)
{
	int arr[10];
	int i;

	printf("총 10개의 숫자 입력\n");
	for (i = 0; i < 10; i++)
	{
		printf("입력 : ");
		scanf_s("%d", &arr[i]);
	}

	printf("홀수 출력 : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d, ", arr[i]);
	}
	printf("\n");

	printf("짝수 출력 : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}
	printf("\n");

	return 0;
}
*/

// 5번
// 배열에 저장되어 있는 요소들을 내림차순으로 정렬하는 함수를 정의하세요.
// 그 다음 길이가 7인 int형 배열을 선언해서 사용자로부터 7개의 정수를 입력받도록 하세요.
// 그리고 입력받은 정수를 내림차순으로 정렬하기 위해서,
// 배열을 인자로 전달하면서 앞서 정의한 함수를 호출하세요.
// 그리고 마지막으로 정렬되었음을 확인하기 위해서 배열의 요소들을 순서대로 출력하세요.
// 출력 예시
// 입력: 1
// 입력: 2
// 입력: 3
// 입력: 4
// 입력: 5
// 입력: 6
// 입력: 7
// 7 6 5 4 3 2 1

/*
#include <stdio.h>
void sort(int *arr);
int main(void)
{
	int arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("입력 : ");
		scanf_s("%d", &arr[i]);
	}

	sort(arr);

	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	return 0;
}

void sort(int *arr)
{
	int i, j, temp;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j]; 
				arr[j] = temp;
			}
		}
	}
}
*/

// 사용자 정의 함수를 만들지 않고, main함수에서 문제에서 요구하는 기능을 작성해보세요.
/*
#include <stdio.h>
int main(void)
{
	int arr[7];
	int i, j, temp;

	for (i = 0; i < 7; i++)
	{
		printf("입력 : ");
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j]; 
				arr[j] = temp;
			}
		}
	}

	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	return 0;
}
*/