//20201012 ��ǻ���а� �Ӽ���

//HW8_1
/*
#include <stdio.h>
int main(void)
{
	int i, num, answer;
	int right = 0;

	printf("�� ���� �����Ͻðٽ��ϱ�? : ");
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