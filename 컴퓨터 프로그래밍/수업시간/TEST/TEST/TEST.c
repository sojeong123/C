//20201012 컴퓨터학과 임소정

/*
//LAB 1_1
#include <stdio.h>
int main(void)
{
	int num[4];

	printf("Enter 1th number: ");
	scanf_s("%d", &num[0]);
	printf("Enter 2th number: ");
	scanf_s("%d", &num[1]);
	printf("Enter 3th number: ");
	scanf_s("%d", &num[2]);
	printf("Enter 4th number: ");
	scanf_s("%d", &num[3]);
	printf("Enter 5th number: ");
	scanf_s("%d", &num[4]);
	printf("--------------------------------\n");
	printf("총합은 %d\n", num[0] + num[1] + num[2] + num[3] + num[4]);
	printf("평균은 %d\n", (num[0] + num[1] + num[2] + num[3] + num[4]) / 5);
	printf("--------------------------------\n");
	printf("array[0] = %d\n", num[0]);
	printf("array[1] = %d\n", num[1]);
	printf("array[2] = %d\n", num[2]);
	printf("array[3] = %d\n", num[3]);
	printf("array[4] = %d\n", num[4]);
	return 0;
}
*/

/*
//LAB1_2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[100];
	int num, i;

	srand(time(NULL));

	printf("Enter the number of random numbers (<= 100) : ");
	scanf_s("%d", &num);
	printf("최대값은 %d\n", num);
	printf("--------------------------------\n");
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 100;
		printf("%5d", data[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");

	return 0;
}
*/

/*
//HW 1_1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int data[100];
	int num, i, max = 0;
	int count[10] = { 0 };

	srand(time(NULL));

	printf("Enter the number of random numbers (<= 100) : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 10;
		if (max < data[i])
			max = data[i];
	}

	for (i = 0; i < num; i++)
	{
		count[data[i]]++;
	}

	for (i = 0; i <= max; i++)
	{
		printf("%d의 개수 : %d\n", i, count[i]);
	}

	printf("--------------------------------\n");

	printf("발생된 난수는\n");
	for (i = 0; i < num; i++)
	{
		printf("%5d", data[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}

	return 0;
}
*/

/*
//1주차 논리10
//두 개의 배열이 같은가를 판별하여 같다 다르다를 출력
//예시
//두 개의 배열 A[],B[]를 비교해보자.
//처음에는 일단 같다고 설정.
//일단 크기가 다르면, 다르다.
//크기
가 같다면
//첫번째, 두번째, ... , 마지막 원소를 비교하다가 다른것이 발견되면, 다르다.
//다름을 발견하면 스톱.
//명심할 점 : 같다는 판단을 하려면 반드시 끝까지 확인해야 한다.
//

int isSameArray(int a[], int b[], int aSize, int bSize)
{
	int same = 1;
	if (aSize != bSize) same = 0;
	else
	{
		for (i = 0; i < aSize; i++)
			if (a[i] != b[i])
				return 0;
	}
	return 1;
}
*/


//1주차 논리12
/*
//printArray 버전
keyIndex=-1;
for(i=0; i < 11; i++)
	if (arr[i] == searchKey)
	{
		keyIndex = i;
		break;
	}
if(keyIndex==-1)
	printf("못 찾았다.\n");
else
	printf("찾았다. 인덱스 번호는 %d\n", keyIndex);
*/

/*
//소수찾기 버전
found = 0;			//못 찾았다.

for(i=0; i < 11; i++)
	if (arr[i] == searchKey)
	{
		found = 1;	//찾았다.	//찾았을 때 인덱스 번호
		break;
	}

if (found==0)
	printf("못 찾았다.\n");
else
	printf("찾았다. 인덱스 번호는 %d\n", i);")
*/

/*
//found 뺸 버전
for(i=0; i < 11; i++)
	if (arr[i] == searchKey)
		break;

if(i==size)
	printf("못 찾았다.\n");
else
	printf("찾았다. 인덱스 번호는 %d\n", i);
*/

/*
//found 빼고 함수로 바꾼 버전
for(i[0]; i < 11; i++)
	if (arr[i] == searchKey)
		break;

if(i==size)
	printf("못 찾았다.\n");
else
	printf("찾았다. 인덱스 번호는 %d\n", i);

---------------------------------------------
int searchKeyIndex(int a[], int size, int serachKey)	//찾은 위치
{
	int i;

	for (i = 0; i < 11; i++)
		if (arr[i] == serachKey)
			return i;		//인덱스번호 반환
	
	return -1;				//못 찾았다.
}
*/

//함수로 바꾸는 것 하나랑 나머지3개중에서 1개만 기억하기(시험때)

/*
//1주차 논리15
void reverse(int arr[], int size)
{
	for(i=0; i < size/2; i++)
	{
		temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp;
	}
}
*/


