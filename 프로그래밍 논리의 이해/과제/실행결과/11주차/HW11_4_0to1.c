//20201012 ��ǻ���а� �Ӽ���

//HW11_4_0
/*
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int isPrime = 1;

	printf("Enter a number : ");
	scanf_s("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	if (isPrime == 1)
		printf("�Ҽ��Դϴ�.\n");
	else
		printf("�Ҽ��� �ƴմϴ�.\n");

	return 0;
}
*/

//HW11_4_1
//�ܰ� 1
/*
#include <stdio.h>
int isPrime(int num);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf_s("%d", &num);

	if (isPrime(num) == 1)
		printf("�Ҽ��Դϴ�.\n");
	else
		printf("�Ҽ��� �ƴմϴ�.\n");

	return 0;
}

int isPrime(int num)
{
	int i;
	int isPrime = 1;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	return isPrime;
}
*/

//�ܰ� 2
/*
#include <stdio.h>
int isPrime(int num);
int main(void)
{
	int num;
	printf("Enter a number<-1 for exit> : ");
	scanf_s("%d", &num);

	while (num != -1)
	{
		if (isPrime(num) == 1)
			printf("�Ҽ��Դϴ�.\n");
		else
			printf("�Ҽ��� �ƴմϴ�.\n");

		printf("Enter a number<-1 for exit> : ");
		scanf_s("%d", &num);
	}

	return 0;
}

int isPrime(int num)
{
	int i;
	int isPrime = 1;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	return isPrime;
}
*/