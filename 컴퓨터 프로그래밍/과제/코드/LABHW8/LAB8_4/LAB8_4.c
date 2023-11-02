// 20201012 컴퓨터학과 임소정
// LAB 8_4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_array(int pa[][3], int size)
{
	int i, j;
	for(i = 0; i < size; i++)
		for(j = 0; i < size; i++)
			printf("%d ", *(pa[i]+ j));
}

// 함수 print_array에서 매개변수인 pa를 표현한 것처럼 max_array함수도 정의하라.
int max_array(int pa[][3], int size)
{
	int i, j, max;
	max = pa[0][0];
	for (i = 0; i < size; i++)
		for (j = 0; i < size; i++)
			if (max < pa[i][j])
				max = pa[i][j];
	return max;
}

int main(void)
{
	int array[][3] = { {1, 22, 70}, {23, 80, 34}, {90, 20, 4}, {40, 99, 30} };
	int rowNb = sizeof(array) / sizeof(array[0]);

	print_array(array, rowNb);
	printf("\n가장 큰 수는 %d이다.\n", max_array(array, rowNb));
}