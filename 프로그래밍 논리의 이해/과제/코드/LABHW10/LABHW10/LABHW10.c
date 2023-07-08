//LAB10_A
/*
#include <stdio.h>
void print5Stars(void);					
int main(void)
{
	print5Stars();						
	print5Stars();
	print5Stars();
	return 0;
}

void print5Stars(void)					
{
	int i, num = 5;
	for (i = 0; i < num; i++)
		printf("*");
	printf("\n");
	return;							
}
*/

//LAB10_1_1
/*
#include <stdio.h>
void printManyStars(int num);			
int main(void)
{
	printManyStars(3);					
	printManyStars(4);
	printManyStars(5);
	return 0;
}

void printManyStars(int num)		
{
	int i;
	for (i = 0; i < num; i++)
		printf("*");
	printf("\n");
	return;								
}
*/

//LAB10_1_2
/*
#include <stdio.h>
void print5Chars(char ch);				
int main(void)
{
	print5Chars('*');				
	print5Chars('+');
	print5Chars('1');
	return 0;
}

void print5Chars(char ch)			
{
	int i, num = 5;
	for (i = 0; i < num; i++)
		printf("%c", ch);
	printf("\n");
	return;							
}
*/

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

//Challenge10
/*
#include <stdio.h>
void printFibo(int n);
int main(void)
{
	int num, i;
	printf("몇개의 피보나치 수열값을 출력할까요? (3보다 큰 정수): ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
		printFibo(i);

	printf("\n");

	return 0;
}

void printFibo(int n)
{
	int i, fibo1 = 1, fibo2 = 1, fibo;

	if (n == 0 || n == 1) {
		printf("%d ", fibo1);
		return;
	}

	for (i = 2; i <= n; i++) {
		fibo = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fibo;
	}

	printf("%d ", fibo);
}
*/

//HW9_다(사이클)
//입력받은 숫자는 출력 안함.
/*
#include <stdio.h>
int main (void)
{
	int n;

	printf("Enter a number : ");
	scanf_s("%d", &n);
	printf("\n길이는 %d\n", cycleNb(n));
}

int cycleNb(int num)
{
	int count = 1;

	while (num != 1)
	{
		if (num % 2 == 0)
			num /= 2;
		else
			num = num * 3 + 1;
		count++;
		printf("%d ", num);
	}

	printf("\n");
	return count;
}
*/

//입력받은 숫자 출력함.
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