//20201012 컴퓨터학과 임소정

//LAB7_3

//단계 1
/*
#include <stdio.h>
int main(void)
{
	int i = 1;

	while (i < 6)
	{
		printf("%d\n", i * i * i);
		i++;
	}
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	int i = 1;
	int num;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	while (i < num + 1)
	{
		printf("%d\n", i * i * i);
		i++;
	}
}
*/

//LAB7_4

//단계 1
/*
#include <stdio.h>
int main(void)
{
	int num;
	int i = 1;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	while (i < num / 3 + 1)
		{
			printf("%d ", i * 3);
			i++;
		}

	printf("\n");
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	int num;
	int i = 1;

	printf("Enter a number : ");
	scanf_s("%d", &num);

		while (i <= num)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				printf("%d ", i);
			}
			i++;
		}

	printf("\n");
}
*/

//LAB7_5
//단계 1
/*
#include <stdio.h>
int main(void)
{
	int num, i;
	int sum = 0;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	i = 1;

	while (i <= num)
	{
		sum += 3;
		i++;
	}

	printf("3을 %d번 더한 값은 %d이다.\n", num, sum);

	return 0;
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	int num, i;
	int sum = 0;
	int multiple = 1;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	i = 1;

	while (i <= num)
	{
		sum += 3;
		i++;
	}

	i = 1;

	while (i <= num)
	{
		multiple *= 3;
		i++;
	}

	printf("3을 %d번 더한 값은 %d이다.\n", num, sum);
	printf("3을 %d번 곱한 값은 %d이다.\n", num, multiple);

	return 0;
}
*/

//LAB7_6
/*
#include <stdio.h>
int main(void)
{
	int score, student;
	int i = 1;
	int total = 0;

	printf("Enter a student number : ");
	scanf_s("%d", &student);

	while (i <= student)
	{
		printf("Enter a scores : ");
		scanf_s("%d", &score);

		total += score;
		i++;
	}

	printf("The total is %d.\n", total);
	return 0;
}
*/