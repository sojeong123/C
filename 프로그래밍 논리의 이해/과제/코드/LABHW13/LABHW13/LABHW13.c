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

//LAB13_2
/*
#define SIZE 12
#include <stdio.h>
int main(void)
{
	int income[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int search;
	int i;

	printf("Ž���� ������? ");
	scanf_s("%d", &search);

	for (i = 0; i < SIZE; i++)
	{
		if (income[i] == search)
		{
			printf("���� %d�� ���� ù��° ���� %d���Դϴ�.\n", search, i + 1);
			break;
		}
	}

	if (i == SIZE)
		printf("���� %d�� ���� ���� �����ϴ�.\n", search);

	return 0;
}
*/

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

//LAB13_5
/*
#include <stdio.h>
int main() {
	int num;
	int binary[8]; // 2������ ������ �迭

	printf("Enter ���(<256): ");
	scanf_s("%d", &num);

	// 10������ 2������ ��ȯ�Ͽ� �迭�� ����
	int i = 0;
	while (num > 0) {
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	// �迭�� �������� ���
	printf("");
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
	printf("\n");

	return 0;
}
*/