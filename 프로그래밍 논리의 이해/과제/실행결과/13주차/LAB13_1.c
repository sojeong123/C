//20201012 ��ǻ���а� �Ӽ���
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
	same = 1; //�ϴ� �� �迭�� ���ٰ� ���� ������ ��
	//�ΰ��� �迭�� ������ �ٸ����� üũ�Ѵ�. �ٸ��� same�� 0dmfh tjfwjdgksek.
	for (i = 0; i < SIZE; i++)
	{
		if (arrayA[i] != arrayB[i])
		{
			same = 0;
			break;
		}
	}

	if (same == 1)
		printf("ArrayA�� ArrayB�� ����.\n");
	else
		printf("ArrayA�� ArrayB�� �ٸ���.\n");

	//5) 4)�� �����ϰ� �ۼ��Ѵ�.
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
		printf("ArrayA�� ArrayC�� ����.\n");
	else
		printf("ArrayA�� ArrayC�� �ٸ���.\n");

	return 0;
}
*/