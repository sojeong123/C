//다음에 제시된 실행 결과와 같이 원본 문자열이 내림차순으로 정렬되어 출력되는 코드를 작성하세요.
//단, 배열을 포인터로 대입한 후에 포인터를 사용해서 정렬하세요.
//char s[40] = "ITCookBookHanbitNetwork";
//실행결과 
//정렬 전 문자열 => ITCookBookHanbitNetwork
//정렬 후 문자열 => wttrooooonkkkiebaTNIHCB

#include <stdio.h>
#include <string.h>

int main() {
    char s[40] = "ITCookBookHanbitNetwork";
    int len = strlen(s);

    char* p = s;
    char temp;

    printf("정렬 전 문자열 => %s\n", s);

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

    printf("정렬 후 문자열 => %s\n", s);

    return 0;
}