#include <stdio.h>

int main() {
    int money, coin_500, coin_100, coin_50, coin_10;

    printf("��ȯ�� �ݾ��� �Է��ϼ���: ");
    scanf_s("%d", &money);

    // ���� �� ���
    coin_500 = money / 500;
    money %= 500;

    coin_100 = money / 100;
    money %= 100;

    coin_50 = money / 50;
    money %= 50;

    coin_10 = money / 10;

    // ��� ���
    printf("500�� ����: %d��\n", coin_500);
    printf("100�� ����: %d��\n", coin_100);
    printf("50�� ����: %d��\n", coin_50);
    printf("10�� ����: %d��\n", coin_10);

    return 0;
}