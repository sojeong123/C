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
//성적 그래프 출력하기
//(main 함수만 사용)

//Tom과 Mary의 성적을 입력받아서
//점수만큼 별표를 찍어주는 프로그램입니다.

//지금은 main 함수만 사용( 숙제에서 출력부분을 함수화함)
//알고리즘 - 별표로 그래프를 찍어주고 나서는 각자의 성적을 숫자
//(%02d 사용: 숫자가 2개 미만이면 그 자리는 0 으로 채움)로 표시해야 합니다.

//1. Tom 의 점수를 읽는다.
//2. Mary 의 점수를 읽는다
//3. Tom 의 별 막대 출력(for 문)
//4. Mary 의 별 막대 출력(for 문)

//실행 예시
//Tom's score? : 4
//Mary's score? : 12
//-------------Score Histogram----------------
//Tom		: ****<04>
//Mary		: ************<12>

//Tom's score? : 5
//Mary's score? : 0
//-------------Score Histogram----------------
//Tom		: *****<05>
//Mary		: <00>






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