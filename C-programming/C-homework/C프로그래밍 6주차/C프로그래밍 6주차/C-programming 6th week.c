/* Ch05 5-6
#include <stdio.h>
void main()
{
	int a;
	
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("¦���� �Է��߱���..\n");
	}
	else
	{
		printf("Ȧ���� �Է��߱���..\n");
	}
}
*/

/* Ch05 5-4
#include <stdio.h>
void main()
{
	int a;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	if (a > 90)
	{
		printf("������ A�Դϴ�.\n");
	}
	if (a > 80)
	{
		printf("������ B�Դϴ�.\n");
	}
	if (a <= 80)
	{
		printf("������ϼ���.\n");
	}
	else
	{
		printf("�ٽ� �Է��ϼ���.");
	}
}
*/

/* "q" �Է� ������ ���ѹݺ��ϱ�
#include <stdio.h>

int main()
{
	int a;
	char input;

	for (;;)
	{
		printf("������ �Է��ϼ��� (����: q): ");
		scanf("%c", &input);

		if (input == 'q')
		{
			break;
		}

		scanf("%d", &a);

		if (a > 90)
		{
			printf("������ A�Դϴ�.\n");
		}
		else if (a > 80)
		{
			printf("������ B�Դϴ�.\n");
		}
		else
		{
			printf("������ϼ���.\n");
		}
	}

	return 0;
}
*/

/*[���� 5-8] 90 70 60 A B C D F (����)
#include <stdio.h>
void main()
{
	int a;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	if (a >= 90)
	{
		printf("������ A�Դϴ�.\n");

		if (a >= 80)
		{
			printf("������ B�Դϴ�.\n");

			if (a >= 70)
			{
				printf("������ C�Դϴ�.\n");

				if (a >= 60)
				{
					printf("������ D�Դϴ�.\n");
				}
				else
				{
					printf("������ F�Դϴ�.\n");
				}
			}
		}
	}
}
*/

/*[���� 5-8] 90 70 60 A B C D F (����)
#include <stdio.h>
int main()
{
	int a;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	if (a >= 90)
	{
		printf("������ A�Դϴ�.\n");
	}
	else if (a >= 80)
	{
		printf("������ B�Դϴ�.\n");
	}
	else if (a >= 70)
	{
		printf("������ C�Դϴ�.\n");
	}
	else if (a >= 60)
	{
		printf("������ D�Դϴ�.\n");
	}
	else
	{
		printf("������ F�Դϴ�.\n");
	}
}
*/


/*[�������� 12] ��Ģ���� ���ڰ���
1. ����ȣ �ֱ�
2. ù��°���� �����ÿ�.
3. �ι�°���� �����ÿ�.
4. �������� �� ������.
*/

/*
#include <stdio.h>
int main()
{
	char ch;
	int a,b;

	printf("����� �����ڸ� �Է��ϼ���. : ");
	scanf_s("%c", &ch);

	printf("ù ��° ���� �Է��ϼ���. : ");
	scanf_s("%d", &a);

	printf("�� ��° ���� �Է��ϼ���. : ");
	scanf_s("%d", &b);

	if (ch == '+')
	{
		printf("%d + %d = %d �Դϴ�.\n", a, b, a + b);
	}

	else if (ch == '-')
	{
		printf("%d - %d = %d �Դϴ�.\n", a, b, a - b);
	}

	else if (ch == '*')
	{
		printf("%d * %d = %d �Դϴ�.\n", a, b, a * b);
	}

	else if (ch == '/')
	{
		printf("%d / %d = %f �Դϴ�.\n", a, b, a /(float)b);
	}

	else if (ch == '%')
	{
		printf("%d %% %d = %d �Դϴ�\n.", a, b, a / b);
	}
	else
		printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
}
*/


/*1~30���� Ȧ���� ���� for���� �̿��Ͽ� ���Ͻÿ�. (Ʋ��)
#include <stdio.h>
void main()
{
	int i;
	int a = 0;

	for (i =! ; i <= 30; i++)
	{
		a = a + i;
	}

	printf("1���� 30���� Ȧ���� �� : %d\n", a);
}
*/

/*[���]
#include <stdio.h>
int main()
{
	int sum = 0;

	for (int i = 1; i <= 30; i += 2) {
		sum += i;
	}

	printf("1���� 30������ Ȧ���� ��: %d\n", sum);

	return 0;
}
*/

