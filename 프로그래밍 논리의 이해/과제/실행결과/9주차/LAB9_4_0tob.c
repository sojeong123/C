//20201012 ��ǻ���а� �Ӽ���
//LAB9_4_0
/*
#include <stdio.h>
int main(void)
{
	int num;

	while (1)
	{
		printf("Enter a number(���) : ");
		scanf_s("%d", &num);

		if (num > 0)
			break;
	}

	printf("�Էµ� ����� %d.\n", num);

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
			printf("0���� ū ���� �Է�<%d��°>: ", count + 1);
			scanf_s("%d", &input);
		} while (input <= 0);

		sum += input;
		count++;
	}

	printf("�Էµ� ���� �� ��: %d\n", sum);

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
		printf("0���� ū ���� �Է�<%d��°>: ", count);
		scanf_s("%d", &input);

		while (input <= 0)
		{
			printf("0���� ū ���� �Է�<%d��°>: ", count);
			scanf_s("%d", &input);
		}

		sum += input;
		count++;
	}

	printf("�Էµ� ���� �� ��: %d\n", sum);

	return 0;
}
*/