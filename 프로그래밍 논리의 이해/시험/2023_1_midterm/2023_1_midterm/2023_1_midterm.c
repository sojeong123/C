//2023 1�б� �߰�
//1��
//���� �ұ��� ������ �Է¹޾�
//�ұݹ��� ������� �� �󵵸� ���ϴ� ���α׷��� ����ÿ�.

//[hint]
//�� = ����/���(���+����) * 100
//���� �ұ��� ������ �Է¹��� ��.
//����� �Ҽ��� 2�ڸ��� ��µǾ�� �Ѵ�.

//��� ����
//�� : 200
//�ұ� : 24
//�� : 10.71%

//�� : 100
//�ұ� : 24
//�� : 19.35%

/*
#include <stdio.h>
int main(void)
{
	int water, salt;
	double density;

	printf("�� : ");
	scanf_s("%d", &water);
	printf("�ұ� : ");
	scanf_s("%d", &salt);

	density = (double)salt / (water + salt) * 100;

	printf("�� : %.2lf%%", density);

	return 0;
}
*/

//����⵵�� �Է¹޾� ����ũ ���԰����� ������ ����ϴ� ���α׷��� ����ÿ�.
//����⵵ �� ���ڸ���
//1 �Ǵ� 6�̸� ������
//2 �Ǵ� 7�̸� ȭ����
//3 �Ǵ� 8�̸� ������
//4 �Ǵ� 9�̸� �����
//5 �Ǵ� 0�̸� �ݿ���
//�����, �Ͽ����� ���� ������� ���� ����

//��� ����
//����⵵ : 1994
//�����, �����, �Ͽ���

//����⵵ : 2000
//�ݿ���, �����, �Ͽ���

/*
#include <stdio.h>
int main(void)
{
	int birth;

printf("����⵵ : ");
scanf_s("%d", &birth);

switch (birth % 10)
{
	case 1:
	case 6:
		printf("������, �����, �Ͽ���");
		break;
	case 2:
	case 7:
		printf("ȭ����, �����, �Ͽ���");
		break;
	case 3:
	case 8:
		printf("������, �����, �Ͽ���");
		break;
	case 4:
	case 9:
		printf("�����, �����, �Ͽ���");
		break;
	case 5:
	case 0:
		printf("�ݿ���, �����, �Ͽ���");
		break;
	}

	return 0;
}
*/

//3��
//���ڸ� �Է¹ް�
//�� ���ڸ� �տ������� �д� �Ͱ� �ڿ������� �д� ���� �������� �Ǻ��ϴ� ���α׷��� ����ÿ�.

//��� ����
//���� : 532
//not the same. <-��� (�� : 532 / �� : 235)

//���� : 121
//the same.

/*
#include <stdio.h>
int main(void)
{
	int num, temp, reverse = 0;

	printf("���� : ");
	scanf_s("%d", &num);

	temp = num;

	while (temp != 0)
	{
		reverse = reverse * 10 + temp % 10;
		temp /= 10;
	}

	if (num == reverse)
		printf("the same.");
	else
		printf("not the same.");

	return 0;
}
*/

//5��
//���� ������ �Է¹޾�
//�� ���� 2���� �Ҽ��� ������ ǥ���� �� �ִ��� �Ǻ��ϴ� ���α׷��� ����ÿ�.

//��� ����
//���� ���� : 15
//2 + 13 = 15

//���� ���� : 16
//3 + 13 = 16
//5 + 11 = 16

//���� ���� : 2
//no expression.

//���� ���� : 11
//no expression.

/*
#include <stdio.h>
int main(void)
{
	int num, i, j, flag = 0;

	printf("���� ���� : ");
	scanf_s("%d", &num);

	for (i = 2; i <= num / 2; i++)
	{
		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
		{
			for (j = 2; j <= (num - i) / 2; j++)
			{
				if ((num - i) % j == 0)
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 0)
			printf("%d + %d = %d\n", i, num - i, num);

		flag = 0;
	}
}
*/

//2020 2�б� �߰�