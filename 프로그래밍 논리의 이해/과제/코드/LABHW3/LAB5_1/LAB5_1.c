#include <stdio.h>
int main(void)
{
	char gender;
	int age;
	float height;

	printf("Enter your gender: ");
	scanf_s("%c", &gender);

	printf("Enter your age: ");
	scanf_s("%d", &age);

	printf("Enter your height: ");
	scanf_s("%f", &height);

	printf("����\t����\tŰ\n");
	printf("%c\t%d\t%f\n", gender, age, height);
}