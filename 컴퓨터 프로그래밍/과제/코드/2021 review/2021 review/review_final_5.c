//20201012 ��ǻ���а� �Ӽ���
//2021 ������ �⸻���(����)
//5 (30��)
#include <stdio.h>
int isHiddenPasswd(char passwd[], char input[]) {
    int i = 0, j = 0;

    while (input[i] != '\0') {
        if (passwd[j] == input[i]) {
            j++;
        }

        i++;

        if (passwd[j] == '\0') {
            return 1;
        }
    }

    return 0;
}

int main() {
    char passwd[100], input[100];

    printf("��ȣ�� �Է��Ͻÿ�: ");
    scanf_s("%s", passwd);
    scanf_s("%s", input);

    printf("%s ", passwd);

    int i = 0;
    while (passwd[i] != '\0') {
        printf("%c", passwd[i]);
        i++;
    }

    printf("\n");

    int result = isHiddenPasswd(passwd, input);

    printf("%d %d %d\n", result, passwd[0] == input[0], passwd[1] == input[1]);

    return 0;
}