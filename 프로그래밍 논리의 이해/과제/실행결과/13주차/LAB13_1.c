//20201012 컴퓨터학과 임소정
//LAB13_1
/*
#define SIZE 5
#include <stdio.h>
int main(void)
{
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;
	int same;

	//1)2)
	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[i] = arrayA[SIZE - 1 - i];
	}

	//3)
	printf("ArrayA : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayA[i]);
	printf("\n");

	printf("ArrayB : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayB[i]);
	printf("\n");

	printf("ArrayC : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayC[i]);
	printf("\n");

	//4)
	same = 1; //일단 두 배열이 같다고 값을 설정한 후
	//두개의 배열이 같은가 다른가를 체크한다. 다르면 same을 0dmfh tjfwjdgksek.
	for (i = 0; i < SIZE; i++)
	{
		if (arrayA[i] != arrayB[i])
		{
			same = 0;
			break;
		}
	}

	if (same == 1)
		printf("ArrayA와 ArrayB는 같다.\n");
	else
		printf("ArrayA와 ArrayB는 다르다.\n");

	//5) 4)와 유사하게 작성한다.
	same = 1;
	for (i = 0; i < SIZE; i++)
	{
		if (arrayA[i] != arrayC[i])
		{
			same = 0;
			break;
		}
	}

	if (same == 1)
		printf("ArrayA와 ArrayC는 같다.\n");
	else
		printf("ArrayA와 ArrayC는 다르다.\n");

	return 0;
}
*/