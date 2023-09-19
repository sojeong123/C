//20201012 컴퓨터학과 임소정
//2021 프논이 기말고사(복습)
//4-1 (20점)
#include <stdio.h>
void changeToDigitEncode(char input[]) {
    int i = 0;
    while (input[i] != '\0') {
        if (input[i] >= 'A' && input[i] <= 'I') {
            input[i] = input[i] - 'A' + 1 + '0';
        }
        i++;
    }
}

int main() {
    char input[100];

    printf("암호를 입력하시오: ");
    scanf_s("%s", input);

    changeToDigitEncode(input);

    printf("%s\n", input);

    return 0;
}
