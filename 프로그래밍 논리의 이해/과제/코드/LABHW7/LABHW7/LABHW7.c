//LAB7_1
/*
#include <stdio.h>
int main(void)
{
	int num;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	switch (num)
	{
		case 1 :
			printf("Spring.\n");
			break;

		case 2 :
			printf("Summer.\n");
			break;

		case 3 :
			printf("Fall.\n");
			break;

		case 4 :
			printf("Winter.\n");
			break;

		default :
			printf("Invalid number.\n");
			break;
	}
}
*/

//LAB7_2
/*
#include <stdio.h>
int main(void)
{
	char op;
	int num1, num2;

	printf("Enter an operator : ");
	scanf_s("%c", &op);

	printf("Enter the first operand : ");
	scanf_s("%d", &num1);

	printf("Enter the second operand : ");
	scanf_s("%d", &num2);

	switch (op)
	{
		case '+' :
			printf("%d + %d = %d\n", num1, num2, num1 + num2);
			break;

		case '-' :
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
			break;

		case '*' :
			printf("%d * %d = %d\n", num1, num2, num1 * num2);
			break;

		case '/' :
			printf("%d / %d = %d\n", num1, num2, num1 / num2);
			break;
	}
}
*/

//HW7_1
/*
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade : ");
	scanf_s("%c", &grade);

	switch (grade)
	{
		case 'A':
			printf("Congratulation!\n");
			break;

		case 'B':
			printf("Okay, try harder\n");
			break;

		case 'C':
		{
			printf("Enter your score: ");
			scanf_s("%d", &score);

			printf("Try harder, you need to get %d next time.\n", score + 10);
		}
			break;

		case 'D':
		case 'F':
			printf("Sorry, you should take this course again.\n");
			break;

		default:
			printf("Wrong grade!\n");
			break;
	}
}
*/

//HW7_2
/*
#include <stdio.h>
int main(void)
{
	char op;
	int num1, num2, answer, right;

	printf("Enter an operator : ");
	scanf_s("%c", &op);

	printf("Enter the first operand : ");
	scanf_s("%d", &num1);

	printf("Enter the second operand : ");
	scanf_s("%d", &num2);

	printf("%d %c %d = ", num1, op, num2);
	scanf_s("%d", &answer);

	switch (op)
	{
	case '+':
		right = num1 + num2;
		break;

	case '-':
		right = num1 - num2;
		break;

	case '*':
		right = num1 * num2;
		break;

	case '/':
		right = num1 / num2;
		break;
	}

	if (answer == right)
		printf("Right answer!\n");
	else
		printf("Wrong!\n%d is the right answer.\n", right);
}
*/

//LAB7_3

//�ܰ� 1
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

//�ܰ� 2
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

//�ܰ� 1
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

//�ܰ� 2
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
//�ܰ� 1
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

	printf("3�� %d�� ���� ���� %d�̴�.\n", num, sum);

	return 0;
}
*/

//�ܰ� 2

//���� �ڵ�
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

	i = 1;					//i�� �ʱ�ȭ ����� ��

	while (i <= num)
	{
		multiple += 3;		//'*'�� �ٲ�� ��
		i++;
	}

	printf("3�� %d�� ���� ���� %d�̴�.\n", num, sum);
	printf("3�� %d�� ���� ���� %d�̴�.\n", num, multiple);

	return 0;
}
*/

//�����ڵ�
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

	printf("3�� %d�� ���� ���� %d�̴�.\n", num, sum);
	printf("3�� %d�� ���� ���� %d�̴�.\n", num, multiple);

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

//HW7_3

//���� �ڵ�
/*
#include <stdio.h>
int main(void)
{
	int num, i;
	int factorial = 1;

	printf("Enter a number : ");
	scanf("%d", &num);

	i = 1;

	while (i <= num)
	{
		factorial *= num;		//num�� i�� �ٲ�� ��
		i++;
	}

	printf("%d�� Factorial ���� %d�̴�.\n", num, factorial);
}
*/

//���� �ڵ�
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

	printf("%d�� Factorial ���� %d�̴�.\n", num, factorial);
	
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
		average = (double)total / student;		//double������ ����ȯ
		i++;
	}

	printf("The average is %.1lf.\n", average);	//�Ҽ��� ù°�ڸ������� ���

	return 0;
}
*/