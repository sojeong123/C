//20201012 컴퓨터학과 임소정
//LAB12_1
//단계 1
/*
#include <stdio.h>
int main(void)
{
	int score[5];
	int i, total = 0;
	int avg;

	score[0] = 71;
	score[1] = 80;
	score[2] = 90;
	score[3] = 85;
	score[4] = 95;

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}

	avg = total / 5;

	printf("Total : %d\n", total);
	printf("Average : %d\n", avg);

	return 0;
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	int scores[5] = { 71, 80, 90, 85, 95 };
	int i, total = 0;
	int avg;

	for (i = 0; i < 5; i++)
	{
		total += scores[i];
	}

	avg = total / 5;

	printf("Total : %d\n", total);
	printf("Average : %d\n", avg);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", scores[i]);
	}

	printf("\n");
	return 0;
}
*/

//단계 3
/*
#include <stdio.h>
int main(void)
{
	int scores[5];
	int i, total = 0;
	int avg;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a score: ");
		scanf_s("%d", &scores[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += scores[i];
	}

	avg = total / 5;

	printf("--------------------\n");
	printf("Total : %d\n", total);
	printf("Average : %d\n", avg);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", scores[i]);
	}

	printf("\n");
	return 0;
}
*/

//단계 4
/*
#include <stdio.h>
int main(void)
{
	int scores[40];
	int i, total = 0;
	int avg;
	int num;

	printf("Enter the number of scores(0 < number <= 40): ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score: ");
		scanf_s("%d", &scores[i]);
	}

	for (i = 0; i < num; i++)
	{
		total += scores[i];
	}

	avg = total / num;

	printf("--------------------\n");
	printf("Total : %d\n", total);
	printf("Average : %d\n", avg);

	for (i = 0; i < num; i++)
	{
		printf("%d ", scores[i]);
	}

	printf("\n");
	return 0;
}
*/