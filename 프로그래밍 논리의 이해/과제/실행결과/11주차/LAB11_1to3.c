//20201012 컴퓨터학과 임소정
//LAB11_1
/*
#include <stdio.h>
int sum1ToN(int n);
int main(void)
{
	printf("1부터 5 까지의 합은 %d.\n", sum1ToN(5));
	printf("1부터 7 까지의 합은 %d.\n", sum1ToN(7));
	printf("1부터 10 까지의 합은 %d.\n", sum1ToN(10));
}

int sum1ToN(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}
*/

//LAB11_2
/*
#include <stdio.h>
int power(int a, int b);
int main(void)
{
	int x, y;
	printf("Enter the number X : ");
	scanf_s("%d", &x);
	printf("Enter the number Y : ");
	scanf_s("%d", &y);
	printf("%d ^ %d == %d\n", x, y, power(x, y));
}

int power(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
		result *= a;
	return result;
}
*/

//LAB11_3
/*
#include <stdio.h>
int scoreReading(void);
char gradeDecision(int s1);
int main(void)
{
	int score;
	score = scoreReading();
	printf("Grade is %c!\n", gradeDecision(score));
}

int scoreReading(void)
{
	int score;
	printf("Enter a score : ");
	scanf_s("%d", &score);
	return score;
}

char gradeDecision(int s1)
{
	if (s1 >= 80)
		return 'A';
	else if (s1 >= 50)
		return 'B';
	else
		return 'F';
}
*/