//20201012 ��ǻ���а� �Ӽ���
//LAB16_�� (�� �ؿ� �����ٶ� ��ģ �� �ֽ��ϴ�.)

// (��)
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d��° row : ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
		printf("\n");
	}

	return 0;
}
*/

// (��)
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row : ", i + 1);

		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
	}
	printf("\n");

	return 0;
}
*/

// (��)
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row : ", i + 1);

		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1");
	}
	printf("\n");
	return 0;
}
*/

// (��)
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };

	int i, j, total = 0;
	double avg;

	printf("��>\n");

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				total += test[i][j];
			else
				//test[i][j] = -1;			#Ʋ��
				//�ʱ�ȭ ���� ���� ������Ʈ�� ���� ��� -1�� ������ ��, �� ���鵵 �����Ͽ� ��հ� ���� ���Ͻÿ�.
				total += -1;

	printf("Total is %d.\n", total);
	avg = (double)total / 12;
	printf("Average is %.2lf.\n", avg);

	return 0;
}
*/

// (��)
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, max, bigsum = 0;

	printf("��>\n");

	for (i = 0; i < 4; i++)
	{
		max = test[i][0];
		for (j = 1; j < 3; j++)
			if (max < test[i][j])
				max = test[i][j];
		printf("%d��° row������ �ִ밪 : %d\n", i + 1, max);
		bigsum += max;
	}
	printf("�ִ밪���� �� : %d\n", bigsum);

	return 0;
}
*/

// (�����ٶ�)
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, max, total = 0, bigsum = 0;
	double avg;

	printf("��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d��° row : ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
		printf("\n");
	}

	printf("\n��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d��° row : ", i + 1);
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1 ");
		printf("\n");
	}

	printf("\n��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d��° row : ", i + 1);
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1 ");
		printf("\n");
	}

	printf("\n��>\n");

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				total += test[i][j];
			else
				total += -1;

	printf("Total is %d.\n", total);
	avg = (double)total / 12;
	printf("Average is %.2lf.\n", avg);

	printf("\n��>\n");

	for (i = 0; i < 4; i++)
	{
		max = test[i][0];
		for (j = 1; j < 3; j++)
			if (max < test[i][j])
				max = test[i][j];
		printf("%d��° row������ �ִ밪 : %d\n", i + 1, max);
		bigsum += max;
	}
	printf("�ִ밪���� �� : %d\n", bigsum);

	return 0;
}