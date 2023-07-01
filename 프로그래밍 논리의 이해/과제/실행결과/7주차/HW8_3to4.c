//20201012 컴퓨터학과 임소정

//HW8_3
/*
#include <stdio.h>
int main(void)
{
	int i, j, row, column;

	printf("Enter the number of rows : ");
	scanf_s("%d", &row);

	printf("Enter the number of columns : ");
	scanf_s("%d", &column);

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= column; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
*/

//HW8_4

//HW8_4_1 (for문 사용)
/*
#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			if (j % 2 == 0)
			{
				printf("%d * %d = %d\t", i, j, j * i);
			}
		}
		printf("\n");
	}
	return 0;
}
*/

//HW8_4_2 (while문 사용)
/*
#include <stdio.h>
int main(void)
{
	int i = 1;
	int j = 1;

	while (i <= 9)
	{
		while (j <= 8)
		{
			if (j % 2 == 0)
			{
				printf("%d * %d = %d", i, j, j * i);
				printf("\t");
			}
			j++;		//내부 while 루프에서 j를 증가시키지 않으면 무한루프에 빠짐
		}
		printf("\n");
		j = 1;			//j를 1로 초기화하지 않으면 무한루프에 빠짐
		i++;			//외부 while 루프에서 i를 증가시키지 않으면 무한루프에 빠짐
	}
}
*/