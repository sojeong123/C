//20201012 컴퓨터학과 임소정

//HW12_3
/*
#include <stdio.h>
int main(void)
{
	int incomes[7];
	int i;
	int max;
	int max_index;
	int sum = 0;
	int good_days = 0;
	double average;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income of day %d : ", i + 1);
		scanf_s("%d", &incomes[i]);
	}

	max = incomes[0];
	max_index = 0;

	for (i = 1; i < 7; i++)
	{
		if (max < incomes[i])
		{
			max = incomes[i];
			max_index = i;
		}
	}

	printf("----------------------------------\n");
	printf("The best income is %d on day %d.\n", max, max_index + 1);
	printf("----------------------------------\n");

	for (i = 0; i < 7; i++)
	{
		sum += incomes[i];
	}

	average = (double)sum / 7;

	printf("The total is %d.\n", sum);
	printf("The average is %.1lf.\n", average);
	printf("The good days and their incomes are\n");

	for (i = 0; i < 7; i++)
	{
		if (incomes[i] > average)
		{
			printf("day %d : %d\n", i + 1, incomes[i]);
			good_days++;
		}
	}

	return 0;
}
*/