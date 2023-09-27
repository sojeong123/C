//20201012 컴퓨터학과 임소정
//LAB16_1 (맨 밑에 가나다 합친 것 있습니다.)

//(가)
/*
#include <stdio.h>
int main(void)
{
	int table[5][3] = { 0 };
	int i, j;

	printf("가>\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}

	return 0;
}
*/

//(나)
/*
#include <stdio.h>
int main(void)
{
	int table[5][3] = { 0 };
	int i, j;

	printf("나>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", table[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
*/

//(다)
/*
#include <stdio.h>
int main(void)
{
	int table[5][3] = { 0 };
	int i, j, sum = 0;

	printf("다>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			sum += table[i][j];

	printf("Total is %d.\n", sum);

	return 0;
}
*/

//(가나다)
#include <stdio.h>
int main(void)
{
	int table[5][3] = { 0 };
	int i, j, sum = 0;

	printf("가>\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}

	printf("나>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", table[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	printf("다>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			sum += table[i][j];

	printf("Total is %d.\n", sum);

	return 0;
}
