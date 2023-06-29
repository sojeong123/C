//20201012 컴퓨터학과 임소정
// 
//HW7_3
/*
#include <stdio.h>
int main(void)
{
	int num, i;
	int factorial = 1;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	i = 1;

	while (i <= num)
	{
		factorial *= i;
		i++;
	}

	printf("%d의 Factorial 값은 %d이다.\n", num, factorial);

	return 0;
}
*/

//HW7_4
/*
#include <stdio.h>
int main(void)
{
	int i, score, student;
	int total = 0;
	double average = 0.0;

	printf("Enter a student number : ");
	scanf_s("%d", &student);

	i = 1;

	while (i <= student)
	{
		printf("Enter a scores : ");
		scanf_s("%d", &score);

		total += score;
		i++;
	}

	printf("The total is %d.\n", total);

	i = 1;

	while (i <= student)
	{
		average = (double)total / student;		//double형으로 형변환
		i++;
	}

	printf("The average is %.1lf.\n", average);	//소수점 첫째자리까지만 출력

	return 0;
}
*/