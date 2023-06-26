//LAB7_4
//´Ü°è 2
#include <stdio.h>
int main(void)
{
	int num;
	int i = 1;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	if (num % 3 == 0)
	{
		while (i < num / 3 + 1)
		{
			printf("%d ", i * 3);
			i++;
		}
	}

	else if (num % 5 == 0)
	{
		while (i < num / 5 + 1)
		{
			printf("%d ", i * 5);
			i++;
		}
	}

	else if (num % 3 == 0 && num % 5 == 0)
	{
		while (i < num / 5 + 1)
		{
			printf("%d ", i * 3);
			printf("%d ", i * 5);
			i++;
		}
	}

	printf("\n");
}