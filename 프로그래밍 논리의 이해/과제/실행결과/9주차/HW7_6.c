//20201012 컴퓨터학과 임소정
#include <stdio.h>
int main(void)
{
	int i, number;
	int ones = 0;

	printf("Enter a number : ");
	scanf_s("%d", &number);

	while (ones < number)
	{
		ones++;
		for (i = 0; i < ones; i++)
			printf("1");
		printf("\n");
	}

	return 0;
}