//20201012 컴퓨터학과 임소정
//HW1_1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int count[10], data[100], num, i;
	srand(time(NULL));

	printf("Enter the number of random numbers(<=100): ");
	scanf("%d", &num);

	for (i = 0; i < 10; i++)
		count[i] = 0;

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 10;
		switch (data[i])
		{
		case 0:
			count[0]++;
			break;

		case 1:
			count[1]++;
			break;

		case 2:
			count[2]++;
			break;

		case 3:
			count[3]++;
			break;

		case 4:
			count[4]++;
			break;

		case 5:
			count[5]++;
			break;

		case 6:
			count[6]++;
			break;

		case 7:
			count[7]++;
			break;

		case 8:
			count[8]++;
			break;

		case 9:
			count[9]++;
			break;
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d의 개수는 %d\n", i, count[i]);
	printf("---------------------------------------\n");
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++)
	{
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}
	return 0;
}