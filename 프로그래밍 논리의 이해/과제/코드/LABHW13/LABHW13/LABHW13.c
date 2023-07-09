//LAB13_1
/*
#define SIZE 5
#include <stdio.h>
int main(void)
{
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;
	int same;

	//1)2)
	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[i] = arrayA[SIZE - 1 - i];
	}

	//3)
	printf("ArrayA : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayA[i]);
	printf("\n");

	printf("ArrayB : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayB[i]);
	printf("\n");

	printf("ArrayC : ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arrayC[i]);
	printf("\n");

	//4)
	same = 1; //일단 두 배열이 같다고 값을 설정한 후
	//두개의 배열이 같은가 다른가를 체크한다. 다르면 same을 0dmfh tjfwjdgksek.
	for (i = 0; i < SIZE; i++)
	{
		if (arrayA[i] != arrayB[i])
		{
			same = 0;
			break;
		}
	}

	if (same == 1)
		printf("ArrayA와 ArrayB는 같다.\n");
	else
		printf("ArrayA와 ArrayB는 다르다.\n");

	//5) 4)와 유사하게 작성한다.
	same = 1;
	for (i = 0; i < SIZE; i++)
	{
		if (arrayA[i] != arrayC[i])
		{
			same = 0;
			break;
		}
	}

	if (same == 1)
		printf("ArrayA와 ArrayC는 같다.\n");
	else
		printf("ArrayA와 ArrayC는 다르다.\n");

	return 0;
}
*/

//LAB13_2
/*
#define SIZE 12
#include <stdio.h>
int main(void)
{
	int income[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int search;
	int i;

	printf("탐색할 수입은? ");
	scanf_s("%d", &search);

	for (i = 0; i < SIZE; i++)
	{
		if (income[i] == search)
		{
			printf("수입 %d를 갖는 첫번째 달은 %d월입니다.\n", search, i + 1);
			break;
		}
	}

	if (i == SIZE)
		printf("수입 %d를 갖는 달은 없습니다.\n", search);

	return 0;
}
*/

//LAB13_3
/*
#define SIZE 10
#include <stdio.h>
int main(void)
{
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &num);

		//num이 짝수이면 even에 홀수이면 odd에 넣는다. 각각 인덱스를 사용한다.
		if (num % 2 == 0)
			even[evenIndex++] = num;
		else
			odd[oddIndex++] = num;
	}

	//A)
	printf("\n홀수 출력 :");
	for (i = 0; i < oddIndex; i++)
		printf(" %d", odd[i]);

	//B)
	printf("\n짝수 출력 :");
	for (i = 0; i < evenIndex; i++)
		printf(" %d", even[i]);

	printf("\n");
	return 0;
}
*/

//LAB13_5
/*
#include <stdio.h>
int main() {
	int num;
	int binary[8]; // 2진수를 저장할 배열

	printf("Enter 양수(<256): ");
	scanf_s("%d", &num);

	// 10진수를 2진수로 변환하여 배열에 저장
	int i = 0;
	while (num > 0) {
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	// 배열을 역순으로 출력
	printf("");
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
	printf("\n");

	return 0;
}
*/