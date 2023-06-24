//LAB6_0
/*
#include <stdio.h>
int main(void)
{
	printf("%f %e %E\n", 0.0023456789, 0.0023456789, 0.0023456789);
	printf("%f %e %E\n", 23456789.0, 23456789.0, 23456789.0);
	printf("----|----|\n");
	printf("%d%d\n", 123, 123);
	printf("%5d%5d\n", 123, 123);
	printf("%-5d%-5d\n", 123, 123);
	printf("%10f\n", 0.4567);
	printf("%.2f\n", 0.4567);
	printf("%10.2f\n", 0.4567);
}
*/

//LAB6_1
/*
#include <stdio.h>
int main(void)
{
	printf("I said \"Hello\" and left.\n");
	printf("I was 100%% confident with my behavior.\n");
}
*/

//LAB6_2
/*
#include <stdio.h>
int main(void)
{
	int weight, height;

	printf("Enter your height: ");
	scanf_s("%d", &height);

	printf("Enter your weight: ");
	scanf_s("%d", &weight);

	if (height <= weight + 110)
	printf("You need a diet\n");

	printf("BYE\n");
}
*/

//LAB6_3
/*
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
*/

//LAB6_4

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
/*
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
*/

//LAB6_5

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
/*
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
*/

//HW6_1
/*
#include <stdio.h>
int main(void)
{
	double num1, num2, bigNumber;

	printf("Enter a floating number: ");
	scanf_s("%lf", &num1);

	printf("Enter a floating number: ");
	scanf_s("%lf", &num2);

	if (num1 > num2)
		bigNumber = num1;

	else
		bigNumber = num2;

	printf("The bigger number is %.2f\n", bigNumber);
}
*/

//HW6_2
/*
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade : ");
	scanf_s("%c", &grade);

	if (grade == 'A')
	{
		printf("Congratulation!");
	}

	else if (grade == 'B')
	{
		printf("Okay, try harder");
	}

	else if (grade == 'C')
	{
		printf("Enter your score: ");
		scanf_s("%d", &score);

		printf("Try harder, you need to get %d next time.\n", score+10);
	}

	else if (grade == 'D' || 'F')
	{
		printf("Sorry, you should take this course again.\n");
	}

	else
	{
		printf("Wrong grade!\n");
	}
}
*/

//HW6_3
/*
#include <stdio.h>
int main(void)
{
	char gender;
	int height, weight;

	printf("Enter your gender(M/F): ");
	scanf_s("%c", &gender);

	if (gender == 'F')
	{
		printf("Enter your height: ");
		scanf_s("%d", &height);

		printf("Enter your weight: ");
		scanf_s("%d", &weight);

		if (height <= weight + 110)
		{
			printf("You NEED a diet. Try HARDER.\n");
		}

		else
		{
			printf("You do NOT need a diet. Keep exercising.\n");
		}
	}

	else if (gender == 'M')
	{
		printf("Sorry, this fitness center is for women only.\n");
	}
}
*/