//LAB12_1
//단계 1
/*
#include <stdio.h>
int main(void)
{
	int score[5];
	int i, total = 0;
	int avg;

	score[0] = 71;
	score[1] = 80;
	score[2] = 90;
	score[3] = 85;
	score[4] = 95;

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}

	avg = total / 5;

	printf("Total : %d\n", total);
	printf("Average : %d\n", avg);

	return 0;
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	int scores[5] = { 71, 80, 90, 85, 95 };
	int i, total = 0;
	int avg;

	for (i = 0; i < 5; i++)
	{
		total += scores[i];
	}

	avg = total / 5;

	printf("Total : %d\n", total);
	printf("Average : %d\n", avg);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", scores[i]);
	}

	printf("\n");
	return 0;
}
*/

//단계 3
/*
#include <stdio.h>
int main(void)
{
	int scores[5];
	int i, total = 0;
	int avg;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a score: ");
		scanf_s("%d", &scores[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += scores[i];
	}

	avg = total / 5;

	printf("--------------------\n");
	printf("Total : %d\n", total);
	printf("Average : %d\n", avg);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", scores[i]);
	}

	printf("\n");
	return 0;
}
*/

//단계 4
/*
#include <stdio.h>
int main(void)
{
	int scores[40];
	int i, total = 0;
	int avg;
	int num;

	printf("Enter the number of scores(0 < number <= 40): ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score: ");
		scanf_s("%d", &scores[i]);
	}

	for (i = 0; i < num; i++)
	{
		total += scores[i];
	}

	avg = total / num;

	printf("--------------------\n");
	printf("Total : %d\n", total);
	printf("Average : %d\n", avg);

	for (i = 0; i < num; i++)
	{
		printf("%d ", scores[i]);
	}

	printf("\n");
	return 0;
}
*/

//LAB12_2
//단계 1
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[10];
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
	{
		data[i] = rand() % 100;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\n");
	return 0;
}
*/

//단계 2
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[10];
	int i;
	int total = 0;
	int avg;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
	{
		data[i] = rand() % 100;
	}

	for (i = 0; i < 10; i++)
	{
		total += data[i];
	}

	avg = total / 10;

	printf("평균은 %d.\n", avg);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\n");
	return 0;
}
*/

//LAB12_3
/*
#include <stdio.h>
int main(void)
{
	int income[7];
	int i;
	int max;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income : ");
		scanf_s("%d", &income[i]);
	}

	max = income[0];

	for (i = 1; i < 7; i++)
	{
		if (max < income[i])
		{
			max = income[i];
		}
	}

	printf("----------------------------------\n");
	printf("The best income is %d.\n", max);
	printf("Incomes are\n");

	for (i = 0; i < 7; i++)
	{
		printf("%d ", income[i]);
	}

	printf("\n");
	return 0;
}
*/

//LAB12_4
//단계 1
/*
#include <stdio.h>
int main(void)
{
	int data[20];
	int i;

	for (i = 0; i < 20; i++)
	{
		data[i] = (i + 1) * 2;
	}

	for (i = 0; i < 20; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\n");
	return 0;
}
*/

//단계 2
/*
#include <stdio.h>
int main(void)
{
	int data[20];
	int i;
	int num;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 0; i < 20; i++)
	{
		data[i] = num * (i + 1);
	}

	for (i = 0; i < 20; i++)
	{
		printf("%5d", data[i]);

		if (i == 4 || i == 9 || i == 14 || i == 19)
		{
			printf("\n");
		}
	}

	printf("\n");
	return 0;
}
*/

//HW12_1
/*
#include <stdio.h>
int main(void)
{
	int scores[20];
	int i, j;
	int num;

	printf("Enter the number of scores(<= 20) : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score : ");
		scanf_s("%d", &scores[i]);
	}

	for (i = 0; i < num; i++)
	{
		printf("Student %d : ", i + 1);

		for (j = 0; j < scores[i]; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
*/

//HW12_2
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num, i;
	int sum = 0;
	int rand_num;

	printf("Enter the number of random numbers (<= 100): ");
	scanf_s("%d", &num);

	// 시드(seed) 설정을 위해 현재 시간 사용
	srand(time(NULL));

	for (i = 0; i < num; i++) {
		rand_num = rand() % 100;  // 0부터 99까지의 난수 생성
		sum += rand_num;
	}

	printf("난수의 평균은 %d.\n", sum / num);
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++) {
		rand_num = rand() % 100;  // 0부터 99까지의 난수 생성
		printf("%5d", rand_num);

		if ((i + 1) % 5 == 0) {  // 5개의 숫자마다 줄바꿈
			printf("\n");
		}
	}

	return 0;
}
*/

//HW12_3
/*
#include <stdio.h>
int main(void)
{
	int incomes[7];
	int i;
	int max;
	int max_index;
	int sum = 0;
	int good_days = 0;
	double average;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income of day %d : ", i + 1);
		scanf_s("%d", &incomes[i]);
	}

	max = incomes[0];
	max_index = 0;

	for (i = 1; i < 7; i++)
	{
		if (max < incomes[i])
		{
			max = incomes[i];
			max_index = i;
		}
	}

	printf("----------------------------------\n");
	printf("The best income is %d on day %d.\n", max, max_index + 1);
	printf("----------------------------------\n");

	for (i = 0; i < 7; i++)
	{
		sum += incomes[i];
	}

	average = (double)sum / 7;

	printf("The total is %d.\n", sum);
	printf("The average is %.1lf.\n", average);
	printf("The good days and their incomes are\n");

	for (i = 0; i < 7; i++)
	{
		if (incomes[i] > average)
		{
			printf("day %d : %d\n", i + 1, incomes[i]);
			good_days++;
		}
	}

	return 0;
}
*/