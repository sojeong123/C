// 20201012 컴퓨터학과 임소정
// LAB 12_1_1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp;
	int state;

	fp = fopen("hello.out", "wt");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	fprintf(fp, "hello ");
	fprintf(fp, "world!\n");

	state = fclose(fp);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}
}