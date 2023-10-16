// 20201012 컴퓨터학과 임소정
// HW7_1
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int maxData();
int data[10];

int main(void)
{
	srand(200);
	srand(time(NULL));
	generateData();

	printf("발생된 10개의 난수:\n");
	printData();

	printf("10개 난수의 합 = %d \n", totalData());
	printf("10개 난수중 가장 큰 수 = %d \n", maxData());
}

void generateData()
{
	int k;
	int* p;
	p = data;				 
	for (k = 0; k < 10; k++) 
	{
		*p = rand() % 100;   
		p++;			    
	}
}

void printData()
{
	int* pi = data;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *pi);
		pi++;
	}

	printf("\n");
}

int totalData()
{
	int* pi = data, sum = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		sum += *pi;
		pi++;
	}

	return sum;
}

int maxData()
{
	int* pi = data, max = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		if (*pi > max)
			max = *pi;
		pi++;
	}

	return max;
}