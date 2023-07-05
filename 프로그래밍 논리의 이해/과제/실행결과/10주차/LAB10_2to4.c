//20201012 컴퓨터학과 임소정
//LAB10_2
/*
#include <stdio.h>
void findNPrintBig(int n1, int n2);
int main(void)
{
	int num1, num2;

	printf("Enter two numbers : ");
	scanf_s("%d %d", &num1, &num2);
	findNPrintBig(num1, num2);
}

void findNPrintBig(int n1, int n2)
{
	int big;

	if (n1 > n2)
		big = n1;
	else
		big = n2;

	printf("Big number is %d.\n", big);
	return;
}
*/

//LAB10_3
/*
#include <stdio.h>
int main(void)
{
	int tom, mary, i;

	printf("Tom's score? : ");
	scanf_s("%d", &tom);
	printf("Mary's score? : ");
	scanf_s("%d", &mary);

	printf("-------------Score Histogram----------------\n");
	printf("Tom\t\t: ");
	for (i = 0; i < tom; i++)
		printf("*");
	printf("<%02d>\n", tom);
	printf("Mary\t\t: ");
	for (i = 0; i < mary; i++)
		printf("*");
	printf("<%02d>\n", mary);
	return 0;
}
*/

//LAB10_4
/*
#include<stdio.h>
void printSum1ToN(int a);
int main()
{
	int n;

	printf("Enter a number : ");
	scanf_s("%d", &n);

	printSum1ToN(n);
}

void printSum1ToN(int a)
{
	int i, sum = 0;

	for (i = 1; i <= a; i++)
		sum += i;

	printf("1~%d의 합 : %d\n", a, sum);
	return;
}
*/