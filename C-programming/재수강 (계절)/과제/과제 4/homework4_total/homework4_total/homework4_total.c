// 1��
// ���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է¹޾Ƽ�,\
// Ȧ���� ¦���� ������� ����ϴ� ���α׷��� �ۼ��غ�����.
// �ϴ� Ȧ������ ����ϰ� ����, ¦���� ����ϵ��� �ϼ���.
// ��, 10���� ������ main�Լ� ������ �Է¹޵��� �ϰ�,
// �迭�� ���ڷ� �޾Ƽ� �迭 ���� �����ϴ� Ȧ������ ����ϴ� �Լ���
// ¦������ ����ϴ� �Լ��� ���� �����ؼ�
// �� �Լ����� ȣ���ϴ� �������� ���α׷��� �ۼ��ϼ���.
// ��� ����
// �� 10���� ���� �Է�
// �Է� : 1
// �Է� : 2
// �Է� : 3
// �Է� : 4
// �Է� : 5
// �Է� : 6
// �Է� : 7
// �Է� : 8
// �Է� : 9
// �Է� : 0
// Ȧ�� ��� : 1, 3, 5, 7, 9,
// ¦�� ��� : 2, 4, 6, 8, 0,

/*
#include <stdio.h>
void print_odd(int *arr);
void print_even(int *arr);
int main(void)
{
	int arr[10];
	int i;

	printf("�� 10���� ���� �Է�\n");
	for (i = 0; i < 10; i++)
	{
		printf("�Է� : ");
		scanf_s("%d", &arr[i]);
	}

	print_odd(arr);
	print_even(arr);

	return 0;
}

void print_odd(int *arr)
{
	int i;

	printf("Ȧ�� ��� : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}

void print_even(int *arr)
{
	int i;

	printf("¦�� ��� : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}
*/

// ����� ���� �Լ��� ������ �ʰ�, main�Լ����� �������� �䱸�ϴ� ����� �ۼ��غ�����.
/*
#include <stdio.h>
int main(void)
{
	int arr[10];
	int i;

	printf("�� 10���� ���� �Է�\n");
	for (i = 0; i < 10; i++)
	{
		printf("�Է� : ");
		scanf_s("%d", &arr[i]);
	}

	printf("Ȧ�� ��� : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d, ", arr[i]);
	}
	printf("\n");

	printf("¦�� ��� : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}
	printf("\n");

	return 0;
}
*/

// 5��
// �迭�� ����Ǿ� �ִ� ��ҵ��� ������������ �����ϴ� �Լ��� �����ϼ���.
// �� ���� ���̰� 7�� int�� �迭�� �����ؼ� ����ڷκ��� 7���� ������ �Է¹޵��� �ϼ���.
// �׸��� �Է¹��� ������ ������������ �����ϱ� ���ؼ�,
// �迭�� ���ڷ� �����ϸ鼭 �ռ� ������ �Լ��� ȣ���ϼ���.
// �׸��� ���������� ���ĵǾ����� Ȯ���ϱ� ���ؼ� �迭�� ��ҵ��� ������� ����ϼ���.
// ��� ����
// �Է�: 1
// �Է�: 2
// �Է�: 3
// �Է�: 4
// �Է�: 5
// �Է�: 6
// �Է�: 7
// 7 6 5 4 3 2 1

/*
#include <stdio.h>
void sort(int *arr);
int main(void)
{
	int arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("�Է� : ");
		scanf_s("%d", &arr[i]);
	}

	sort(arr);

	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	return 0;
}

void sort(int *arr)
{
	int i, j, temp;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j]; 
				arr[j] = temp;
			}
		}
	}
}
*/

// ����� ���� �Լ��� ������ �ʰ�, main�Լ����� �������� �䱸�ϴ� ����� �ۼ��غ�����.
/*
#include <stdio.h>
int main(void)
{
	int arr[7];
	int i, j, temp;

	for (i = 0; i < 7; i++)
	{
		printf("�Է� : ");
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j]; 
				arr[j] = temp;
			}
		}
	}

	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	return 0;
}
*/