//20201012 컴퓨터학과 임소정

//LAB8_5

//LAB8_5_1
//for문 사용
/*
#include <stdio.h>
int main(void)
{
	int i, row, column;

	printf("Enter the number of rows : ");
	scanf_s("%d", &row);

	printf("Enter the number of columns : ");
	scanf_s("%d", &column);

	for (int i = 1; i <= row; i++)
		{
			for (int j = 1; j <= column; j++)
			{
				printf("*");
			}
			printf("\n");
	}
}
*/

//LAB8_5_2
//while문 사용
/*
#include <stdio.h>
int main(void)
{
	int i, j, row, column;

	printf("Enter the number of rows : ");
	scanf_s("%d", &row);

	printf("Enter the number of columns : ");
	scanf_s("%d", &column);

	i = 1;
	while (i <= row)
	{
		int j = 1;
		while (j <= column)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
*/