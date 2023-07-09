//20201012 컴퓨터학과 임소정
//HW12_1
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