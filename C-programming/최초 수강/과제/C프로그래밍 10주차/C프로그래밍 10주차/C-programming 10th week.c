/*
//C프로그래밍 12번째 PDF파일 참고//
//[응용 12-5] realloc() 함수 사용 예//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
void main()
{
	int* p;
	int i, hap = 0;
	int cnt = 0;
	int data;

	p = (int*)malloc(sizeof(int) * 1);
	printf("1번째 숫자 : ");
	scanf_s("%d", &p[0]);
	cnt++;

	for (i = 2; ; i++)
	{
		printf("%d번째 숫자 : ", i);
		scanf_s("%d", &data);

		if (data != 0)
			p = (int*)realloc(p, sizeof(int) * i);
		else
			break;

		p[i - 1] = data;
		cnt++;
	}

	for (i = 0; i < cnt; i++)
		hap = hap + p[i];

	printf("입력 숫자 합 ==> %d\n", hap);

	free(p);
}
*/