//2���� �ڷ� Page1
//��������

//1. 1��° ���� �����͸� �����Ѵ�.
//1-1. ���� ù��°�� ���� �������ΰ�?
//	   ù��°�� ���� ������ ã��.
//2. 2��° ���� �����͸� �����Ѵ�.
//2-1. ���� �ι�°�� ���� �������ΰ�?
//     �ι�°�� ���� ������ ã��.
//3. 3��° ���� �����͸� �����Ѵ�.
//4. 4��° ���� �����͸� �����Ѵ�.
//5. 5��° ���� �����͸� �����Ѵ�.
//6. 6��° ���� �����͸� �����Ѵ�.

/*
#include <stdio.h>
#define SIZE 6
int main(void)
{
	int a[SIZE] = { 5, 3, 8, 1, 2, 7 };
	int i, j, temp, minIndex;

	for (i = 0; i < SIZE - 1; i++)
		//minIndex�� ã�´�.
	{
		minIndex = i;
		for (j = i + 1; j < SIZE; j++)
		{
			if (a[minIndex] > a[j])
			{
				minIndex = j;
			}
		}
		//i��° ���ҿ� minIndex ��ġ�� ���Ҹ� ��ȯ
		temp = a[minIndex];
		a[minIndex] = a[i];
		a[i] = temp;
	}
	
	for(i=0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
*/

//�������
/*
#include <stdio.h>
#define SIZE 6
int main(void)
{
	int a[] = { 5, 3, 8, 1, 2, 7 };
	int min = 999;

	for (i = 0; i < SIZE; i++)
		if (a[i] < min)
			min = a[i];

	print("�ּҰ� = %d\n", min);			//�ּҰ� ã�� �˰���
	return 0;
}
*/

//������� �������� ����
/*
#include <stdio.h>
#define SIZE 6
int main(void)
{
	int a[] = { 5, 3, 8, 1, 2, 7 };
	int j, i, min, minIndex, temp;
	{
		for (i = 0; j < SIZE, j++)
		{
			min = a[0];				//min = 999;
			minIndex = 0;
			for (i = j; i < SIZE; i++)
				if (a[j] < minIndex)		//if (a[i] < min)
				{
					//min = a[i];
					minIndex = i;	//min = a[i];
				}
			print("�ּҰ� = %d, �ּҰ��� ��ġ = %d\n", min, minIndex);			//�ּҰ� ã�� �˰���
			//��ȯ : 0������ ���� ���� ���� �ڸ� �� ��ȯ

			temp = a[j];
			a[j] = a[minIndex];
			a[minIndex] = temp;
		}
		for (i = 0; j < SIZE; j++)
			printf("%d", a[j]);
		printf("\n");

	return 0;
}
*/

//������� �������� ����
/*
#include <stdio.h>
#define SIZE 6

int main(void)
{
	int a[] = { 5, 3, 8, 1, 2, 7 };
	int j, i, max, maxIndex, temp;
	{
		for (i = 0; j < SIZE, j++)
		{
			max = a[0];				//�ʱ� �ִ밪�� ��ġ
			maxIndex = 0;
			for (i = j; i < SIZE; i++)		//���ĵ��� ���� �κ�
				if (a[j] > maxIndex)		//if (a[i] < min)
				{
					//min = a[i];
					maxIndex = i;	//min = a[i];
				}
			print("�ִ밪 = %d, �ִ밪�� ��ġ = %d\n", max, maxIndex);			//�ּҰ� ã�� �˰���
			//��ȯ : 0������ ���� ���� ���� �ڸ� �� ��ȯ

			temp = a[j];
			a[j] = a[maxIndex];
			a[maxIndex] = temp;
		}
		for (i = 0; j < SIZE; j++)
			printf("%d", a[j]);
		printf("\n");

		return 0;
	}
}
*/

//----------1�����迭 ��----------

/*
//3���� �ڷ� Page8 ������
//2�����迭

//���� 1
	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)

	table[i][j] = i * 10 + j;

	printf("%d ", table[i][j]);

//���� 2
total = 0;
for (i = 0; i < 5; i++)
	for (j = 0; j < 3; j++)
		total += table[i][j];

//���� 3
subTotal = 0;		//������ ��
for (j = 0; j < 3; j++)
	subTotal += table[0][j];
printf("1���� �� = %d\n", subTotal);

//���� 4
for (i = 0; i < 5; i++)
{
	subTotal = 0;
	for (j = 0; j < 3; j++)
		subTotal += table[i][j];
	printf("%d���� �� = %d\n", i + 1, subTotal);
}

//���� 5
subTotal = 0;
for (i = 0; i < 5; i++)			//���� ��
	subTotal += table[i][0];
printf("1���� �� = %d\n", subTotal);

//���� 6
subTotal = 0;
for (i = 0; i < 5; i++)
	subTotal += table[i][j];
printf("%d���� �� = %d\n", j + 1, subTotal);
*/


//3���� �ڷ� Page8 ������
//2���� �迭�� �Լ� �Ű����� ����
int main(void)
{
	int table1[3][5] = { {1, 2, 3, 4, 5},
						 {10, 20, 30, 40, 50},
						 {100, 200, 300, 400, 500} };
	int table2[2][5] = { {1, 2, 3}, {10} };
	
	printTable(table1, 3);			//ȣ��: 2���� �迭�� �̸�, ���� ����
	printTable(table2, 2);			//ȣ��: 2���� �迭�� �̸�, ���� ����
}

void printTable(int t[][5], int rowSize)
{
	for (i = 0; , i < rowSize; i++)
		for (j = 0; j < 5; j++)
			printf("%d ", t[i][j]);
	printf("\n");
}