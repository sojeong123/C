/****************************************
LAB13_5F 20201012 ��ǻ���а� 1�г� �Ӽ���
*****************************************/
#include <stdio.h>

void printArray(int a[], int size);
void reverse(int a[], int size);
int main(void)
{
    int binary[8];
    int num;
    int bIndex = 0;

    printf("Enter ���(<256):");
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

void reverse(int a[], int size) // �չ����� ���Ǹ� �״�� ���
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
        printf("%d", a[i]); // ���鹮�ھ��� ����ϵ��� ������ printArray�� ����
    printf("\n");
    return;
}