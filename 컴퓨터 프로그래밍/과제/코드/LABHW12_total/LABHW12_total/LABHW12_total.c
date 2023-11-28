// 수업 시간
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
// (파일에 내용 추가하기)
// "hello.txt"팡리의 내용에
// Hi, Everybody라는 내용을 추가하는 프로그램을 작성한다.
// 입력파일로 hello.txt가 존재한다.
// 
// 파일의 끝에 새로운 라인을 2줄 추가(fprint 사용)하려 한다.
// Hello.txt파일을 fopen()함수를 통해 읽어들일 때
// 어떤 파일 오픈 모드를 사용해야 하는지를 생각해서 작성하라.
// 
// 프로그램 수행 전 hello.txt의 내용
// Hello
// World
// 
// 프로그램 수행 후 hello.txt의 내용
// Hello
// World
// Hi
// Everybody
// 
// 프로그램의 구성은 다음과 같다.
// 1. 파일 오픈
// 2. 파일에 추가해서 쓰기
// 3. 파일 닫기

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

// 과제
// LAB 12_1_3
// score.in에 있는 점수를 읽어들이면서
// 그 점수에 9점을 더해서
// score.out에 출력하는 프로그램을 작성하라.
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

	// 읽고 처리 (+9를 더함)해서 쓴다
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
// 위의 LAB12_1_1과 LAB12_1_2의 내용을 하나로 합쳐서
// 하나의 프로그램으로 작성할 수 있다.
// 즉, Hello와 World가 쓰여진 출력 파일을 만들고,
// 이를 다시 입력 파일로 읽어서 화면에 출력하는 프로그램을 작성하라.
// 
// 프로그램의 구성은 다음과 같다.
// 1. 파일을 출력모드로 오픈
// 2. 파일에 쓰기 : fprintf 사용
// 3. 파일 닫기
// 4. 파일을 입력모드로 오픈
// 5. 파일로부터 읽어서 화면에 출력 : getc, putc 사용
// 6. 파일 닫기

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
// "hello.txt"파일과 동일한 내용을 가지는
// "hello2.txt"를 생성하는 프로그램을 작성하라.
// 한 줄 씩 읽는 fgets와 fputs를 반드시 사용하라.
// 
// 입력파일인 hello.txt의 내용
// Hello
// World
// Hi
// Everybody
// 
// 출력파일인 hello2.txt의 내용
// Hello
// World
// Hi
// Everybody
// 
// 프로그램의 구성은 다음과 같다.
// 1. 입력 파일 오픈
// 2. 출력 파일 오픈
// 3. 입력파일 읽어 출력파일에 쓰기 (fgets, fputs)
// char buf[30];
// ...
// fgets(buf, sizeof(buf), fp);			// 입력 파일에서 한줄 읽어서
// while (!feof(fp))					// 파일의 끝이 아니면 계속 반복
// {
// 		fputs(buf, fp2);				// 출력 파일에 한줄 쓰기
// 		fgets(buf, sizeof(buf), fp);	// 입력 파일에서 한줄 읽어서
// }
// 4. 입력 파일 닫기
// 5. 출력 파일 닫기

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

// LAB 12_2_2 (수정)
// (fseek의 사용)
// hello2.txt에 hello.txt의 내용이 2번 반복되도록 하라.
// 즉, hello.txt의 내용을 읽어
// hello2.txt에 쓰고,
// 다시 hello.txt의 내용을 읽어
// hello2.txt에 계속 적는다.
// hello.txt의 맨앞으로 이동하기 위해서 fseek.을 사용한다.
// 
// 입력파일인 hello.txt의 내용
// Hello
// World
// Hi
// Everybody
// 
// 출력파일인 hello2.txt의 내용
// Hello
// World
// Hi
// Everybody
// Hello
// World
// Hi
// Everybody
// 
// 프로그램의 구성은 다음과 같다.
// 1. 입력 파일 오픈
// 2. 출력 파일 오픈
// 3. 입력파일에서 읽어 출력파일에 쓰기 (fgets, fputs)
// 4. 입력 파일의 처음을 다시 읽을 준비하기 (fseek 사용)
// 5. 입력파일에서 읽어 출력파일에 쓰기 (fgets, fputs)
// 6. 입력 파일 닫기
// 7. 출력 파일 닫기

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