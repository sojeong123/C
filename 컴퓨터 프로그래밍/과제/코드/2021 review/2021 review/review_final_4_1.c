//20201012 ��ǻ���а� �Ӽ���
//2021 ������ �⸻���(����)
//4-1 (20��)
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

    printf("��ȣ�� �Է��Ͻÿ�: ");
    scanf_s("%s", input);

    changeToDigitEncode(input);

    printf("%s\n", input);

    return 0;
}
