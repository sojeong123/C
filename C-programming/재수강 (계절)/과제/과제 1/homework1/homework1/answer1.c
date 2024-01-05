// 1번
#include <stdio.h>
int main(void)
{
	int num;
	printf("10진수 정수를 입력하세요: ");
	scanf_s("%d", &num);
	printf("16진수로 출력 : 0x%x\n", num);
	return 0;
}