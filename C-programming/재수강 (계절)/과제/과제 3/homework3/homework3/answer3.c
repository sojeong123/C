// 3번
#include <stdio.h>
int main() {
    int arr[10];
    int oddIndex = 0;
    int evenIndex = 9;

    printf("총 10개의 숫자 입력\n");

    for (int i = 0; i < 10; i++) {
        int num;
        printf("입력: ");
        scanf_s("%d", &num);

        if (num % 2 == 1) {
            // 홀수인 경우 배열의 앞에서부터 채움
            arr[oddIndex] = num;
            oddIndex++;
        }
        else {
            // 짝수인 경우 배열의 뒤에서부터 채움
            arr[evenIndex] = num;
            evenIndex--;
        }
    }

    printf("배열 요소의 출력: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}