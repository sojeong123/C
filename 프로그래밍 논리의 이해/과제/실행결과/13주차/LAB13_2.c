//20201012 컴퓨터학과 임소정
//LAB13_2
/*
#define SIZE 12
#include <stdio.h>
int main(void)
{
	int income[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int search;
	int i;

	printf("탐색할 수입은? ");
	scanf_s("%d", &search);

	for (i = 0; i < SIZE; i++)
	{
		if (income[i] == search)
		{
			printf("수입 %d를 갖는 첫번째 달은 %d월입니다.\n", search, i + 1);
			break;
		}
	}

	if (i == SIZE)
		printf("수입 %d를 갖는 달은 없습니다.\n", search);

	return 0;
}
*/