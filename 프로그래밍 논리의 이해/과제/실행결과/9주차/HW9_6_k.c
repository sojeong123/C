//20201012 컴퓨터학과 임소정
#include <stdio.h>
int main(void)
{
	int n;
	int k = 0;

	printf("Enter a number: ");
	scanf_s("%d", &n);

	while (1)
	{
		if (n < 2)
			break;

		n /= 2;
		k++;
	}

	printf("%d\n", k);

	return 0;
}