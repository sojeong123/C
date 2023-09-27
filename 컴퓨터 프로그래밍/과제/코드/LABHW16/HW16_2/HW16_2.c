//20201012 컴퓨터학과 임소정
//HW16_2
#include <stdio.h>
int main(void)
{
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[4][2];
	int arr3[8];
	int i, j;		//더 이상의 인덱스 변수는 사용하지 말라.

	//이동 (복사) A -> B
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arr2[j][i] = arr1[i][j];

	//이동 (복사) A -> C
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arr3[i * 4 + j] = arr1[i][j];

	//A, B, C 출력
	printf("--배열 A\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d ", arr1[i][j]);
		printf("\n");
	}

	printf("\n--배열 B\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%3d ", arr2[i][j]);
		printf("\n");
	}

	printf("\n--배열 C\n");
	for (i = 0; i < 8; i++)
		printf("%3d ", arr3[i]);

	printf("\n");

	return 0;
}