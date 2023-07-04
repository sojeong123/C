//20201012 컴퓨터학과 임소정
//LAB9_4_0
/*
#include <stdio.h>
int main(void)
{
	int num;

	while (1)
	{
		printf("Enter a number(양수) : ");
		scanf_s("%d", &num);

		if (num > 0)
			break;
	}

	printf("입력된 양수는 %d.\n", num);

	return 0;
}
*/

//LAB9_4_a
/*
#include <stdio.h>
int main()
{
	int count = 0;
	int input;
	int sum = 0;

	while (count < 5)
	{
		do
		{
			printf("0보다 큰 수를 입력<%d번째>: ", count + 1);
			scanf_s("%d", &input);
		} while (input <= 0);

		sum += input;
		count++;
	}

	printf("입력된 값의 총 합: %d\n", sum);

	return 0;
}
*/

//LAB9_4_b
/*
#include <stdio.h>
int main()
{
	int count = 1;
	int input;
	int sum = 0;

	while (count <= 5)
	{
		printf("0보다 큰 수를 입력<%d번째>: ", count);
		scanf_s("%d", &input);

		while (input <= 0)
		{
			printf("0보다 큰 수를 입력<%d번째>: ", count);
			scanf_s("%d", &input);
		}

		sum += input;
		count++;
	}

	printf("입력된 값의 총 합: %d\n", sum);

	return 0;
}
*/