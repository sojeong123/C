/*****************************************
기말고사3 20201012 컴퓨터학과 1학년 임소정
******************************************/

#include <stdio.h>
int cal_odd_digit(int num)
{

}

int main(void) // main은 변경하지 않는다. 변경시 감점 처리
{
	int n;

	scanf("%d", &n);
	n *= 3;

	printf("%d\n", cal_odd_digit(n));
}