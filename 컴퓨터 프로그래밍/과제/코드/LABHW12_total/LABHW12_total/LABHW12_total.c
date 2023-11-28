// ���� �ð�
// LAB 12_1_0
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp;
	FILE* fp1;
	int num;
	int sum = 0;
	fp = fopen("input.txt", "r");
	fp1 = fopen("num.out", "w");

	fscanf(fp, "%d", &num);
	while (!feof(fp))
	{
		sum += num;
		fscanf(fp, "%d", &num);
		fprintf(fp1, "%d\n", sum);
	}
	printf("sum = %d\n", sum);
	fclose(fp);

	return 0;
}
*/

// LAB 12_1_1
/*
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
*/

// LAB 12_1_2
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE *fp, *fout;
	char ch;

	fp = fopen("hello.out", "rt");
	fout = fopen("output.txt", "a");

	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	ch = getc(fp);
	while (!feof(fp))
	{
		// putchar(ch, stdout);
		putc(ch, fout);
		ch = getc(fp);
	}

	fclose(fp);
	return 0;
}
*/

// LAB 12_2_1
// (fopen, fclose, fprintf)
// (���Ͽ� ���� �߰��ϱ�)
// "hello.txt"�θ��� ���뿡
// Hi, Everybody��� ������ �߰��ϴ� ���α׷��� �ۼ��Ѵ�.
// �Է����Ϸ� hello.txt�� �����Ѵ�.
// 
// ������ ���� ���ο� ������ 2�� �߰�(fprint ���)�Ϸ� �Ѵ�.
// Hello.txt������ fopen()�Լ��� ���� �о���� ��
// � ���� ���� ��带 ����ؾ� �ϴ����� �����ؼ� �ۼ��϶�.
// 
// ���α׷� ���� �� hello.txt�� ����
// Hello
// World
// 
// ���α׷� ���� �� hello.txt�� ����
// Hello
// World
// Hi
// Everybody
// 
// ���α׷��� ������ ������ ����.
// 1. ���� ����
// 2. ���Ͽ� �߰��ؼ� ����
// 3. ���� �ݱ�

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp;
	int state;

	fp = fopen("hello.txt", "at");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	fprintf(fp, "Hi\n");
	fprintf(fp, "Everybody\n");

	state = fclose(fp);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}
}
*/

// ����
// LAB 12_1_3
// score.in�� �ִ� ������ �о���̸鼭
// �� ������ 9���� ���ؼ�
// score.out�� ����ϴ� ���α׷��� �ۼ��϶�.
// 
// score.in
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 90
// 100
// 
// score.out
// 19
// 29
// 39
// 49
// 59
// 69
// 79
// 99
// 109
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp1, * fp2;

	int score;

	fp1 = fopen("score.in", "rt");
	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fp2 = fopen("score.out", "wt");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	// �а� ó�� (+9�� ����)�ؼ� ����
	fscanf(fp1, "%d", &score);
	while (!feof(fp1))
	{
		fprintf(fp2, "%d\n", score + 9);
		fscanf(fp1, "%d", &score);
	}
	fclose(fp1);
	fclose(fp2);
}
*/

// LAB 12_1_4
// ���� LAB12_1_1�� LAB12_1_2�� ������ �ϳ��� ���ļ�
// �ϳ��� ���α׷����� �ۼ��� �� �ִ�.
// ��, Hello�� World�� ������ ��� ������ �����,
// �̸� �ٽ� �Է� ���Ϸ� �о ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
// 
// ���α׷��� ������ ������ ����.
// 1. ������ ��¸��� ����
// 2. ���Ͽ� ���� : fprintf ���
// 3. ���� �ݱ�
// 4. ������ �Է¸��� ����
// 5. ���Ϸκ��� �о ȭ�鿡 ��� : getc, putc ���
// 6. ���� �ݱ�

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp;
	char ch;

	fp = fopen("hello.out", "wt");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	fprintf(fp, "hello ");
	fprintf(fp, "world!\n");
	fclose(fp);

	fp = fopen("hello.out", "rt");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	ch = getc(fp);
	while (!feof(fp))
	{
		putchar(ch);
		ch = getc(fp);
	}
	fclose(fp);
	return 0;
}
*/

// LAB 12_2_2
// (fopen, fclose, fgets, fputs)
// "hello.txt"���ϰ� ������ ������ ������
// "hello2.txt"�� �����ϴ� ���α׷��� �ۼ��϶�.
// �� �� �� �д� fgets�� fputs�� �ݵ�� ����϶�.
// 
// �Է������� hello.txt�� ����
// Hello
// World
// Hi
// Everybody
// 
// ��������� hello2.txt�� ����
// Hello
// World
// Hi
// Everybody
// 
// ���α׷��� ������ ������ ����.
// 1. �Է� ���� ����
// 2. ��� ���� ����
// 3. �Է����� �о� ������Ͽ� ���� (fgets, fputs)
// char buf[30];
// ...
// fgets(buf, sizeof(buf), fp);			// �Է� ���Ͽ��� ���� �о
// while (!feof(fp))					// ������ ���� �ƴϸ� ��� �ݺ�
// {
// 		fputs(buf, fp2);				// ��� ���Ͽ� ���� ����
// 		fgets(buf, sizeof(buf), fp);	// �Է� ���Ͽ��� ���� �о
// }
// 4. �Է� ���� �ݱ�
// 5. ��� ���� �ݱ�

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp1, * fp2;
	char buf[30];

	fp1 = fopen("hello.txt", "rt");
	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fp2 = fopen("hello2.txt", "wt");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fgets(buf, sizeof(buf), fp1);
	while (!feof(fp1))
	{
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp1);
	}

	fclose(fp1);
	fclose(fp2);
}
*/

// LAB 12_2_2 (����)
// (fseek�� ���)
// hello2.txt�� hello.txt�� ������ 2�� �ݺ��ǵ��� �϶�.
// ��, hello.txt�� ������ �о�
// hello2.txt�� ����,
// �ٽ� hello.txt�� ������ �о�
// hello2.txt�� ��� ���´�.
// hello.txt�� �Ǿ����� �̵��ϱ� ���ؼ� fseek.�� ����Ѵ�.
// 
// �Է������� hello.txt�� ����
// Hello
// World
// Hi
// Everybody
// 
// ��������� hello2.txt�� ����
// Hello
// World
// Hi
// Everybody
// Hello
// World
// Hi
// Everybody
// 
// ���α׷��� ������ ������ ����.
// 1. �Է� ���� ����
// 2. ��� ���� ����
// 3. �Է����Ͽ��� �о� ������Ͽ� ���� (fgets, fputs)
// 4. �Է� ������ ó���� �ٽ� ���� �غ��ϱ� (fseek ���)
// 5. �Է����Ͽ��� �о� ������Ͽ� ���� (fgets, fputs)
// 6. �Է� ���� �ݱ�
// 7. ��� ���� �ݱ�

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp1, * fp2;
	char buf[30];

	fp1 = fopen("hello.txt", "rt");
	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fp2 = fopen("hello2.txt", "wt");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fgets(buf, sizeof(buf), fp1);
	while (!feof(fp1))
	{
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp1);
	}

	fseek(fp1, 0, SEEK_SET);

	fgets(buf, sizeof(buf), fp1);
	while (!feof(fp1))
	{
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp1);
	}

	fclose(fp1);
	fclose(fp2);
}
*/

// HW 12_1
/*
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

	printf("\n���� %d\n", sum);
	fprintf(fp2, "���� %d", sum);

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
*/

// HW 12_2
/*
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
*/

// LAB 12_1_1
/*
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
*/