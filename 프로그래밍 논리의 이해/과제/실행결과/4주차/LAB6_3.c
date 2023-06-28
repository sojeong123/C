//20201012 컴퓨터학과 임소정
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade: ");
	scanf_s("%c", &grade);

	if (grade == 'A')
	{
		printf("Enter your score: ");
		scanf_s("%d", &score);

		printf("%d점이면 A를 받는 군요.\n", score);
	}
}