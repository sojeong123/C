// 2번
// 사용자로부터 10진수 형태로 정수를 하나 입력받은 다음
// 2진수로 변환해서 출력하는 프로그램을 작성해 보세요.
// 출력 예시
// 10진수 정수 입력 : 12
// 1100

/*
#include <stdio.h>
int main(void)
{
	int num;
	int arr[100];
	int i = 0;

	printf("10진수 정수 입력 : ");
	scanf_s("%d", &num);

	while (num > 0)
	{
		arr[i] = num % 2;
		num /= 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", arr[j]);
	}

	return 0;
}
*/

// 3번
// 길이가 10인 배열을 선언하고 총 10개의 정수를 입력받습니다.
// 단, 입력받은 숫자가 홀수이면 배열의 앞에서부터 채워나가고,
// 짝수이면 뒤에서부터 채워나가는 형식을 취하세요.
// 따라서 사용자가 [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]을 입력했다면,
// 배열에는 [1, 3, 5, 7, 9, 10, 8, 6, 4, 2]의 순으로 저장될 것입니다.
// 출력 예시
// 총 10개의 숫자 입력
// 입력: 1
// 입력: 1
// 입력: 4
// 입력: 4
// 입력: 4
// 입력: 4
// 입력: 3
// 입력: 3
// 입력: 2
// 입력: 2
// 배열 요소의 출력: 1 1 3 3 2 2 4 4 4 4

/*
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
*/