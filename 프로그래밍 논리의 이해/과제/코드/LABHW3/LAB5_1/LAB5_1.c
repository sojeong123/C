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

	printf("성별\t나이\t키\n");
	printf("%c\t%d\t%f\n", gender, age, height);
}