/***************************************
LAB14_1 20201012 컴퓨터학과 1학년 임소정
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
    int data[10];  // 계산 수행에 사용할 정적 변수		
    int average;
    srand(time(NULL));  // random 값 출력에 사용하는 함수. Seed 값을 부여

     //1)
    generateData(data, 10);
    //2)
    printf("엘리먼트들은 ");
    printData(data, 10);

    //c)
    average = averageData(data, 10);
    printf("엘리먼트의 평균은 %d\n", average);

    //d)
    printf("엘리먼트들 중 가장 큰수는 %d \n", maxData(data, 10));
}

void generateData(int a0[], int size)
{
    int i;
    for (i = 0; i < size; i++) // Index 0..9까지 
        a0[i] = rand() % 100; // 데이터 초기화. 0부터 99까지의 Random 값을 출력. 
}

void printData(int a2[], int size)
{
    int i;
    for (i = 0; i < size; i++) // Index 0..9까지 
        printf("%d ", a2[i]);
    printf("\n");
    return;
}

int averageData(int a1[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++) // Index 0..9까지 
        sum += a1[i];
    return sum / size;
}

int maxData(int a3[], int size)
{
    int i, best = a3[0];
    for (i = 0; i < size; i++) // Index 0..9까지 
        if (best < a3[i])
            best = a3[i];
    return best;
}