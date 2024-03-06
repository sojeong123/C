// 1번
#include <stdio.h>
int main(void)
{
	int arr[10];
	int i;

	printf("총 10개의 숫자 입력\n");
	for (i = 0; i < 10; i++)
	{
		printf("입력 : ");
		scanf_s("%d", &arr[i]);
	}

	printf("홀수 출력 : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d, ", arr[i]);
	}
	printf("\n");

	printf("짝수 출력 : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}
	printf("\n");

	return 0;
}