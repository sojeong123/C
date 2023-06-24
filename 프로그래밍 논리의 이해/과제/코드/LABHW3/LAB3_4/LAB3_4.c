#include <stdio.h>
int main(void)
{
	int base, height, area;
	printf("밑변과 높이를 입력하세요: ");
	scanf_s("%d %d", &base, &height);
	
	area = base * height / 2;
	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d입니다.\n", base, height, area);
}