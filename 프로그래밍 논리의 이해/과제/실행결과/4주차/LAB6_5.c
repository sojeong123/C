//20201012 컴퓨터학과 임소정

//단계 1
/*
#include <stdio.h>
int main(void)
{
	int score;

	printf("Enter your score: ");
	scanf_s("%d", &score);

	if (score >= 50)
		printf("The grade is A!\n");

	else
		printf("The grade is F!\n");
}
*/

//단계 2

#include <stdio.h>
int main(void)
{
	int score;

	printf("Enter your score: ");
	scanf_s("%d", &score);

	if (score >= 80)
		printf("The grade is A!\n");

	else if (score >= 50)
		printf("The grade is B!\n");

	else if (score >= 30)
		printf("The grade is C!\n");

	else
		printf("The grade is F!\n");
}
