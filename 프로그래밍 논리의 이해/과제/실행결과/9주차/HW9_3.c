//20201012 컴퓨터학과 임소정
#include <stdio.h>
int main() {
	int count = 1;
	int input;
	int sum = 0;

	while (count <= 5) {
		printf("0보다 큰 수를 입력<%d번째>: ", count);
		scanf_s("%d", &input);

		while (input <= 0) {
			printf("입력이 잘못되었습니다. 0보다 큰 수를 다시 입력<%d번째>: ", count);
			scanf_s("%d", &input);
		}

		sum += input;
		count++;
	}

	printf("입력된 값의 총 합: %d\n", sum);

	return 0;
}