//20201012 컴퓨터학과 임소정
#include <stdio.h>
int main(void)
{
	char op;
	int num1, num2, answer, right;

	printf("Enter an operator : ");
	scanf_s("%c", &op);

	printf("Enter the first operand : ");
	scanf_s("%d", &num1);

	printf("Enter the second operand : ");
	scanf_s("%d", &num2);

	printf("%d %c %d = ", num1, op, num2);
	scanf_s("%d", &answer);

	switch (op)
	{
	case '+':
		right = num1 + num2;
		break;

	case '-':
		right = num1 - num2;
		break;

	case '*':
		right = num1 * num2;
		break;

	case '/':
		right = num1 / num2;
		break;
	}

	if (answer == right)
		printf("Right answer!\n");
	else
		printf("Wrong!\n%d is the right answer.\n", right);
}