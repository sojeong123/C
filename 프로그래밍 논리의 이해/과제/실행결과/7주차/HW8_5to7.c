//20201012 컴퓨터학과 임소정
//HW8_5
/*
#include <stdio.h>
int main(void)
{
	int i, num, factorial = 1;

	printf("Enter a number (>=2): ");
	scanf_s("%d", &num);

	for (i = num; i >= 1; i--)
	{
		factorial *= i;
	}

	printf("%d! = ", num);

	for (i = num; i > 1; i--)
	{
		printf("%d * ", i);
	}

	printf("1 = %d\n", factorial);

	return 0;
}
*/

//HW8_6
/*
#include<stdio.h>
int main(void)
{
	int i, num;
	long long factorial = 1;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		factorial *= i;
		printf("%d! = %lld\n", i, factorial);
	}

	return 0;
}
*/

//HW8_7
/*
#include <stdio.h>
int main(void)
{
	int i, num;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}
*/