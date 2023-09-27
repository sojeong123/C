//20201012 컴퓨터학과 임소정
//HW16_1
#include <stdio.h>
int main(void)
{
	int gugudan[9][9] = { 0 };
	int i, j, dan;

	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			gugudan[i][j] = (i + 2) * (j + 1);

	printf("--구구단 표는 다음과 같습니다.\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%3d ", gugudan[i][j]);
		printf("\n");
	}

	printf("--원하는 구구단은? ");
	scanf_s("%d", &dan);

	for (i = 0; i < 9; i++)
		printf("%3d ", gugudan[dan - 2][i]);
	printf("\n");

	return 0;
}