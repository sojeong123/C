// 2��
#include <stdio.h>
int main(void)
{
    int num;
    int arr[100];
    int i = 0;

    printf("10���� ���� �Է� : ");
    scanf_s("%d", &num);

    while (num > 0)
    {
        arr[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }

    return 0;
}