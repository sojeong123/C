// 20201012 컴퓨터학과 임소정
// HW7_2
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
static int data[3][10]; // 계산 수행에 사용할 정적 변수

void main()
{
	srand(200); // random 값 출력에 사용하는 함수. Seed 값을 부여
	srand(time(NULL));
	generateData();
	printData();
	printf("전체의 합은: %d\n", totalData());
}

void generateData()
{
	int* p = &data[0][0];
	int i;
	for (i = 0; i < 30; i++)
	{
		*p = rand() % 100;
		p++;
	}
}

void printData()
{
	int i, j;
	int* p = &data[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", *p);
			p++;
		}
		printf("\n");
	}
}

int totalData()
{
	int* p = &data[0][0];
	int i, total = 0;
	for (i = 0; i < 30; i++)
	{
		total += *p;
		p++;
	}
	return total;
}