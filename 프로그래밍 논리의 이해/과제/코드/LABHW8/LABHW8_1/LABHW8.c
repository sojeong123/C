//LAB8_1

//�����ڵ�
/*
#include <stdio.h>
int main(void)
{
	int i, num;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		i = i * i * i;					//i�� ���� �ٲ�����鼭 i�� num���� Ŀ���� ��찡 ����
		printf("%d\n", i);
		//printf("%d\n", i * i * i);		//i�� ���� �ٲ��� �ʰ� ��¸� �ϸ� ���������� ��µ�
	}

	return 0;

}
*/

//�����ڵ�
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

//LAB8_5

//for�� ���
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

//while�� ���
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
//�����ڵ�
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

		printf("%d * %d = %d", num, i, answer);			//answer�� ���� ���� �ʰ� ����Ϸ��� �ϸ� ������ ��
		scanf_s("%d", &answer);							//answer�� ���� ���� �ʰ� scanf�� �Ϸ��� �ϸ� ������ ��

		if (num * i == answer)
		{
			right ++;
		}
	}

	printf("%d���� �����ܿ��� %d���� �¾ҽ��ϴ�.\n", num, right);

	return 0;
}
*/

//�����ڵ�
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

	printf("%d���� �����ܿ��� %d���� �¾ҽ��ϴ�.\n", num, right);

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

//�����ڵ�
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

//�����ڵ�
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
//HW8_4_1 (for�� ���)
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

//HW8_4_2 (while�� ���)
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
			j++;		//���� while �������� j�� ������Ű�� ������ ���ѷ����� ����
		}
		printf("\n");
		j = 1;			//j�� 1�� �ʱ�ȭ���� ������ ���ѷ����� ����	
		i++;			//�ܺ� while �������� i�� ������Ű�� ������ ���ѷ����� ����
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