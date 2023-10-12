//20201012 컴퓨터학과 임소정
//HW 1_2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int coins[4] = { 500, 100, 50, 10 };
	int change, coin;

	printf("Enter the amount of change : ");
	scanf("%d", &change);

	for (int i = 0; i < 4; i++)
	{
		coin = change / coins[i];
		printf("%d coin : %d\n", coins[i], coin);
		change = change % coins[i];
	}
	return 0;
}