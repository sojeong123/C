/***************************************
LAB14_1 20201012 ��ǻ���а� 1�г� �Ӽ���
****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateData(int[], int);
void printData(int[], int);
int averageData(int[], int);
int maxData(int[], int);

int main(void)
{
    int data[10];  // ��� ���࿡ ����� ���� ����		
    int average;
    srand(time(NULL));  // random �� ��¿� ����ϴ� �Լ�. Seed ���� �ο�

     //1)
    generateData(data, 10);
    //2)
    printf("������Ʈ���� ");
    printData(data, 10);

    //c)
    average = averageData(data, 10);
    printf("������Ʈ�� ����� %d\n", average);

    //d)
    printf("������Ʈ�� �� ���� ū���� %d \n", maxData(data, 10));
}

void generateData(int a0[], int size)
{
    int i;
    for (i = 0; i < size; i++) // Index 0..9���� 
        a0[i] = rand() % 100; // ������ �ʱ�ȭ. 0���� 99������ Random ���� ���. 
}

void printData(int a2[], int size)
{
    int i;
    for (i = 0; i < size; i++) // Index 0..9���� 
        printf("%d ", a2[i]);
    printf("\n");
    return;
}

int averageData(int a1[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++) // Index 0..9���� 
        sum += a1[i];
    return sum / size;
}

int maxData(int a3[], int size)
{
    int i, best = a3[0];
    for (i = 0; i < size; i++) // Index 0..9���� 
        if (best < a3[i])
            best = a3[i];
    return best;
}