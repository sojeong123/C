/********************************************
LAB13_1F���� 20201012 ��ǻ���а� 1�г� �Ӽ���
****************++++*************************/
#define SIZE 3
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);
void generateArray(int a[], int size);
int main(void)
{
    int arrayA[SIZE], arrayB[SIZE];
    int i;
    int same;
    int count = 0;

    //srand(time(NULL)); 
    do
    {
        printf("\n%d��° �õ�\n", ++count);
        generateArray(arrayA, SIZE);
        generateArray(arrayB, SIZE);

        printf("ArrayA:");
        printArray(arrayA, SIZE);
        printf("ArrayB:");
        printArray(arrayB, SIZE);

    } while (!equalArray(arrayA, arrayB, SIZE));
}

void printArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
    return;
}

// �迭 a�� b�� ������ 1�� �ٸ��� 0�� ��ȯ�ϴ� �Լ�
int equalArray(int a[], int b[], int size)
{
    int i, same;
    same = 1;
    for (i = 0; i < size; i++)
        if (a[i] != b[i])
        {
            same = 0;
            break;
        }
    return same;
}

void generateArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        a[i] = rand() % 2;
    return;
}