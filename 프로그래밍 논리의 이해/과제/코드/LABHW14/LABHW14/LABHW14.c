//LAB14_1
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateData(int[], int);
void printData(int[], int);
int averageData(int[], int);
int maxData(int[], int); // 여기에 보이는 원형들처럼 매개변수의 이름을 생략할 수도 있다!
int main(void)
{
	int data[10]; // 계산 수행에 사용할 정적 변수
	int average;
	srand(time(NULL)); // random 값 출력에 사용하는 함수. Seed 값을 부여

	//1)0부터 99까지의 난수를 발생시킨다.
	generateData(data, 10);
	//2)출력한다.
	printData(data, 10);
	//3)평균을 구해서 출력한다.
	average = averageData(data, 10);
	printf("엘리먼트의 평균은 %d.\n", average);
	//4)호출부분 추가
	printf("엘리먼트들 중 가장 큰수는 %d.\n", maxData(data, 10));
	return 0;
}

void generateData(int data[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		data[i] = rand() % 100;
}

void printData(int data[], int size)
{
	int i;
	printf("엘리먼트들은 ");
	for (i = 0; i < size; i++)
		printf("%d ", data[i]);
	printf("\n");
}

int averageData(int data[], int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += data[i];
	return sum / size;
}

int maxData(int data[], int size)
{
	int i, max = data[0];
	for (i = 1; i < size; i++)
		if (max < data[i])
			max = data[i];
	return max;
}
*/