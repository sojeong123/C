//LAB9_1
/*
#include <stdio.h>
int main (void)
{
	int height, weight;
	char ch;

	do
	{
		printf("Enter your height : ");
		scanf_s("%d", &height);

		weight = height - 110;

		while (getchar() != '\n');
		printf("Your ideal weight is %d.\n", weight);
		fflush(stdin);
		printf("Do you want to continue(y/n)? : ");
		scanf_s("%c", &ch);
	} while(ch == 'y');

	return 0;
}
*/

//LAB9_2
/*
#include <stdio.h>
int main(void)
{
	char ch;
	int num1, num2, answer, user_answer;

	srand(time(NULL));

	do
	{
		num1 = rand() % 100;
		num2 = rand() % 100;

		printf("%d + %d = ", num1, num2);
		fflush(stdin);
		scanf_s("%d", &user_answer);

		answer = num1 + num2;

		if (answer == user_answer)
			printf("Your answer is right.\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", answer);
		}

		while (getchar() != '\n');

		printf("Do you want to play again?(y/n) : ");
		fflush(stdin);
		scanf_s("%c", &ch);
	} while (ch == 'y');

	return 0;
}
*/

//LAB9_3_1
/*
#include <stdio.h>
int main(void)
{
	int score;
	int total = 0;

	printf("Enter a score(-1 for exit) : ");
	scanf_s("%d", &score);

	while (score != -1)
	{
		total += score;
		printf("Enter a score(-1 for exit) : ");
		scanf_s("%d", &score);
	}

	printf("The total is %d.\n", total);

	return 0;
}
*/

//LAB9_3_2
/*
#include <stdio.h>
int main(void)
{
	int score;
	int total = 0;

	while (1)
	{
		printf("Enter a score(-1 for exit) : ");
		scanf_s("%d", &score);

		if (score == -1)
			break;

		total += score;
	}

	printf("The total is %d.\n", total);

	return 0;
}
*/

//LAB9_4_0
/*
#include <stdio.h>
int main(void)
{
	int num;

	while (1)
	{
		printf("Enter a number(양수) : ");
		scanf_s("%d", &num);

		if (num > 0)
			break;
	}

	printf("입력된 양수는 %d.\n", num);

	return 0;
}
*/

//LAB9_4_a
/*
#include <stdio.h>
int main()
{
	int count = 0;
	int input;
	int sum = 0;

	while (count < 5)
	{
		do
		{
			printf("0보다 큰 수를 입력<%d번째>: ", count + 1);
			scanf_s("%d", &input);
		} while (input <= 0);

		sum += input;
		count++;
	}

	printf("입력된 값의 총 합: %d\n", sum);

	return 0;
}
*/

//LAB9_4_b
/*
#include <stdio.h>
int main()
{
	int count = 1;
	int input;
	int sum = 0;

	while (count <= 5)
	{
		printf("0보다 큰 수를 입력<%d번째>: ", count);
		scanf_s("%d", &input);

		while (input <= 0)
		{
			printf("0보다 큰 수를 입력<%d번째>: ", count);
			scanf_s("%d", &input);
		}

		sum += input;
		count++;
	}

	printf("입력된 값의 총 합: %d\n", sum);

	return 0;
}
*/

//HW9_1
/*
#include <stdio.h>
int main(void)
{
	char ch;
	int num1, num2, answer, user_answer, op;

	srand(time(NULL));

	do
	{
		num1 = rand() % 100;
		num2 = rand() % 100;
		op = rand() % 4;

		switch (op)
		{
		case 0:
			answer = num1 + num2;
			printf("%d + %d = ", num1, num2);
			break;
		case 1:
			answer = num1 - num2;
			printf("%d - %d = ", num1, num2);
			break;
		case 2:
			answer = num1 * num2;
			printf("%d * %d = ", num1, num2);
			break;
		case 3:
			answer = num1 / num2;
			printf("%d / %d = ", num1, num2);
			break;
		}

		fflush(stdin);
		scanf_s("%d", &user_answer);

		if (answer == user_answer)
			printf("Your answer is right.\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", answer);
		}

		while (getchar() != '\n');

		printf("Do you want to play again? (y/n): ");
		fflush(stdin);
		scanf_s(" %c", &ch);
	} while (ch == 'y');

	return 0;
}
*/

//HW9_2_1
/*
#include <stdio.h>
int main(void)
{
	int score;
	int total = 0;
	int count = 0;
	int best_score = 0;
	float average;

	printf("Enter a score (-1 to exit): ");
	scanf_s("%d", &score);

	while (score != -1)
	{
		total += score;
		count++;

		if (score > best_score)
			best_score = score;

		printf("Enter a score (-1 to exit): ");
		scanf_s("%d", &score);
	}

	if (count > 0)
	{
		average = (float)total / count;

		printf("You've entered %d students.\n", count);
		printf("The total is %d.\n", total);
		printf("The average is %.1f.\n", average);
		printf("The best score is %d.\n", best_score);
	}
	else
	{
		printf("You've entered 0 students.\n");
		printf("There is no data.\n");
	}

	return 0;
}
*/

//HW9_2_2
/*
#include <stdio.h>
int main(void)
{
	int score;
	int total = 0;
	int count = 0;
	int best_score = 0;

	while (1)
	{
		printf("Enter a score (-1 for exit): ");
		scanf_s("%d", &score);

		if (score == -1)
			break;

		total += score;
		count++;

		if (score > best_score)
			best_score = score;
	}

	if (count == 0)
	{
		printf("You've entered 0 students.\n");
		printf("There is no data.\n");
	}
	else
	{
		printf("You've entered %d students.\n", count);
		printf("The total is %d.\n", total);
		printf("The average is %.1f.\n", (float)total / count);
		printf("The best score is %d.\n", best_score);
	}

	return 0;
}
*/

//HW9_3
//LAB9_4_b를 응용
/*
#include <stdio.h>
int main() {
	int count = 1;
	int input;
	int sum = 0;

	while (count <= 5) {
		printf("0보다 큰 수를 입력<%d번째>: ", count);
		scanf_s("%d", &input);

		while (input <= 0) {
			printf("입력이 잘못되었습니다. 0보다 큰 수를 다시 입력<%d번째>: ", count);
			scanf_s("%d", &input);
		}

		sum += input;
		count++;
	}

	printf("입력된 값의 총 합: %d\n", sum);

	return 0;
}
*/

//HW9_4
//아래의 코드는 계수기 제어 반복문과 감시값 제어 반복문 중 어느 것을 사용한 것일까?
//답 : 계수기 제어 반복문
//계수기 제어 반복문은 반복 횟수가 정해져 있을 때 사용한다.
//감시값 제어 반복문은 반복 횟수가 정해져 있지 않을 때 사용한다.
//위의 코드에서는 반복 횟수가 정해져 있으므로 계수기 제어 반복문을 사용한 것이다.

/*
#include <stdio.h>
int main(void)
{
	int count = 1;
	int num = 2;
	int prime = 1;

	do
	{
		prime = 1;
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				prime = 0;
				break;
			}
		}

		if (prime == 1)
		{
			printf("%d번째 소수 %d\n", count, num);
			count++;
		}

		num++;
	} while (count <= 10);

	return 0;
}
*/

//HW9_5 (공식 k값)
/*
#include <stdio.h>
int main(void)
{
	int n;
	int k = 0;

	printf("Enter a number: ");
	scanf_s("%d", &n);

	while (1)
	{
		if (n < 2)
			break;

		n /= 2;
		k++;
	}

	printf("%d\n", k);

	return 0;
}
*/

//HW9_6
/*
#include <stdio.h>
int main(void)
{
	int amount;
	int bread, cookie, cola;
	int total;

	printf("Enter 금액 : ");
	scanf_s("%d", &amount);

	for (bread = 1; bread * 500 <= amount; bread++)
	{
		for (cookie = 1; cookie * 700 <= amount; cookie++)
		{
			for (cola = 1; cola * 400 <= amount; cola++)
			{
				total = bread * 500 + cookie * 700 + cola * 400;

				if (total == amount)
					printf("빵 : %d, 쿠키 : %d, 콜라 : %d\n", bread, cookie, cola);
			}
		}
	}

	return 0;
}
*/

//HW7_6
/*
#include <stdio.h>
int main(void)
{
	int i, number;
	int ones = 0;

	printf("Enter a number : ");
	scanf_s("%d", &number);

	while (ones < number)
	{
		ones++;
		for (i = 0; i < ones; i++)
			printf("1");
		printf("\n");
	}

	return 0;
}
*/