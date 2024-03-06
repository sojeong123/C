// 5¹ø
#include <stdio.h>
int main(void)
{
	int arr[7];
	int i, j, temp;

	for (i = 0; i < 7; i++)
	{
		printf("ÀÔ·Â : ");
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