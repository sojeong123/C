#include <stdio.h>
int main(void)
{
	int a, b;

	printf("Enter the first number: ");
	scanf_s("%d", &a);
	printf("Enter the second number: ");
	scanf_s("%d", &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
}