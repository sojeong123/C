//20201012 컴퓨터학과 임소정
//LAB10_5_0
/*
#include <stdio.h>
int main(void)
{
	int num, i;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			printf("%d\n", i);
	}
	return 0;
}
*/

//LAB10_5_1
/*
#include <stdio.h>
void print_divisor(int num);
int main(void)
{
	int num;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	print_divisor(num);
	return 0;
}

void print_divisor(int num)
{
	int i;

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			printf("%d\n", i);
	}
	return;
}
*/