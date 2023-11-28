// 20201012 컴퓨터학과 임소정
// HW 12_1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int state, i, sum = 0, num;
	FILE* fp, * fp2;

	srand(time(NULL));

	fp = fopen("random.txt", "wt");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	for (i = 0; i < 10; i++)
		fprintf(fp, "%d\n", rand() % 100);

	state = fclose(fp);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}

	fp = fopen("random.txt", "rt");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fscanf(fp, "%d", &num);
	while (!feof(fp))
	{
		printf("%5d", num);
		fprintf(fp2, "%d\n", num);
		sum += num;

		fscanf(fp, "%d", &num);
	}

	printf("\n합은 %d\n", sum);
	fprintf(fp2, "합은 %d", sum);

	state = fclose(fp);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}

	state = fclose(fp2);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}

	return 0;
}