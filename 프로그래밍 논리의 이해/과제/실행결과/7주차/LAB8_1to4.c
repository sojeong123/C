//20201012 ��ǻ���а� �Ӽ���

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
		scanf_s("%d", &integer);			//num���� integer�� ���� ������ ��

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
		printf("Enter a score : ");		// ����ڷκ��� ���� �Է� ��û
		scanf_s("%d", &score);			// ���� �Է� ����

		if (i == 1)						// ù ��° �Էµ� ������ ���
			{
				bestScore = score;		// ���� ���� ������ �ʱ�ȭ
			}

		else if (score > bestScore)		// ������ �Էµ� ���� ���� �������� ū ���
			{
				bestScore = score;		// ���� ���� ���� ����
			}
	}

	printf("The best score is %d.\n", bestScore);		// ���� ���� ���� ���
}
*/