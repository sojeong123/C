//20201012 컴퓨터학과 임소정
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade : ");
	scanf_s("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("Congratulation!\n");
		break;

	case 'B':
		printf("Okay, try harder\n");
		break;

	case 'C':
	{
		printf("Enter your score: ");
		scanf_s("%d", &score);

		printf("Try harder, you need to get %d next time.\n", score + 10);
	}
	break;

	case 'D':
	case 'F':
		printf("Sorry, you should take this course again.\n");
		break;

	default:
		printf("Wrong grade!\n");
		break;
	}
}