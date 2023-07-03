//20201012 컴퓨터학과 임소정

//4번
#include <stdio.h>
int main(void)
{
	int i, j, n;

	printf("행수 입력 : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= i)
				printf("*");
			else
				printf("@");
		}
		printf("\n");
	}

	return 0;
}