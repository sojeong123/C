/*
//��1 : 1���� n������ ���� ���(1+2+3+...+n)
#include <stdio.h>
int main(void)
{
	int i, n, sum = 0;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		sum += i;

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	return 0;
}
*/

/*
//��2 : 1���� n������ ���� ���(1*2*3*...*n)
#include <stdio.h>
int main(void)
{
	int i, n, mul = 1;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		mul *= i;

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, mul);
	return 0;
}
*/

/*
//��3 : 3�� n�� ����(3+3+3+...+3)
#include <stdio.h>
int main(void)
{
	int i, n, sum = 0;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		sum += 3;

	printf("3�� %d�� ���� ���� %d�Դϴ�.\n", n, sum);
	return 0;
}
*/

/*
//��4 : 5�� n�� ����(5*5*5*...*5)
#include <stdio.h>
int main(void)
{
	int i, n, mul = 1;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)		//"for (i = 0; i < n; i++)"�� �ص� ��
		mul *= 5;

	printf("5�� %d�� ���� ���� %d�Դϴ�.\n", n, mul);
	return 0;
}
*/

/*
//��5 : n���� ������ �о ������ ���,
//����� ���(����1 + ����2 + ... + ����n)
#include <stdio.h>
int main(void)
{
	int i, n, score, sum = 0;
	double avg;

	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &score);
		sum += score;
	}

	avg = (double)sum / n;
	printf("������ %d�̰�, ����� %.1lf�Դϴ�.\n", sum, avg);
	return 0;
}
*/

/*
//��6 : n���� ������ �о �ִ밪�� ã�´�.
//(����1, ����2, ..., ����n �� ���� ū ��)
#include <stdio.h>
int main(void)
{
	int i, n, score;
	//max = ���� ���� ��;
	int max = -2147483647;		//int���� �ּҰ�
	i = 0;
	while (i < n)
	{
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &score);
		if (score > max)
			max = score;
		i++;
	}
	printf("�ִ밪�� %d�Դϴ�.\n", max);
	return 0;
}
*/

/*
//��6-1 : n���� ������ �о, �ִ밪�� �ּҰ��� ã�´�.
#include <stdio.h>
int main(void)
{
	int i, n, score;
	int max = -2147483647;		//int���� �ּҰ�
	int min = 2147483647;		//int���� �ִ밪
	i = 0;
	while (i < n)
	{
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &score);
		if (score > max)
			max = score;
		if (score < min)
			min = score;
		i++;
	}
	printf("�ִ밪�� %d�̰�, �ּҰ��� %d�Դϴ�.\n", max, min);
	return 0;
}
*/

/*
//��7 : n�� ����� ã�� ����Ѵ�.
#include <stdio.h>
int main(void)
{
	int i, n;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}
*/

/*
//��8 : n�� �Ҽ����� �ƴ����� �Ǻ��Ѵ�.(�Ҽ��̴� �ƴϴٸ� ���)
//n�� �Ҽ��� ���� 1�� �ƴϸ� 0�� ��ȯ�ϴ� �Լ� isPrime(int n)�� �����϶�.
#include <stdio.h>
int isPrime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int n;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	if (isPrime(n) == 1)
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	return 0;
}
*/

/*
int isPrime(int n)
{
	int prime = 1;

	if(n<2) return 0;		/n�� 1�϶�
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return 0;		/n�� 2�̻��϶�
}
*/

/*
//��8 : n�� �Ҽ����� �ƴ����� �Ǻ��Ѵ�.(�Ҽ��̴� �ƴϴٸ� ���)
//n�� �Ҽ��� ���� 1�� �ƴϸ� 0�� ��ȯ�ϴ� �Լ� isPrime(int n)�� �����϶�.
#include <stdio.h>
int main(void)
{
	int i, n, prime;
	prime = 1;		//�Ҽ���� �ϴ� ����
	
	//i <- 2.. (n-1)
	
	if (n % i == 0)
		prime = 0;	//�Ҽ��� �ƴ�
	break;

	if (prime)
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	return 0;
}
*/

//isPrime(int n), ������ ���� n�� �������ٸ� �Ҽ��� ���� �̿��ϴ� ���

//��8 : n�� �Ҽ����� �ƴ����� �Ǻ��Ѵ�. (�Ҽ��̴� �ƴϴٸ� ���)

/*
//1��° ��� : ����� ������ ��� 2���̸� �Ҽ��� ���� �̿��ϴ� ���
//isPrime�Լ��� ������� �ʴ´�.
#include <stdio.h>
int main(void)
{
	int i, n, cnt = 0;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cnt++;
	}
	if (cnt == 2)
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	return 0;
}
*/

/*
//2��° ��� : ������ ���� n�� �������ٸ� �Ҽ��� ���� �̿��ϴ� ���
//isPrime�Լ��� ������� �ʴ´�.
#include <stdio.h>
int main(void)
{
	int i, n;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			break;
	}
	if (i == n)
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	return 0;
}
*/

/*
//3��° ��� : isPrime�Լ��� ����Ѵ�.
//isPrime�Լ��� ����Ѵ�.
#include <stdio.h>
int isPrime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int n;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	if (isPrime(n) == 1)
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	return 0;
}
*/


//������ �亯//
/*
//��� 1 : prime���� �̿�
int prime = 1;
for (int i = 2; i < n; i++)
{
	if (n % i == 0)
		prime = 0;
	break;
}

if (prime)
	printf("%d�� �Ҽ��Դϴ�.\n", n);
else
	printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
*/

/*
//��� 2 : prime���� �̿����� ����.
for(i=2; i<n; i++)
{
	if(n%i==0)
		break;
}

if(i==n)
	printf("%d�� �Ҽ��Դϴ�.\n", n);
else
	printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
*/


//��� 3 : ����� ������ ��� 2���̸� �Ҽ��� ���� �̿��ϴ� ���
//<���� : ȿ���� ���� �� ����.>
/*
int count = 0;
for (int i = 1; i <= n; i++)
{
	if (n % i == 0)
		count++;
}

if (count == 2)
	printf("%d�� �Ҽ��Դϴ�.\n", n);
else
	printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
*/

//��� 4 : Prime�Լ��� ����Ѵ�.
/*
