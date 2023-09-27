//LAB4_2
/*
#include <stdio.h>
int sum_rec(int);
void main()
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum_rec(n));
}

//����Լ� �̿�
int sum_rec(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum_rec(n - 1);
}
*/

//LAB4_3
//�Ǻ���ġ ������ ���� ����Ϸ� �Ѵ�. ���õ� ���뿡 ���� �۾��� �����϶�.
//�Ǻ���ġ ������ ������ ���� ����� ���ǿ� ���� ��������.
//F(n)=F(n-1)+F(n-2)
//F(0)=F(1)=1

/*
#include <stdio.h>
int fibo(int n);
int main(void)
{
	int n, idx;

	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����) : ");
	scanf_s("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)		//���ٿ� 5���� ���
			printf("\n");
	}
	printf("\n");
}

int fibo(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}
*/

//HW4_1 (static ���� ���)
//�Ʒ��� ���� �Աݸ��� ó���ϴ� ���α׷��� �ϼ��϶�.
//main�Լ� �ܿ� �Ʒ��� ���� prototype�� ���� �Լ��� ����϶�.
//void save(int money);

//���� ���
//������ �ݾ�<-1 for exit>: 100
//��������� �Աݾ� 100
//������ �ݾ�<-1 for exit>: 200
//��������� �Աݾ� 300
//������ �ݾ�<-1 for exit>: 300
//��������� �Աݾ� 600
//������ �ݾ�<-1 for exit>: -1
//�Ա� �Ϸ�

//static ������ ����϶�.
//���ð� ����ݺ����� ������ �̿��϶�.

/*
#include <stdio.h>
void save(int money);
void main()
{
	int money;

	while (1)
	{
		printf("������ �ݾ�<-1 for exit>: ");
		scanf_s("%d", &money);
		if (money == -1)
			break;
		save(money);
	}
	printf("�Ա� �Ϸ�\n");
}

void save(int money)
{
	static int sum = 0;
	sum += money;
	printf("��������� �Աݾ� %d\n", sum);
}
*/

//HW4_2
//��� �Լ��� ������� �ʰ� �ٽ� ���α׷��϶�.
//��, main�Լ��� �״�� �ΰ� �Լ� fibo�� �����϶�.

/*
#include <stdio.h>
int fibo(int n);
void main()
{
	int n, idx;

	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����) : ");
	scanf_s("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)		//���ٿ� 5���� ���
			printf("\n");
	}
	printf("\n");
}

int fibo(int n)
{
	int i, a = 1, b = 1, c;

	if (n == 0 || n == 1)
		return 1;
	else
	{
		for (i = 2; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}
*/

//HW4_3_0
//2�� n���� ���ϴ� �Լ��� ��������� ��������.

/*
#include <stdio.h>
int twoPower(int x);
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);

	printf("2�� %d���� %d�̴�.\n", n, twoPower(n));
}

int twoPower(int x)
{
	if (x == 0)
		return 1;
	else
		return 2 * twoPower(x - 1);
}
*/

//HW4_3_1
//x�� y���� ���ϴ� �Լ��� ��������� ��������.

/*
#include <stdio.h>
int xPower(int x, int y);
int main(void)
{
	int x, y;
	printf("Enter two numbers: ");
	scanf_s("%d %d", &x, &y);

	printf("%d�� %d���� %d�̴�.\n", x, y, xPower(x, y));
}

int xPower(int x, int y)
{
	if (y == 0)
		return 1;
	else
		return x * xPower(x, y - 1);
}
*/

//HW4_4
//���п��� ������ n������ r���� �̴� ���� ���̴�.
//������ �Ʒ��� ���� ��������� �����Ѵ�.
//������ �������� ���ϴ� �Լ��� comb��� ����.
//�Ʒ��� ���Ǹ� ���� comb�Լ��� recursion�� �̿��Ͽ� �ϼ��Ͻÿ�.
///nCr = 1(if r = 0 or r = n)
//=n-1Cr-1 + n-1Cr

/*
#include<stdio.h>
int comb(int n, int r)
{
if (r == 0 || r == n)
		return 1;
	else
		return comb(n - 1, r - 1) + comb(n - 1, r);
}

int main(void)
{
	int n, r;

	printf("Enter n and r: ");
	scanf_s("%d %d", &n, &r);
	printf("%d", comb(n, r));
	return 0;
}
*/

//HW4_5_1 (�ݺ�)
//� ���� n�� ¦���̸� 2�� ������ Ȧ���̸� 3�� ���� �� 1�� ���Ѵ�.
//�̷��� �ؼ� ���� ������� ���� n���� ���� n=1�� �ɶ����� ���� �۾��� �ݺ��Ѵ�.
//���� ��� n=22�̸� ������ ���� ������ ���������.
//22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

//�� �� 1�� ���� ������ ������� ���� ������ (n�� 1����) ����Ŭ ���̶� �Ѵ�.
//���� ��� n=22�� ��쿣�� ����Ŭ ���̰� 16�̴�(15�ƴϴ�).
//Ư���� ���� �Ķ���ͷ� �޾�, ���� ���� ������ ����ϰ� ����Ŭ ���̸� �������ִ� �Լ��� �ݺ����� �̿��Ͽ� �ۼ��Ͻÿ�.
//�Լ��� ������ int get_cycle_number(int n)�̴�.

/*
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);

	printf("����Ŭ ���̴� %d�̴�.\n", get_cycle_number(n));
}

int get_cycle_number(int n)
{
	int cnt = 1;
	while (n != 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		cnt++;
	}
	return cnt;
}
*/

//HW4_5_2 (���)
//HW4_5_1������ get_cycle_number(int n)�Լ��� ��ȯ�� �̿��Ͽ� �ۼ��϶�.
//get_cycle_number�Լ� �ȿ��� ���������� ������� ���ÿ�.

/*
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);

	printf("����Ŭ ���̴� %d�̴�.\n", get_cycle_number(n));
}

int get_cycle_number(int n)
{
	static int cnt = 1;
	if (n == 1)
		return cnt;
	else
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		cnt++;
		return get_cycle_number(n);
	}
}
*/

//Challenge4_1
//�� ������ �ִ������� ���ϴ� �Լ��� �ݺ����� �̿��Ͽ� �ۼ��϶�.
//��Ŭ���� ȣ������ �̿��Ѵ�!
//a�� b�� �������� �� ���� q�̰� �������� r�̸�,
//a�� b�� �ִ������� b�� r�� �ִ������� ����.
//R�� 0�� ��� �ִ������� b�̴�.

//��, a = 27, b = 15�� �� ��,
//27 % 15 = 12
//15 % 12 = 3
//12 % 3 = 0	//�׷��Ƿ� 3�� �ִ�������.

/*
#include <stdio.h>
int gcd(int x, int y);
int main(void)
{
	int a, b, big, small;

	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);

	if (a < b)
	{
		big = b;
		small = a;
	}
	else
	{
		big = a;
		small = b;
	}

	printf("%d�� %d�� �ִ������� %d\n", a, b, gcd(big, small));
}

int gcd(int x, int y)
{
	int r;
	while (1)
	{
		r = x % y;
		if (r == 0)
			return y;
		else
		{
			x = y;
			y = r;
		}
	}
}
*/

//Challenge4_2
//�� ������ �ִ������� ���ϴ� �Լ��� ����Լ��� �̿��Ͽ� �ۼ��϶�.
//���� Challenge4_1���� �Լ�gcd�� �����ϸ� �ȴ�.

/*
#include <stdio.h>
int gcd(int x, int y);
int main(void)
{
	int a, b, big, small;

	printf("Enter two numbers: ");
	scanf_s("%d %d", &a, &b);

	if (a < b)
	{
		big = b;
		small = a;
	}
	else
	{
		big = a;
		small = b;
	}

	printf("%d�� %d�� �ִ������� %d\n", a, b, gcd(big, small));
}

int gcd(int x, int y)
{
	int r;
	r = x % y;
	if (r == 0)
		return y;
	else
		return gcd(y, r);
}
*/

//Project1
//�Ʒ��� �� �Լ� isSetEqual�� addOneElement, printSet�� �����Ͽ�, �Ʒ�ó�� �������� ������ �϶�.
//isSetEqual�� addOneElement�� ������ ��, �־��� �Լ� hasElement�� ����϶�.

//���� ���
//A : <1, 2, 3>
//B : <3, 2, 1, 4>
//���� A�� B�� �ٸ���.
//
//A�� 3�� �߰��ϸ�
//It is redundant. Please retry.
//���� A : <1, 2, 3>
//A�� 4�� �߰��ϸ�
//���� A : <1, 2, 3, 4>
//���� A�� B�� ����.

/*
#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0
#include <stdio.h>

//������ ����Ѵ�.
void printSet(int set[], int size)
{
	int i;
	printf("<");
	for (i = 0; i < size; i++)
		printf("%d ", set[i]);
	printf(">\n");
}

// setA �� setB �� ������ 1 �� �ٸ��� 0 �� ��ȯ�Ѵ�.
int isSetEqual(int set1[], int size1, int set2[], int size2)
{
	int i;
	if (size1 != size2)
		return 0;
	for (i = 0; i < size1; i++)
		if (!hasElement(set2, size2, set1[i]))
			return 0;
	return 1;
}

//���Ұ� ���տ� �������� ������ �߰�, �̹� �����ϸ� redundant��� ����ϰ�, ���� ���� ũ�⸦ ��ȯ
int addOneElement(int set[], int size, int element)
{
	if (hasElement(set, size, element))
	{
		printf("It is redundant. Please retry.\n");
		return size;
	}
	else
	{
		set[size] = element;
		size++;
		return size;
	}
}

// set �� element �� ������ 1 �� ������ 0 �� ��ȯ�Ѵ�
int hasElement(int set[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
		if (set[i] == element)
			return HAVE_ELEMENT; // we found it!
	return DO_NOT_HAVE_ELEMENT;
}

int main(void)
{
	int setA[MAX_SET_SIZE] = { 1, 2, 3 };
	int setB[MAX_SET_SIZE] = { 3, 2, 1, 4 };
	int num;
	int sizeA = 3, sizeB = 4;
	printf("A:"); printSet(setA, sizeA);
	printf("B:"); printSet(setB, sizeB);
	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("���� A �� B �� ����\n");
	else
		printf("���� A �� B �� �ٸ���\n\n");
	printf("A �� 3 �� �߰��ϸ�\n");
	sizeA = addOneElement(setA, sizeA, 3); // 3 �� SetA �� �߰��Ѵ�
	printf("���� A:"); printSet(setA, sizeA);
	printf("A �� 4 �� �߰��ϸ�\n");
	sizeA = addOneElement(setA, sizeA, 4); // 4 �� SetA �� �߰��Ѵ�
	printf("���� A:"); printSet(setA, sizeA);
	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("���� A �� B �� ����\n");
	else
		printf("���� A �� B �� �ٸ���\n");
}
*/