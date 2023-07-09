//20201012 컴퓨터학과 임소정
//LAB13_5
/*
#include <stdio.h>
int main() {
	int num;
	int binary[8]; // 2진수를 저장할 배열

	printf("Enter 양수(<256): ");
	scanf_s("%d", &num);

	// 10진수를 2진수로 변환하여 배열에 저장
	int i = 0;
	while (num > 0) {
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	// 배열을 역순으로 출력
	printf("");
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
	printf("\n");

	return 0;
}
*/