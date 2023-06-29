//20201012 컴퓨터학과 임소정
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