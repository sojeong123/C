// 3��
#include <stdio.h>
int main() {
    int arr[10];
    int oddIndex = 0;
    int evenIndex = 9;

    printf("�� 10���� ���� �Է�\n");

    for (int i = 0; i < 10; i++) {
        int num;
        printf("�Է�: ");
        scanf_s("%d", &num);

        if (num % 2 == 1) {
            // Ȧ���� ��� �迭�� �տ������� ä��
            arr[oddIndex] = num;
            oddIndex++;
        }
        else {
            // ¦���� ��� �迭�� �ڿ������� ä��
            arr[evenIndex] = num;
            evenIndex--;
        }
    }

    printf("�迭 ����� ���: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}