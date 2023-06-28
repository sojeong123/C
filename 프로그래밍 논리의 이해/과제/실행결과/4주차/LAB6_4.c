//20201012 컴퓨터학과 임소정
//단계 1	
/*
#include <stdio.h>
int main(void)
{
	char grade;

	printf("Enter your grade(A or F): ");
	scanf_s("%c", &grade);

	if (grade == 'A')
		printf("축하해요!\n");

	else if (grade == 'F')
		printf("유감이네..\n");
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade(A or F): ");
	scanf_s("%c", &grade);

	if (grade == 'A')
		printf("축하해요!\n");

	else if (grade == 'F')
	{
		printf("Enter your BAD score: ");
		scanf_s("%d", &score);

		printf("점수가 %d점이라니 더 열심히 해야겠네요.\n", score);
	}
}
*/

//단계 3

#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade(A or F): ");
	scanf_s("%c", &grade);

	if (grade == 'A')
	{
		printf("Enter your GOOD score: ");
		scanf_s("%d", &score);

		printf("점수가 %d점이면 좋은 성적을 맞는군요. 계속 열심히해요.\n", score);
	}

	else if (grade == 'F')
	{
		printf("Enter your BAD score: ");
		scanf_s("%d", &score);

		printf("점수가 %d점이라니 더 열심히 해야겠네요.\n", score);
	}
}