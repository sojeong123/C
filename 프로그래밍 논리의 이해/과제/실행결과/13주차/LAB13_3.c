//20201012 컴퓨터학과 임소정
//LAB13_3
/*
#define SIZE 10
#include <stdio.h>
int main(void)
{
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &num);

		//num이 짝수이면 even에 홀수이면 odd에 넣는다. 각각 인덱스를 사용한다.
		if (num % 2 == 0)
			even[evenIndex++] = num;
		else
			odd[oddIndex++] = num;
	}

	//A)
	printf("\n홀수 출력 :");
	for (i = 0; i < oddIndex; i++)
		printf(" %d", odd[i]);

	//B)
	printf("\n짝수 출력 :");
	for (i = 0; i < evenIndex; i++)
		printf(" %d", even[i]);

	printf("\n");
	return 0;
}
*/