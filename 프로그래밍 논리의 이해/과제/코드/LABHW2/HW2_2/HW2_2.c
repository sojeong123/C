#include <stdio.h>
int main(void)
{
	int number = 7;
	int square, cube;

	square = number * number;
	cube = number * number * number;

	printf("The square number of %d is %d.\n", number, square);
	printf("The cube number of %d is %d.\n", number, cube);
}