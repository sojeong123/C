// 20201012 컴퓨터학과 임소정
// HW 12_2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int state;
	FILE* fp, * fp2;
	char ch;

	fp = fopen("input.txt", "rt");
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

	ch = getc(fp);
	while (!feof(fp))
	{
		putc(toupper(ch), fp2);
		ch = getc(fp);
	}

	fseek(fp, 0, SEEK_SET);

	putc('\n', fp2);

	ch = getc(fp);
	while (!feof(fp))
	{
		putc(tolower(ch), fp2);
		ch = getc(fp);
	}

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