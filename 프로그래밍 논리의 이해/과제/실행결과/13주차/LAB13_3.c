//20201012 ��ǻ���а� �Ӽ���
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

		//num�� ¦���̸� even�� Ȧ���̸� odd�� �ִ´�. ���� �ε����� ����Ѵ�.
		if (num % 2 == 0)
			even[evenIndex++] = num;
		else
			odd[oddIndex++] = num;
	}

	//A)
	printf("\nȦ�� ��� :");
	for (i = 0; i < oddIndex; i++)
		printf(" %d", odd[i]);

	//B)
	printf("\n¦�� ��� :");
	for (i = 0; i < evenIndex; i++)
		printf(" %d", even[i]);

	printf("\n");
	return 0;
}
*/