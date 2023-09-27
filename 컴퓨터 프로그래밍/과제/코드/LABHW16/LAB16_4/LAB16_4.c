//20201012 컴퓨터학과 임소정
//LAB16_４ (맨 밑에 가나다라마 합친 것 있습니다.)

// (가)
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("가>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 row : ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
		printf("\n");
	}

	return 0;
}
*/

// (나)
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("나>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row : ", i + 1);

		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
	}
	printf("\n");

	return 0;
}
*/

// (다)
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("다>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row : ", i + 1);

		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1");
	}
	printf("\n");
	return 0;
}
*/

// (라)
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };

	int i, j, total = 0;
	double avg;

	printf("라>\n");

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				total += test[i][j];
			else
				//test[i][j] = -1;			#틀림
				//초기화 되지 않은 엘리먼트들 값을 모두 -1로 수정한 후, 그 값들도 포함하여 평균과 합을 구하시오.
				total += -1;

	printf("Total is %d.\n", total);
	avg = (double)total / 12;
	printf("Average is %.2lf.\n", avg);

	return 0;
}
*/

// (마)
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, max, bigsum = 0;

	printf("마>\n");

	for (i = 0; i < 4; i++)
	{
		max = test[i][0];
		for (j = 1; j < 3; j++)
			if (max < test[i][j])
				max = test[i][j];
		printf("%d번째 row에서의 최대값 : %d\n", i + 1, max);
		bigsum += max;
	}
	printf("최대값들의 합 : %d\n", bigsum);

	return 0;
}
*/

// (가나다라마)
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, max, total = 0, bigsum = 0;
	double avg;

	printf("가>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 row : ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
		printf("\n");
	}

	printf("\n나>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 row : ", i + 1);
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1 ");
		printf("\n");
	}

	printf("\n다>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 row : ", i + 1);
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1 ");
		printf("\n");
	}

	printf("\n라>\n");

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				total += test[i][j];
			else
				total += -1;

	printf("Total is %d.\n", total);
	avg = (double)total / 12;
	printf("Average is %.2lf.\n", avg);

	printf("\n마>\n");

	for (i = 0; i < 4; i++)
	{
		max = test[i][0];
		for (j = 1; j < 3; j++)
			if (max < test[i][j])
				max = test[i][j];
		printf("%d번째 row에서의 최대값 : %d\n", i + 1, max);
		bigsum += max;
	}
	printf("최대값들의 합 : %d\n", bigsum);

	return 0;
}