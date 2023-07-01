//20201012 컴퓨터학과 임소정

//LAB8_1
/*
#include <stdio.h>
int main(void)
{
	int i, num;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%d\n", i * i * i);
	}

	return 0;
}
*/

//LAB8_2
/*
#include <stdio.h>
int main(void)
{
	int i, num;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}

	return 0;
}
*/

//LAB8_3
/*
#include <stdio.h>
int main(void)
{
	int i, num, integer;
	int even = 0;

	printf("Enter the # of integers : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("Enter an integer : ");
		scanf_s("%d", &integer);			//num말고 integer을 따로 지정할 것

		if (integer % 2 == 0)
		{
			even++;
		}
	}

	printf("The number of even numbers is %d.\n", even);

	return 0;
}
*/

//LAB8_4
/*
#include <stdio.h>
int main(void)
{
	int i, score, bestScore;

	for (i = 1; i < 6; i++)
	{
		printf("Enter a score : ");		// 사용자로부터 점수 입력 요청
		scanf_s("%d", &score);			// 점수 입력 받음

		if (i == 1)						// 첫 번째 입력된 점수인 경우
			{
				bestScore = score;		// 가장 높은 점수로 초기화
			}

		else if (score > bestScore)		// 이전에 입력된 가장 높은 점수보다 큰 경우
			{
				bestScore = score;		// 가장 높은 점수 갱신
			}
	}

	printf("The best score is %d.\n", bestScore);		// 가장 높은 점수 출력
}
*/