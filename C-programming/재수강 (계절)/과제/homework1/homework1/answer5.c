// 5번
#include <stdio.h>
int main(void)
{
	int sec;
	printf("초(Second)를 입력하세요: ");
	scanf_s("%d", &sec);
	printf("%d시 %d분 %d초\n", sec / 3600, sec % 3600 / 60, sec % 60);
	return 0;
}