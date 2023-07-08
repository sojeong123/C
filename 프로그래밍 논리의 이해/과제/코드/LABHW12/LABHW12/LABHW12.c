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
//어떤 수(100이하의 수라고 가정)를 읽어서
//그 수만큼의 난수(0부터 99까지의)를 생성하여
//평균과 발생시킨 난수를 출력하는 프로그램을 작성하라.
//출력시 아래의 실행결과처럼
//5 개의 데이터를 한줄에,
//그리고 각 숫자는 5개의 문자영역을 차지(% 5d 사용)하고
//오른쪽 줄맞춤 되도록 하라.
//실행결과
//(난수 발생시 매번 다른 수가 나오도록 하는 것이 맞으나,
//아래의 예는 srand(time(NULL))을 사용하지 않고(의사)난수를 발생시켰다.
//답이 맞는 가를 보기위함이다.
//즉, srand(time(NULL))을 사용하지않고 아래의 결과와 일치하는지 확인한후,
//숙제를 낼때는 srand(…)를 사용하여 제출하라.

//실행결과
//Enter the number of random numbers(<= 100) : 50
//난수의 평균은 48.
//발생된 난수는
//  41	67	34	0	69
//	24	78	58	62	64
//	 5	45	81	27	61
//	91	95	42	27	36
//	91	 4	 2	53	92
//  82	21	16	18	95
//  47	26	71	38	69
//  12	67	99	35	94
//   3	11	22	33	73
//  64	41	11	53	68

//실행결과
//Enter the number of random numbers(<= 100) : 38
//난수의 평균은 50.
//발생된 난수는
//  41	67	34	0	69
//	24	78	58	62	64
//	 5	45	81	27	61
//	91	95	42	27	36
//	91	 4	 2	53	92
//  82	21	16	18	95
//  47	26	71	38	69
//  12	67	99

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num;
	int i, j;
	int total = 0;
	int avg;
	int data[100];

	printf("Enter the number of random numbers(<= 100) : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 100;
		total += data[i];
	}

	avg = total / num;

	printf("난수의 평균은 %d.\n", avg);
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++)
	{
		printf("%5d", data[i]);

		if (i == 4 || i == 9 || i == 14 || i == 19 || i == 24 || i == 29 || i == 34 || i == 39 || i == 44 || i == 49 || i == 54 || i == 59 || i == 64 || i == 69 || i == 74 || i == 79 || i == 84 || i == 89 || i == 94 || i == 99)
		{
			printf("\n");
		}
	}

	printf("\n");
	return 0;
}
*/