//2주차 자료 Page1
//선택정렬

//1. 1번째 작은 데이터를 정렬한다.
//1-1. 누가 첫번째로 작은 데이터인가?
//	   첫번째로 작은 데이터 찾기.
//2. 2번째 작은 데이터를 정렬한다.
//2-1. 누가 두번째로 작은 데이터인가?
//     두번째로 작은 데이터 찾기.
//3. 3번째 작은 데이터를 정렬한다.
//4. 4번째 작은 데이터를 정렬한다.
//5. 5번째 작은 데이터를 정렬한다.
//6. 6번째 작은 데이터를 정렬한다.

/*
#include <stdio.h>
#define SIZE 6
int main(void)
{
	int a[SIZE] = { 5, 3, 8, 1, 2, 7 };
	int i, j, temp, minIndex;

	for (i = 0; i < SIZE - 1; i++)
		//minIndex를 찾는다.
	{
		minIndex = i;
		for (j = i + 1; j < SIZE; j++)
		{
			if (a[minIndex] > a[j])
			{
				minIndex = j;
			}
		}
		//i번째 원소와 minIndex 위치의 원소를 교환
		temp = a[minIndex];
		a[minIndex] = a[i];
		a[i] = temp;
	}
	
	for(i=0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
*/

//교수답안
/*
#include <stdio.h>
#define SIZE 6
int main(void)
{
	int a[] = { 5, 3, 8, 1, 2, 7 };
	int min = 999;

	for (i = 0; i < SIZE; i++)
		if (a[i] < min)
			min = a[i];

	print("최소값 = %d\n", min);			//최소값 찾는 알고리즘
	return 0;
}
*/

//교수답안 오름차순 정렬
/*
#include <stdio.h>
#define SIZE 6
int main(void)
{
	int a[] = { 5, 3, 8, 1, 2, 7 };
	int j, i, min, minIndex, temp;
	{
		for (i = 0; j < SIZE, j++)
		{
			min = a[0];				//min = 999;
			minIndex = 0;
			for (i = j; i < SIZE; i++)
				if (a[j] < minIndex)		//if (a[i] < min)
				{
					//min = a[i];
					minIndex = i;	//min = a[i];
				}
			print("최소값 = %d, 최소값의 위치 = %d\n", min, minIndex);			//최소값 찾는 알고리즘
			//교환 : 0번쨰와 가장 작은 값의 자리 값 교환

			temp = a[j];
			a[j] = a[minIndex];
			a[minIndex] = temp;
		}
		for (i = 0; j < SIZE; j++)
			printf("%d", a[j]);
		printf("\n");

	return 0;
}
*/

//교수답안 내림차순 정렬
/*
#include <stdio.h>
#define SIZE 6

int main(void)
{
	int a[] = { 5, 3, 8, 1, 2, 7 };
	int j, i, max, maxIndex, temp;
	{
		for (i = 0; j < SIZE, j++)
		{
			max = a[0];				//초기 최대값의 위치
			maxIndex = 0;
			for (i = j; i < SIZE; i++)		//정렬되지 않은 부분
				if (a[j] > maxIndex)		//if (a[i] < min)
				{
					//min = a[i];
					maxIndex = i;	//min = a[i];
				}
			print("최대값 = %d, 최대값의 위치 = %d\n", max, maxIndex);			//최소값 찾는 알고리즘
			//교환 : 0번쨰와 가장 작은 값의 자리 값 교환

			temp = a[j];
			a[j] = a[maxIndex];
			a[maxIndex] = temp;
		}
		for (i = 0; j < SIZE; j++)
			printf("%d", a[j]);
		printf("\n");

		return 0;
	}
}
*/

//----------1차원배열 끝----------

/*
//3주차 자료 Page8 오른쪽
//2차원배열

//연습 1
	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)

	table[i][j] = i * 10 + j;

	printf("%d ", table[i][j]);

//연습 2
total = 0;
for (i = 0; i < 5; i++)
	for (j = 0; j < 3; j++)
		total += table[i][j];

//연습 3
subTotal = 0;		//한줄의 합
for (j = 0; j < 3; j++)
	subTotal += table[0][j];
printf("1행의 합 = %d\n", subTotal);

//연습 4
for (i = 0; i < 5; i++)
{
	subTotal = 0;
	for (j = 0; j < 3; j++)
		subTotal += table[i][j];
	printf("%d행의 합 = %d\n", i + 1, subTotal);
}

//연습 5
subTotal = 0;
for (i = 0; i < 5; i++)			//행의 수
	subTotal += table[i][0];
printf("1열의 합 = %d\n", subTotal);

//연습 6
subTotal = 0;
for (i = 0; i < 5; i++)
	subTotal += table[i][j];
printf("%d열의 합 = %d\n", j + 1, subTotal);
*/


//3주차 자료 Page8 오른쪽
//2차원 배열의 함수 매개변수 전달
int main(void)
{
	int table1[3][5] = { {1, 2, 3, 4, 5},
						 {10, 20, 30, 40, 50},
						 {100, 200, 300, 400, 500} };
	int table2[2][5] = { {1, 2, 3}, {10} };
	
	printTable(table1, 3);			//호출: 2차원 배열의 이름, 행의 개수
	printTable(table2, 2);			//호출: 2차원 배열의 이름, 행의 개수
}

void printTable(int t[][5], int rowSize)
{
	for (i = 0; , i < rowSize; i++)
		for (j = 0; j < 5; j++)
			printf("%d ", t[i][j]);
	printf("\n");
}