/****************************************
LAB13_2F 20201012 ��ǻ���а� 1�г� �Ӽ���
*****************************************/
#include <stdio.h>
int indexSearch(int a[], int size, int searchKey);
#define SIZE 12
int main(void)
{
	int incomes[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int income;
	int id;

	printf("Ž���� ������? ");
	scanf_s("%d", &income);

	id = indexSearch(incomes, SIZE, income);
	if (id == -1)
		printf("���� %d�� ���� ���� �����ϴ�\n", income);
	else
		printf("���� %d�� ���� ù��° ���� %d���Դϴ�\n", income, id + 1);
	return 0;
}

int indexSearch(int a[], int size, int searchKey)
{
	int i;
	for (i = 0; i < SIZE; i++)
		if (a[i] == searchKey)
			return i;
	return -1;
}
