//20201012 ��ǻ���а� �Ӽ���
//HW 1_1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int data[100];
    int num, i, max = 0;
    int count[10] = { 0 };

    srand(time(NULL));

    printf("Enter the number of random numbers (<= 100) : ");
    scanf_s("%d", &num);

    for (i = 0; i < num; i++)
    {
        data[i] = rand() % 10;
        if (max < data[i])
            max = data[i];
    }

    for (i = 0; i < num; i++)
    {
        count[data[i]]++;
    }

    for (i = 0; i <= max; i++)
    {
        printf("%d�� ���� : %d\n", i, count[i]);
    }

    printf("--------------------------------\n");

    printf("�߻��� ������\n");
    for (i = 0; i < num; i++)
    {
        printf("%5d", data[i]);
        if ((i + 1) % 5 == 0)
            printf("\n");
    }

    return 0;
}