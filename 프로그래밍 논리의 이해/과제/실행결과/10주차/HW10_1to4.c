//20201012 컴퓨터학과 임소정
//HW10_1
/*
#include <stdio.h>
void printManyChars(char ch, int num);
int main(void)
{
	char c;
	int n;

	printf("Enter a character to print : ");
	scanf_s("%c", &c);
	printf("Enter the number of characters : ");
	scanf_s("%d", &n);

	printManyChars(c, n);
	return 0;
}

void printManyChars(char ch, int num)
{
	int i;

	for (i = 0; i < num; i++)
		printf("%c", ch);
	printf("\n");
	return;
}
*/

//HW10_2
/*
#include<stdio.h>
void findNPrintBiggest(int a, int b, int c);
int main(void)
{
	int num1, num2, num3;

	printf("Enter three numbers : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	findNPrintBiggest(num1, num2, num3);
	return 0;
}

void findNPrintBiggest(int a, int b, int c)
{
	int big;

	if (a > b)
		big = a;
	else
		big = b;

	if (big < c)
		big = c;

	printf("The Biggest number is %d.\n", big);
	return;
}
*/

//HW10_3
/*
#include<stdio.h>
void printManyStars(int starNum);
int main (void)
{
	int tom, mary, i;

	printf("Tom's score? : ");
	scanf_s("%d", &tom);
	printf("Mary's score? : ");
	scanf_s("%d", &mary);

	printf("-------------Score Histogram----------------\n");
	printf("Tom\t\t: ");
	printManyStars(tom);
	printf("Mary\t\t: ");
	printManyStars(mary);
	return 0;
}

void printManyStars(int starNum)
{
	int i;

	for (i = 0; i < starNum; i++)
		printf("*");
	printf("<%02d>\n", starNum);

	return;
}
*/

//HW10_4
/*
#include<stdio.h>
void printSumMToN(int m, int n);
int main()
{
	int m, n;

printf("Enter two numbers : ");
scanf_s("%d %d", &m, &n);

printSumMToN(m, n);
}

void printSumMToN(int m, int n)
{
	int i, sum = 0;

	for (i = m; i <= n; i++)
		sum += i;

	printf("%d ~ %d의 합 : %d\n", m, n, sum);
	return;
}
*/