// 6번
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