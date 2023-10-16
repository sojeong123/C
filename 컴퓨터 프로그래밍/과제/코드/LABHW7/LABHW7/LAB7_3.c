// 20201012 컴퓨터학과 임소정
// LAB7_3
#include <stdio.h>
int main(void)
{
	int* pi;
	int arr1[] = { 10, 20, 30, 40, 50 };
	int arr2[][3] = { {1, 2, 3}, {10, 20, 30}, {100, 200, 300}, {1000, 2000, 3000} };
	int i, sum;
	sum = 0;
	pi = arr1; // pi = &arr1[0];
	for (i = 0; i < sizeof(arr1) / sizeof(int); i++)
		// A) arr1을 사용하지말고, pi를 사용하라.
		sum += *(pi + i);

	printf("The sum of arr1 elements: %d\n", sum);

	sum = 0;
	pi = (int*)arr2; // pi = &arr[0][0]
	for (i = 0; i < sizeof(arr2) / sizeof(int); i++)
		// B) arr2를 사용하지말고, pi를 사용하라.
		sum += *(pi + i);

	printf("The sum of arr2 elements: %d\n", sum);
}