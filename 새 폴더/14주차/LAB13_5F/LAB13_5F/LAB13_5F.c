/****************************************
LAB13_5F 20201012 컴퓨터학과 1학년 임소정
*****************************************/
#include <stdio.h>

void printArray(int a[], int size);
void reverse(int a[], int size);
int main(void)
{
    int binary[8];
    int num;
    int bIndex = 0;

    printf("Enter 양수(<256):");
    scanf_s("%d", &num);

    while (num != 0)
    {
        binary[bIndex++] = num % 2;
        num = num / 2;
    }

    reverse(binary, bIndex);
    printArray(binary, bIndex);
    return 0;
}

void reverse(int a[], int size) // 앞문제의 정의를 그대로 사용
{
    int i;
    int temp;
    for (i = 0; i < size / 2; i++)
    {
        //a[size - i - 1] <-> a[i]
        temp = a[size - i - 1];
        a[size - i - 1] = a[i];
        a[i] = temp;
    }
}

void printArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d", a[i]); // 공백문자없게 출력하도록 원래의 printArray를 수정
    printf("\n");
    return;
}