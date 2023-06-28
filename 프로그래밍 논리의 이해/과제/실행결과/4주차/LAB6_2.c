//20201012 컴퓨터학과 임소정
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