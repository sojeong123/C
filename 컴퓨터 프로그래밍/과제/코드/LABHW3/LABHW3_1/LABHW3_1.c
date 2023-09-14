//20201012 ��ǻ���а� �Ӽ���
//LABHW3_1
#include <stdio.h>
int main(void)
{
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	int keyIndex;

	printf("���� %d\n", sumList(list, 10));
	printf("���� ū ���� %d\n", maxList(list, 10));
	printf("Ž���� ����? ");
	scanf_s("%d", &value);
	//value�� list�� �ִ°��� �Ǻ��Ͽ� "����" Ȥ�� "**��°�� �ִ�"�� ���
	keyIndex = indexSearh(list, 10, value);
	if (keyIndex == -1)
		printf("����\n");
	else
		printf("�� %d�� ���� ù��° ���� %d��°�� �ֽ��ϴ�.\n", value, keyIndex+1);
	return 0;
}

//sumList�� ����
int sumList(int arr[], int size)
{
	int i, total = 0;
	for (i = 0; i < size; i++)
		total += arr[i];
	return total;
}

//���� ū ���� ��ȯ�Ѵ�.
int maxList(int arr[], int size)
{
	int i, max = arr[0];
	for (i = 1; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

//key�� ������ -1�� ��ȯ�ϰ�, ������ key�� �ε����� ��ȯ�Ѵ�.
int indexSearh(int arr[], int size, int key)
{
	int i;
	for (i = 0; i < size; i++)
		if (arr[i] == key)
			return i;
	return -1;
}