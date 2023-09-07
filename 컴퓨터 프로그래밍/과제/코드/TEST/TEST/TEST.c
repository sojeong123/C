//20201012 컴퓨터학과 임소정

/*
//LAB 1_1
#include <stdio.h>
int main(void)
{
	int num[4];

	printf("Enter 1th number: ");
	scanf_s("%d", &num[0]);
	printf("Enter 2th number: ");
	scanf_s("%d", &num[1]);
	printf("Enter 3th number: ");
	scanf_s("%d", &num[2]);
	printf("Enter 4th number: ");
	scanf_s("%d", &num[3]);
	printf("Enter 5th number: ");
	scanf_s("%d", &num[4]);
	printf("--------------------------------\n");
	printf("총합은 %d\n", num[0] + num[1] + num[2] + num[3] + num[4]);
	printf("평균은 %d\n", (num[0] + num[1] + num[2] + num[3] + num[4]) / 5);
	printf("--------------------------------\n");
	printf("array[0] = %d\n", num[0]);
	printf("array[1] = %d\n", num[1]);
	printf("array[2] = %d\n", num[2]);
	printf("array[3] = %d\n", num[3]);
	printf("array[4] = %d\n", num[4]);
	return 0;
}
*/

/*
//LAB1_2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[100];
	int num, i;

	srand(time(NULL));

	printf("Enter the number of random numbers (<= 100) : ");
	scanf_s("%d", &num);
	printf("최대값은 %d\n", num);
	printf("--------------------------------\n");
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 100;
		printf("%5d", data[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");

	return 0;
}
*/


//HW 1_1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int data[100];
	int num, i, max = 0;
	int count[10] = { 0 };

	srand(time(NULL));

	printf("Enter the number of random numbers (<= 100) : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 10;
		if (max < data[i])
			max = data[i];
	}

	for (i = 0; i < num; i++)
	{
		count[data[i]]++;
	}

	for (i = 0; i <= max; i++)
	{
		printf("%d의 개수 : %d\n", i, count[i]);
	}

	printf("--------------------------------\n");

	printf("발생된 난수는\n");
	for (i = 0; i < num; i++)
	{
		printf("%5d", data[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}

	return 0;
}