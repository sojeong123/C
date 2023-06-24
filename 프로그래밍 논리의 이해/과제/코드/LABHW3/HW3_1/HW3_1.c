#include <stdio.h>
int main(void)
{
	int score1, score2, average;

	printf("Enter two scores: ");
	scanf_s("%d %d", &score1, &score2);

	average = (score1 + score2) / 2;
	printf("The average of is %d.\n", average);
}