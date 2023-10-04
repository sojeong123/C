// 20201012 컴퓨터학과 임소정
// HW5a_2 (2차원 배열 돌리기)
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