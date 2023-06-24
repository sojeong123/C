#include <stdio.h>
int main(void)
{
	int midterm = 100, final = 90;

	printf("이름\t\t중간\t학기말\t평균\n");
	printf("Sojeong Lim\t%d\t%d\t%d\n", midterm, final, (midterm + final) / 2);
}