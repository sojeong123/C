// SeedFruit1
// ���� n(�̰��� ���Ѽ���� ����)�� �о�
// �� �ڸ����� ���ڸ� ���ϰ�
// ���⿡ �ڽ��� n�� ���� ���� m(�̰��� ���ż���� ����)�� ����ϴ� ���α׷��� �ۼ�����.
// ��, n�� 91�̶��
// m�� 91 + 9 + 1 = 101�̴�.
// 
// ���� ����
// 91	//�Է�(���Ѽ�)
// 101	//���(���ż�)

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
static int sum;

int calFruit(int n)
{
	if (n == 0)
		return sum;
	else
	{
		sum += n % 10;
		return calFruit(n / 10);
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	sum = n;
	printf("%d\n", calFruit(n));
}
*/

// SeedFruit2
// ���� SeedFruit1�� ���Ѽ��� �Է¹޾� ���ż��� ����ߴ�.
// 
// ���ż��� ���Ѽ��� ���� ���̴�.
// 50�� ���Ѽ� 43�� ���� ���ż���.
// ���ż��� �ƴ�(��, ���Ѽ��� ����) ���� �ִ�.
// ���� ���, 9�� 20�� ���Ѽ��� �����Ƿ� ���ż��� �ƴϴ�.
// 
// ���� a, b(a < b)�� �Է¹޾�, a�̻� b������ �� �߿���
// ���ż��� �ƴ� ������ ����ϴ� ���α׷��� �ۼ��϶�.
// 
// ��, a�� b�� 1�� 10�̸� ���ż��� �ƴ� ������ ������ ���� ��µȴ�.
// 1 3 5 7 9
// ���� : 2(1), 4(2), 6(3), 8(4), 10(5)�� ���ż��̹Ƿ� ������� �ʴ´�. (��ȣ���� ���� ���Ѽ�)
// 
// ���� ����
// 1 10		//�Է� : a�� b
// 1 3 5 7 9
// 
// 50 100	//�Է� : a�� b
// 53 64 75 86 97

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
static int sum;

int calFruit(int n)
{
	if (n == 0)
		return sum;
	else
	{
		sum += n % 10;
		return calFruit(n / 10);
	}
}

int is_Fruit(int n)
{
	sum = 0;
	if (calFruit(n) == n)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i;
	int a, b;

	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
		if (!is_Fruit(i))
			printf("%d ", i);
}
*/

// ���ڿ� �н����� üũ
// �н����忡  ���� �������� üũ�ϴ� ���α׷��� �ۼ�����.
// �н����尡 �־�������, �����ڿ� ���ؼ�
// �� ���ڸ� �����ؼ� ���ӵ� ���ڵ��� 3�� ������
// �������� ���� ���� ����.
// ��, acdeb���� cde�� d,e�� ���ӵ� ���ڰ� ��Ÿ����.
// acd, dea, eb, b�� ���ӵ� ���ڰ� �ƴϴ�.
// ���ڿ��� �־��� �н����忡 ���ؼ�
// ���ӵ� 3���� ���ڵ��� ��Ÿ���� ù �κ��� 1�� ��Ÿ����
// ������ ���ڴ� 0���� ����ϴ� ���α׷��� �ۼ�����.
// �׸��� ���ӵǴ� ������ ù�κе� 1�� �������.
// 
// ���� ����
// acdeb	//�Է�
// 01000	//��� : cde�� ���ӵ� �����̹Ƿ�, ù�κ��� c�ڸ��� 1�� ���
// 
// abc123	//�Է�
// 100100	//��� : abc�� 123�� ���ӵ� �����̹Ƿ�	, ù�κ��� a�� 1�ڸ��� 1�� ���
// 
// aaaabc	//�Է�
// 000100	//��� : aaa�� ���ӵ� ���ڰ� �ƴ�����, abc�� ���ӵ� �����̹Ƿ� abc�� ù�κ��� a�� 1�� ���
// 
// 1234444	//�Է�
// 1000000	//��� : 123�� ���ӵ� �����̹Ƿ�, ù�κ��� 1�ڸ��� 1�� ���

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_is_word_in_word(char w1[], int start);
int is_is_word_in_word(char w1[], int start)
{
	if (w1[start] + w1[start + 2] == w1[start + 1] * 2 && w1[start] != w1[start + 1] && w1[start] != w1[start + 2] && w1[start + 1] != w1[start + 2])
		return 1;
	else
		return 0;
}

int main(void)
{
	char passwd[20];

	scanf("%s", passwd);

	for (int i = 0; passwd[i] != '\0'; i++)
		printf("%d", is_is_word_in_word(passwd, i));

	return 0;
}
*/