/****************************************
LAB13_1F 20201012 ��ǻ���а� 1�г� �Ӽ���
*****************************************/
#define SIZE 5
#include <stdio.h>

void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);

int main(void)
{
	int arrayA[SIZE] = { 1,2,3,4,1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[5 - 1 - i] = arrayB[i];
	}

		printArray(arrayA, SIZE);
		printArray(arrayB, SIZE);
		printArray(arrayC, SIZE);

		if (equalArray(arrayA, arrayB, SIZE))
			printf("ArrayA�� arrayB�� ����.\n");
		else
			printf("ArrayA�� arrayB�� �ٸ���.\n");

		if (equalArray(arrayA, arrayC, SIZE))
			printf("ArrayA�� arrayC�� ����.\n");
		else
			printf("ArrayA�� arrayC�� �ٸ���.\n");
	
}

void printArray(int a[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
	return;
}

int equalArray(int a[], int b[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (a[i] != b[i])
		{
			return 0;
			break;
		}
	}
	return 1;
}