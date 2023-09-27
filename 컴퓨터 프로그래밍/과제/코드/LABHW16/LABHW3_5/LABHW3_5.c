//20201012 컴퓨터학과 임소정
//LABHW3_5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void selectionSort(int list[], int size);

int main(void)
{
	int list[SIZE];
	int i;

	srand(time(NULL));

	printf("발생된 난수 : ");
	for (i = 0; i < SIZE; i++)
	{
		list[i] = rand() % 100;
		printf("%3d ", list[i]);
	}
	printf("\n");

	selectionSort(list, SIZE);

	printf("정렬 후 : ");
	for (i = 0; i < SIZE; i++)
		printf("%3d ", list[i]);
	printf("\n");

	return 0;
}

void selectionSort(int list[], int size)
{
	int i, j, min, temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (list[j] < list[min])
				min = j;
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}
}