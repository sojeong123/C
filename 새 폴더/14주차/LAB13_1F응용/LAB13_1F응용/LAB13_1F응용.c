/********************************************
LAB13_1F응용 20201012 컴퓨터학과 1학년 임소정
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
        printf("\n%d번째 시도\n", ++count);
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

// 배열 a와 b가 같으면 1을 다르면 0을 반환하는 함수
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