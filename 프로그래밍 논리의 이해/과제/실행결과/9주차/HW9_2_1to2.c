//20201012 컴퓨터학과 임소정
//HW9_2_1
/*
#include <stdio.h>
int main(void)
{
	int score;
	int total = 0;
	int count = 0;
	int best_score = 0;
	float average;

	printf("Enter a score (-1 to exit): ");
	scanf_s("%d", &score);

	while (score != -1)
	{
		total += score;
		count++;

		if (score > best_score)
			best_score = score;

		printf("Enter a score (-1 to exit): ");
		scanf_s("%d", &score);
	}

	if (count > 0)
	{
		average = (float)total / count;

		printf("You've entered %d students.\n", count);
		printf("The total is %d.\n", total);
		printf("The average is %.1f.\n", average);
		printf("The best score is %d.\n", best_score);
	}
	else
	{
		printf("You've entered 0 students.\n");
		printf("There is no data.\n");
	}

	return 0;
}
*/

//HW9_2_2
/*
#include <stdio.h>
int main(void)
{
	int score;
	int total = 0;
	int count = 0;
	int best_score = 0;

	while (1)
	{
		printf("Enter a score (-1 for exit): ");
		scanf_s("%d", &score);

		if (score == -1)
			break;

		total += score;
		count++;

		if (score > best_score)
			best_score = score;
	}

	if (count == 0)
	{
		printf("You've entered 0 students.\n");
		printf("There is no data.\n");
	}
	else
	{
		printf("You've entered %d students.\n", count);
		printf("The total is %d.\n", total);
		printf("The average is %.1f.\n", (float)total / count);
		printf("The best score is %d.\n", best_score);
	}

	return 0;
}
*/