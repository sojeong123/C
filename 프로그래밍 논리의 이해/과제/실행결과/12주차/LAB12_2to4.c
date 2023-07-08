//20201012 컴퓨터학과 임소정
//LAB12_2
//단계 1
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[10];
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
	{
		data[i] = rand() % 100;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\n");
	return 0;
}
*/

//단계 2
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[10];
	int i;
	int total = 0;
	int avg;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
	{
		data[i] = rand() % 100;
	}

	for (i = 0; i < 10; i++)
	{
		total += data[i];
	}

	avg = total / 10;

	printf("평균은 %d.\n", avg);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\n");
	return 0;
}
*/

//LAB12_3
/*
#include <stdio.h>
int main(void)
{
	int income[7];
	int i;
	int max;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income : ");
		scanf_s("%d", &income[i]);
	}

	max = income[0];

	for (i = 1; i < 7; i++)
	{
		if (max < income[i])
		{
			max = income[i];
		}
	}

	printf("----------------------------------\n");
	printf("The best income is %d.\n", max);
	printf("Incomes are\n");

	for (i = 0; i < 7; i++)
	{
		printf("%d ", income[i]);
	}

	printf("\n");
	return 0;
}
*/

//LAB12_4
//단계 1
/*
#include <stdio.h>
int main(void)
{
	int data[20];
	int i;

	for (i = 0; i < 20; i++)
	{
		data[i] = (i + 1) * 2;
	}

	for (i = 0; i < 20; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\n");
	return 0;
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	int data[20];
	int i;
	int num;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 0; i < 20; i++)
	{
		data[i] = num * (i + 1);
	}

	for (i = 0; i < 20; i++)
	{
		printf("%5d", data[i]);

		if (i == 4 || i == 9 || i == 14 || i == 19)
		{
			printf("\n");
		}
	}

	printf("\n");
	return 0;
}
*/