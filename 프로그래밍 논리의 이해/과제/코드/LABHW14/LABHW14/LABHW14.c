//LAB14_1
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateData(int[], int);
void printData(int[], int);
int averageData(int[], int);
int maxData(int[], int); // ���⿡ ���̴� ������ó�� �Ű������� �̸��� ������ ���� �ִ�!
int main(void)
{
	int data[10]; // ��� ���࿡ ����� ���� ����
	int average;
	srand(time(NULL)); // random �� ��¿� ����ϴ� �Լ�. Seed ���� �ο�

	//1)0���� 99������ ������ �߻���Ų��.
	generateData(data, 10);
	//2)����Ѵ�.
	printData(data, 10);
	//3)����� ���ؼ� ����Ѵ�.
	average = averageData(data, 10);
	printf("������Ʈ�� ����� %d.\n", average);
	//4)ȣ��κ� �߰�
	printf("������Ʈ�� �� ���� ū���� %d.\n", maxData(data, 10));
	return 0;
}

void generateData(int data[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		data[i] = rand() % 100;
}

void printData(int data[], int size)
{
	int i;
	printf("������Ʈ���� ");
	for (i = 0; i < size; i++)
		printf("%d ", data[i]);
	printf("\n");
}

int averageData(int data[], int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += data[i];
	return sum / size;
}

int maxData(int data[], int size)
{
	int i, max = data[0];
	for (i = 1; i < size; i++)
		if (max < data[i])
			max = data[i];
	return max;
}
*/