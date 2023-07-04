//20201012 컴퓨터학과 임소정
//HW9_1
#include <stdio.h>
int main(void)
{
	char ch;
	int num1, num2, answer, user_answer, op;

	srand(time(NULL));

	do
	{
		num1 = rand() % 100;
		num2 = rand() % 100;
		op = rand() % 4;

		switch (op)
		{
		case 0:
			answer = num1 + num2;
			printf("%d + %d = ", num1, num2);
			break;
		case 1:
			answer = num1 - num2;
			printf("%d - %d = ", num1, num2);
			break;
		case 2:
			answer = num1 * num2;
			printf("%d * %d = ", num1, num2);
			break;
		case 3:
			answer = num1 / num2;
			printf("%d / %d = ", num1, num2);
			break;
		}

		fflush(stdin);
		scanf_s("%d", &user_answer);

		if (answer == user_answer)
			printf("Your answer is right.\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", answer);
		}

		while (getchar() != '\n');

		printf("Do you want to play again? (y/n): ");
		fflush(stdin);
		scanf_s(" %c", &ch);
	} while (ch == 'y');

	return 0;
}