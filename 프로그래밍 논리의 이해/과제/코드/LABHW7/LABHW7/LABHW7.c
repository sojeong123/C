//LAB7_1
/*
#include <stdio.h>
int main(void)
{
	int num;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	switch (num)
	{
		case 1 :
			printf("Spring.\n");
			break;

		case 2 :
			printf("Summer.\n");
			break;

		case 3 :
			printf("Fall.\n");
			break;

		case 4 :
			printf("Winter.\n");
			break;

		default :
			printf("Invalid number.\n");
			break;
	}
}
*/

//LAB7_2
/*
#include <stdio.h>
int main(void)
{
	char op;
	int num1, num2;

	printf("Enter an operator : ");
	scanf_s("%c", &op);

	printf("Enter the first operand : ");
	scanf_s("%d", &num1);

	printf("Enter the second operand : ");
	scanf_s("%d", &num2);

	switch (op)
	{
		case '+' :
			printf("%d + %d = %d\n", num1, num2, num1 + num2);
			break;

		case '-' :
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
			break;

		case '*' :
			printf("%d * %d = %d\n", num1, num2, num1 * num2);
			break;

		case '/' :
			printf("%d / %d = %d\n", num1, num2, num1 / num2);
			break;
	}
}
*/

//HW7_1
/*
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
*/

//HW7_2
#include <stdio.h>
int main(void)
{
	char op;
	int num1, num2, answer;

	printf("Enter an operator : ");
	scanf_s("%c", &op);

	printf("Enter the first operand : ");
	scanf_s("%d", &num1);

	printf("Enter the second operand : ");
	scanf_s("%d", &num2);
	
	printf("%d %c %d = \n", num1, op, num2);
	scanf_s("%d", &answer);

	switch (op)
	{
	case '+':
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;

	case '-':
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;

	case '*':
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;

	case '/':
		printf("%d / %d = %d\n", num1, num2, num1 / num2);
		break;
	}

	switch (answer)
	{
		case num1 + num2:
			printf("Correct!\n");
			break;

		default:
			printf("Wrong!\n");
			break;
		6주차 요약숙제
	}
}