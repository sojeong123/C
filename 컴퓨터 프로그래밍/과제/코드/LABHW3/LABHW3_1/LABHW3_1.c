//20201012 컴퓨터학과 임소정
//LABHW3_1
#include <stdio.h>
int main(void)
{
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	int keyIndex;

	printf("합은 %d\n", sumList(list, 10));
	printf("가장 큰 수는 %d\n", maxList(list, 10));
	printf("탐색할 값은? ");
	scanf_s("%d", &value);
	//value가 list에 있는가를 판별하여 "없다" 혹은 "**번째에 있다"를 출력
	keyIndex = indexSearh(list, 10, value);
	if (keyIndex == -1)
		printf("없다\n");
	else
		printf("값 %d을 갖는 첫번째 값은 %d번째에 있습니다.\n", value, keyIndex+1);
	return 0;
}

//sumList의 정의
int sumList(int arr[], int size)
{
	int i, total = 0;
	for (i = 0; i < size; i++)
		total += arr[i];
	return total;
}

//가장 큰 값을 반환한다.
int maxList(int arr[], int size)
{
	int i, max = arr[0];
	for (i = 1; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

//key가 없으면 -1을 반환하고, 있으면 key의 인덱스를 반환한다.
int indexSearh(int arr[], int size, int key)
{
	int i;
	for (i = 0; i < size; i++)
		if (arr[i] == key)
			return i;
	return -1;
}