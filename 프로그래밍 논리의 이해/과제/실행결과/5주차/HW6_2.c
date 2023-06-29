//20201012 컴퓨터학과 임소정
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade : ");
	scanf_s("%c", &grade);

	if (grade == 'A')
	{
		printf("Congratulation!\n");
	}

	else if (grade == 'B')
	{
		printf("Okay, try harder.\n");
	}

	else if (grade == 'C')
	{
		printf("Enter your score: ");
		scanf_s("%d", &score);

		printf("Try harder, you need to get %d next time.\n", score + 10);
	}

	else if (grade == 'D' || grade == 'F')
	{
		printf("Sorry, you should take this course again.\n");
	}

	else
	{
		printf("Wrong grade!\n");
	}
}