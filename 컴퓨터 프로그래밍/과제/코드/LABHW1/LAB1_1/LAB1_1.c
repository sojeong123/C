//20201012 컴퓨터학과 임소정
//LAB 1_1
#include <stdio.h>
int main(void)
{
	int num[4];

	printf("Enter 1th number: ");
	scanf_s("%d", &num[0]);
	printf("Enter 2th number: ");
	scanf_s("%d", &num[1]);
	printf("Enter 3th number: ");
	scanf_s("%d", &num[2]);
	printf("Enter 4th number: ");
	scanf_s("%d", &num[3]);
	printf("Enter 5th number: ");
	scanf_s("%d", &num[4]);
	printf("--------------------------------\n");
	printf("총합은 %d\n", num[0] + num[1] + num[2] + num[3] + num[4]);
	printf("평균은 %d\n", (num[0] + num[1] + num[2] + num[3] + num[4]) / 5);
	printf("--------------------------------\n");
	printf("array[0] = %d\n", num[0]);
	printf("array[1] = %d\n", num[1]);
	printf("array[2] = %d\n", num[2]);
	printf("array[3] = %d\n", num[3]);
	printf("array[4] = %d\n", num[4]);
	return 0;
}