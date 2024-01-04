// 1번
// 10진수 정수를 입력받아서 16진수로 출력하는 프로그램을 작성하시오.
// [힌트]
// 서식 문자의 활용에 대한 문제입니다.
// 출력 예시
// 10진수 정수를 입력하세요: 415
// 16진수로 출력 : 0x19f

/*
#include <stdio.h>
int main(void)
{
	int num;
	printf("10진수 정수를 입력하세요: ");
	scanf_s("%d", &num);
	printf("16진수로 출력 : 0x%x\n", num);
	return 0;
}
*/

// 5번
// 사용자로부터 초(Second)를 입력받습니다.
// 이를 [시, 분, 초]의 형태로 출력하는 프로그램을 작성해 보세요.
// 출력 예시
// 초(Second)를 입력하세요: 4300
// 1시 11분 40초

/*
#include <stdio.h>
int main(void)
{
	int sec;
	printf("초(Second)를 입력하세요: ");
	scanf_s("%d", &sec);
	printf("%d시 %d분 %d초\n", sec / 3600, sec % 3600 / 60, sec % 60);
	return 0;
}
*/

// 6번
// 사용자로부터 숫자 n을 입력받습니다.
// 그리고 나서 다음 공식이 성립하는 최대 k값을 계산해서 출력하는 프로그램을 작성해 보세요.
// 2^k <= n
// 출력 예시
// 숫자 n을 입력하세요: 15
// 최대 k값: 3

/*
#include <stdio.h>
int main(void)
{
	int n, k = 0;
	printf("숫자 n을 입력하세요: ");
	scanf_s("%d", &n);
	while (1)
	{
		if (n < 2)
			break;
		n /= 2;
		k++;
	}
	printf("최대 k값: %d\n", k);
	return 0;
}
*/