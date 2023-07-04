//20201012 컴퓨터학과 임소정
//LAB9_1
/*
#include <stdio.h>
int main (void)
{
	int height, weight;
	char ch;

	do
	{
		printf("Enter your height : ");
		scanf_s("%d", &height);

		weight = height - 110;

		while (getchar() != '\n');
		printf("Your ideal weight is %d.\n", weight);
		fflush(stdin);
		printf("Do you want to continue(y/n)? : ");
		scanf_s("%c", &ch);
	} while(ch == 'y');

	return 0;
}


//LAB9_2
/*
#include <stdio.h>
int main(void)
{
	char ch;
	int num1, num2, answer, user_answer;

	srand(time(NULL));

	do
	{
		num1 = rand() % 100;
		num2 = rand() % 100;

		printf("%d + %d = ", num1, num2);
		fflush(stdin);
		scanf_s("%d", &user_answer);

		answer = num1 + num2;

		if (answer == user_answer)
			printf("Your answer is right.\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", answer);
		}

		while (getchar() != '\n');

		printf("Do you want to play again?(y/n) : ");
		fflush(stdin);
		scanf_s("%c", &ch);
	} while (ch == 'y');

	return 0;
}
*/

//LAB9_3_1
/*
#include <stdio.h>
int main(void)
{
	int score;
	int total = 0;

	printf("Enter a score(-1 for exit) : ");
	scanf_s("%d", &score);

	while (score != -1)
	{
		total += score;
		printf("Enter a score(-1 for exit) : ");
		scanf_s("%d", &score);
	}

	printf("The total is %d.\n", total);

	return 0;
}
*/

//LAB9_3_2
/*
#include <stdio.h>
int main(void)
{
	int score;
	int total = 0;

	while (1)
	{
		printf("Enter a score(-1 for exit) : ");
		scanf_s("%d", &score);

		if (score == -1)
			break;

		total += score;
	}

	printf("The total is %d.\n", total);

	return 0;
}
*/