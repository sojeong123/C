//20201012 컴퓨터학과 임소정
#include <stdio.h>
int getMax(int a[], int n);
int getMin(int a[], int n);
void printArray(int a[], int n);
void printStar(int a[], int n);
int main(void)
{
	int arr[5] = { 0 };
	int i, sum = 0, avg = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &arr[i]);
	}

	printf("\n데이터 : ");
	printArray(arr, 5);

	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}

	avg = sum / 5;

	printf("\n평균은 %d.\n", avg);

	printf("\n평균과의 거리 : ");
	for (i = 0; i < 5; i++)
	{
		if (avg - arr[i] < 0)
		{
			printf("%d ", arr[i] - avg);
		}
		else
		{
			printf("%d ", avg - arr[i]);
		}
	}

	printf("\n");
	printStar(arr, 5);

	return 0;
}

int getMax(int a[], int n)
{
	int i, max = a[0];

	for (i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}

	return max;
}

int getMin(int a[], int n)
{
	int i, min = a[0];

	for (i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}

	return min;
}

void printArray(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void printStar(int a[], int n)
{
	int i, max, min;

	max = getMax(a, n);
	min = getMin(a, n);

	printf("%d : ", max);
	for (i = 0; i < max; i++)
	{
		printf("*");
	}

	printf("\n%d : ", min);
	for (i = 0; i < min; i++)
	{
		printf("*");
	}
}
*/
