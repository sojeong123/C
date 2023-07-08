//20201012 컴퓨터학과 임소정
//HW9_다(사이클)
/*
#include <stdio.h>
int main(void)
{
	int n;

	printf("Enter a number : ");
	scanf_s("%d", &n);

	printf("길이는 %d.\n", cycleNb(n));
}

int cycleNb(int num)
{
	int count = 1;

	while (num != 1)
	{
		printf("%d ", num);
		if (num % 2 == 0)
			num /= 2;
		else
			num = num * 3 + 1;
		count++;
	}

	printf("%d\n", num);
	return count;
}
*/

//HW9_다(revisited)
/*
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int n;

	while (1)
	{
		printf("Enter a number : ");
		scanf_s("%d", &n);

		if (n == -1)
			break;

		printf("길이는 %d.\n", get_cycle_number(n));
	}
}

int get_cycle_number(int num)
{
	int count = 1;

	while (num != 1)
	{
		printf("%d ", num);
		if (num % 2 == 0)
			num /= 2;
		else
			num = num * 3 + 1;
		count++;
	}

	printf("%d\n", num);
	return count;
}
*/