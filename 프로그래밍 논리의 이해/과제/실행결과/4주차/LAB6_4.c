//20201012 ��ǻ���а� �Ӽ���
//�ܰ� 1	
/*
#include <stdio.h>
int main(void)
{
	char grade;

	printf("Enter your grade(A or F): ");
	scanf_s("%c", &grade);

	if (grade == 'A')
		printf("�����ؿ�!\n");

	else if (grade == 'F')
		printf("�����̳�..\n");
}
*/

//�ܰ� 2
/*
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade(A or F): ");
	scanf_s("%c", &grade);

	if (grade == 'A')
		printf("�����ؿ�!\n");

	else if (grade == 'F')
	{
		printf("Enter your BAD score: ");
		scanf_s("%d", &score);

		printf("������ %d���̶�� �� ������ �ؾ߰ڳ׿�.\n", score);
	}
}
*/

//�ܰ� 3

#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade(A or F): ");
	scanf_s("%c", &grade);

	if (grade == 'A')
	{
		printf("Enter your GOOD score: ");
		scanf_s("%d", &score);

		printf("������ %d���̸� ���� ������ �´±���. ��� �������ؿ�.\n", score);
	}

	else if (grade == 'F')
	{
		printf("Enter your BAD score: ");
		scanf_s("%d", &score);

		printf("������ %d���̶�� �� ������ �ؾ߰ڳ׿�.\n", score);
	}
}