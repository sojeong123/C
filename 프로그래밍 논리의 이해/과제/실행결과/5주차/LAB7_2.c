//20201012 컴퓨터학과 임소정
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
}