//������ ���õ� ���� ����� ���� ���� ���ڿ��� ������������ ���ĵǾ� ��µǴ� �ڵ带 �ۼ��ϼ���.
//��, �迭�� �����ͷ� ������ �Ŀ� �����͸� ����ؼ� �����ϼ���.
//char s[40] = "ITCookBookHanbitNetwork";
//������ 
//���� �� ���ڿ� => ITCookBookHanbitNetwork
//���� �� ���ڿ� => wttrooooonkkkiebaTNIHCB

#include <stdio.h>
#include <string.h>

int main() {
    char s[40] = "ITCookBookHanbitNetwork";
    int len = strlen(s);

    char* p = s;
    char temp;

    printf("���� �� ���ڿ� => %s\n", s);

    for (int i = 0; i < len - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < len; j++) {
            if (*(p + j) > * (p + max_idx)) {
                max_idx = j;
            }
        }
        temp = *(p + i);
        *(p + i) = *(p + max_idx);
        *(p + max_idx) = temp;
    }

    printf("���� �� ���ڿ� => %s\n", s);

    return 0;
}