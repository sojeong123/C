//20201012 ��ǻ���а� �Ӽ���

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

//HW8_4_1 (for�� ���)
/*
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