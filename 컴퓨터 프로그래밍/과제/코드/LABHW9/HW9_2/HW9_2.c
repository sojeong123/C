// 20201012 컴퓨터학과 임소정
// HW9_2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char jumin[15];
	printf("주민등록번호 입력('-' 포함): ");
	scanf("%s", jumin);

	// 년도 추출
	char year_str[5];
	strncpy(year_str, jumin, 2);  // 주민등록번호 앞 두 자리
	year_str[2] = '\0';  // 문자열 끝을 표시
	int year = atoi(year_str);  // 문자열을 정수로 변환

	// 성별 확인
	int gender_digit = jumin[7] - '0';  // 주민등록번호 뒷부분의 첫 자리

	printf("당신은 19%d년도 생이군요\n", year);
	if (gender_digit == 1) {
		printf("남자분이시군요.\n");
		printf("평균 수명 77를 더하면 %d까지 산다고 계산됩니다.\n", year + 77 + 1900);
	}
	else if (gender_digit == 2) {
		printf("여자분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다.\n", year + 84 + 1900);
	}

	return 0;
}