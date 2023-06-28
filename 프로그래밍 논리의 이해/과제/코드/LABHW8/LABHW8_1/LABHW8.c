//LAB8_1

//실패코드
/*
#include <stdio.h>
int main(void)
{
	int i, num;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		i = i * i * i;					//i의 값을 바꿔버리면서 i가 num보다 커지는 경우가 생김
		printf("%d\n", i);
		//printf("%d\n", i * i * i);		//i의 값을 바꾸지 않고 출력만 하면 정상적으로 출력됨
	}

	return 0;

}
*/

//정답코드
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

//LAB8_5

//for문 사용
/*
#include <stdio.h>
int main(void)
{
	int i, row, column;

	printf("Enter the number of rows : ");
	scanf_s("%d", &row);

	printf("Enter the number of columns : ");
	scanf_s("%d", &column);

	for (int i = 1; i <= row; i++)
		{
			for (int j = 1; j <= column; j++)
			{
				printf("*");
			}
			printf("\n");
	}
}
*/

//while문 사용
/*
#include <stdio.h>
int main(void)
{
	int i, j, row, column;

	printf("Enter the number of rows : ");
	scanf_s("%d", &row);

	printf("Enter the number of columns : ");
	scanf_s("%d", &column);

	i = 1;
	while (i <= row)
	{
		int j = 1;
		while (j <= column)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
*/

//HW8_1
//실패코드
/*
#include <stdio.h>
int main(void)
{
	int i, num, answer;
	int right = 0;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 1; i <= 9; i++)
	{
		int answer;

		printf("%d * %d = %d", num, i, answer);			//answer에 값을 넣지 않고 출력하려고 하면 오류가 남
		scanf_s("%d", &answer);							//answer에 값을 넣지 않고 scanf를 하려고 하면 오류가 남

		if (num * i == answer)
		{
			right ++;
		}
	}

	printf("%d단의 구구단에서 %d개를 맞았습니다.\n", num, right);

	return 0;
}
*/

//정답코드
/*
#include <stdio.h>
int main(void)
{
	int i, num, answer;
	int right = 0;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 1; i <= 9; i++)
	{
		int answer;

		printf("%d * %d = ", num, i);
		scanf_s("%d", &answer);

		if (num * i == answer)
		{
			right++;
		}
	}

	printf("%d단의 구구단에서 %d개를 맞았습니다.\n", num, right);

	return 0;
}
*/

//HW8_2
/*
#include <stdio.h>
int main(void)
{
	int i, score, bestScore;

	for (i = 1; i < 6; i++)
	{
		printf("Enter a score : ");
		scanf_s("%d", &score);

		if (i == 1)
		{
			bestScore = score;
		}

		else if (score > bestScore)
		{
			bestScore = score;
		}
	}

	printf("The best score is %d.\n", bestScore);
}
*/

//실패코드
/*
#include <stdio.h>
int main(void)
{
	int i, num, score, best, worst;
	int right = 0;

	printf("Enter the number of scores : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("Enter a score : ");
		scanf_s("%d", &score);

			if (i == 1)
			{
				worst = score;
			}

			else if (score > best)
			{
				worst = score;
			}


			if (i == 1)
			{
				best = score;
			}

			else if (score > best)
			{
				best = score;
			}

	}

	printf("The best score is %d.\n", best);
	printf("The worst score is %d.\n", worst);

	return 0;
}
*/

//정답코드
/*
#include <stdio.h>
int main(void)
{
	int i, num, score, best, worst;
	int right = 0;

	printf("Enter the number of scores : ");
	scanf_s("%d", &num);

	if (num <= 0)
	{
		printf("no data.\n");
		return 0;
	}

	for (i = 1; i <= num; i++)
	{
		printf("Enter a score : ");
		scanf_s("%d", &score);

		if (i == 1)
		{
			worst = score;
			best = score;
		}

		else if (score > best)
		{
			best = score;
		}

		else if (score < worst)
		{
			worst = score;
		}
	}

	printf("The best score is %d.\n", best);
	printf("The worst score is %d.\n", worst);

	return 0;
}
*/

//HW8_3
/*
#include <stdio.h>
int main(void)
{
	int i, j, row, column;

	printf("Enter the number of rows : ");
	scanf_s("%d", &row);

	printf("Enter the number of columns : ");
	scanf_s("%d", &column);

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= column; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
*/

//HW8_4
/*
//HW8_4_1 (for문 사용)
#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			if (j % 2 == 0)
			{
				printf("%d * %d = %d\t", i, j, j * i);
			}
		}
		printf("\n");
	}
	return 0;
}
*/

//HW8_4_2 (while문 사용)
/*
#include <stdio.h>
int main(void)
{
	int i = 1;
	int j = 1;

	while (i <= 9)
	{
		while (j <= 8)
		{
			if (j % 2 == 0)
			{
				printf("%d * %d = %d", i, j, j * i);
				printf("\t");
			}
			j++;		//내부 while 루프에서 j를 증가시키지 않으면 무한루프에 빠짐
		}
		printf("\n");
		j = 1;			//j를 1로 초기화하지 않으면 무한루프에 빠짐	
		i++;			//외부 while 루프에서 i를 증가시키지 않으면 무한루프에 빠짐
	}
}
*/

//HW8_5
#include <stdio.h>
int main(void)
{
	int i, factorial;
	int num = 1;

	printf("Enter a number (>=2) : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%d *", i);
	}
	return 0;

	printf("%d! = ", num);
}