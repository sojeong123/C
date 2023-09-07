//20201012 컴퓨터학과 임소정
//HW 1_2
#include <stdio.h>
int main(void)
{
	int charge, coin500, coin100, coin50, coin10;

	printf("Enter the amount of charge : ");
	scanf_s("%d", &charge);

	coin500 = charge / 500;
	charge = charge % 500;
	coin100 = charge / 100;
	charge = charge % 100;
	coin50 = charge / 50;
	charge = charge % 50;
	coin10 = charge / 10;

	printf("500 coin : %d\n", coin500);
	printf("100 coin : %d\n", coin100);
	printf("50 coin : %d\n", coin50);
	printf("10 coin : %d\n", coin10);

	return 0;
}