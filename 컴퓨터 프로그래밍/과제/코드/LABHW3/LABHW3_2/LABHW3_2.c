///20201012 컴퓨터학과 임소정
//LABHW3_2
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define SIZE 10
void intitArrray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}

void printMinMax(int arr[], int size)
{
	//최대값을 가진 원소와 최소값을 가진 원소를 찾아서 인덱스의 값을 출력
	int i, max = arr[0], min = arr[0], maxIndex = 0, minIndex = 0;
	for (i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			minIndex = i;
		}
	}
	printf("최대값 : 인덱스 = %d, 값 = %d\n", maxIndex, max);
	printf("최소값 : 인덱스 = %d, 값 = %d\n", minIndex, min);
	return;
}

int main(void)
{
	int a[10];
	srand(time(NULL));
	intitArrray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
}