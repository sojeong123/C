//20201012 컴퓨터학과 임소정
//HW4_4
#include<stdio.h>
int comb(int n, int r)
{
	if (r == 0 || r == n)
		return 1;
	else
		return comb(n - 1, r - 1) + comb(n - 1, r);
}

int main(void)
{
	int n, r;

	printf("Enter n and r: ");
	scanf_s("%d %d", &n, &r);
	printf("%d", comb(n, r));
	return 0;
}