#include <stdio.h>

int main() {
    int money, coin_500, coin_100, coin_50, coin_10;

    printf("교환할 금액을 입력하세요: ");
    scanf_s("%d", &money);

    // 동전 수 계산
    coin_500 = money / 500;
    money %= 500;

    coin_100 = money / 100;
    money %= 100;

    coin_50 = money / 50;
    money %= 50;

    coin_10 = money / 10;

    // 결과 출력
    printf("500원 동전: %d개\n", coin_500);
    printf("100원 동전: %d개\n", coin_100);
    printf("50원 동전: %d개\n", coin_50);
    printf("10원 동전: %d개\n", coin_10);

    return 0;
}