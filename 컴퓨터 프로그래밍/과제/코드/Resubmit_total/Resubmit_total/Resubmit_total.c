// HW1_1
// (for ��, �迭, rand()�Լ�)
// 0 ���� 9 ������ ���� ȸ���� ���� ����ϴ� �κ��� �߰��϶�.
// 0 ���� 9 ������ ������ �������� ũ�Ⱑ 10 �� ������ �迭 count �� ����϶�.
// ��, count[0]�� 0 �� ���� ����, �� , count[9]�� 9 �� ���� ����
// ���� ����
// Enter the number of random numbers<<=100> : 10
// 0�� ������ 1
// 1�� ������ 0
// 2�� ������ 1
// 3�� ������ 0
// 4�� ������ 3
// 5�� ������ 1
// 6�� ������ 2
// 7�� ������ 0
// 8�� ������ 1
// 9�� ������ 1
// -----------------------------------------------
// �߻��� ������
//	  6     5     4     9     2
//    8     4     0     6     4
// 
// ��µǴ� ������ ������ ������ ������ �ִ밪������ ������� ����,
// 0 ���� 9 ������ ������ ����϶�.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int count[10], data[100], num, i;
	srand(time(NULL));

	printf("Enter the number of random numbers(<=100): ");
	scanf("%d", &num);

	for (i = 0; i < 10; i++)
		count[i] = 0;

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 10;
		switch (data[i])
		{
		case 0:
			count[0]++;
			break;

		case 1:
			count[1]++;
			break;

		case 2:
			count[2]++;
			break;

		case 3:
			count[3]++;
			break;

		case 4:
			count[4]++;
			break;

		case 5:
			count[5]++;
			break;

		case 6:
			count[6]++;
			break;

		case 7:
			count[7]++;
			break;

		case 8:
			count[8]++;
			break;

		case 9:
			count[9]++;
			break;
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d�� ������ %d\n", i, count[i]);
	printf("---------------------------------------\n");
	printf("�߻��� ������\n");

	for (i = 0; i < num; i++)
	{
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}
	return 0;
}
*/

// HW1_2
// (����) ���Ǳ� ���α׷� : �Ž����� ����ϱ�
// �־��� �Ž������� ���ؼ� � �������� �Ž��� ������ ����ϴ� ���α׷��̴�.
// ������ 500 ��, 100 ��, 50 ��, 10 ��¥�� ������ ������,
// �Ž��� �ִ� ������ ������ �ּ������� �ϴ� ���� �������� �Ѵ�.
// ���� ��� 100 ���� �Ž��� �� ���,
// 10 ��¥�� 10 ���� �Ž��� �ִ� ���� �ƴ϶�, 100 ��¥�� 1 ���� �Ž��� �־�� �Ѵ�.
// 
// 1. �� ������ �ݾ��� coins ��� �迭�� ����Ǿ� �ִ�.
// 2. int coins[4] = { 500, 100, 50, 10 };
// 3. �����־�� �� �ݾ��� change �̶�� ������ ����Ǿ� �ִٰ� �����ϸ�
// 4. �ϴ� �ݾ��� ū �������� �����Ѵ�.
// 5. ������ �׸� �ݾ�(���� ���, 500 ��)���� �������� ��, ���� �Ž����־�� �� ������ ������ �ȴ�.
// 6. change �� �׸� �ݾ����� ���� �������� �ְ� ���� �������� �Ѿ��.
// 
// ���� ����
// Enter the amount of change : 580
// 500 coin : 1
// 100 coin : 0
// 50 coin : 1
// 10 coin : 3
// 
// Enter the amount of change : 1340
// 500 coin : 2
// 100 coin : 3
// 50 coin : 0
// 10 coin : 4
// 
//���� �ڵ带 �迭�� ����Ͽ� �ٽ� �ۼ��Ͻÿ�.

//���� �� ��
/*
#include <stdio.h>
int main(void)
{
	int change, i;
	int coin[4] = { 500, 100, 50, 10 };

	printf("Enter the amount of change : ");
	scanf_s("%d", &change);

	for (i = 0; i < 4; i++)
	{
		printf("%d coin : %d\n", coin[i], change / coin[i]);
		change = change % coin[i];
	}

	return 0;
}
*/

//���� ���
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int coins[4] = { 500, 100, 50, 10 };
	int change, coin;

	printf("Enter the amount of change : ");
	scanf("%d", &change);

	for (int i = 0; i < 4; i++)
	{
		coin = change / coins[i];
		printf("%d coin : %d\n", coins[i], coin);
		change = change % coins[i];
	}
	return 0;
}
*/

// 21�� ������ �б⸻ 4_2
// �빮�ڵ鿡 ���ؼ�
// A�� 1, B�� 2, C�� 3, ��, Z�� 26���� ���� �ο��� �� �ִ�.
// �־��� �ܾ�(�빮�ڷ� ������) (ũ�Ⱑ 20�̸�)�� ���ؼ�
// ���� ��Ī ������ ��ȣȭ�Ϸ��Ѵ�.
// ���� ���, �־��� �ܾ ABD�� ��ȣȭ�� ����� 124�� �ȴ�.
// �ܾ�� �빮�ڷθ� �̷������.
// �ܾ�� A���� Z�� ���ڷ� �̷������.
// A���� Z�� ���ڷ� �̷���� ���ڿ� s�� ���ڵ�� �� ���ڿ� e�� �ٲٴ�
// �Լ� changeToDigitEncode�� �ۼ��϶�.
// ���� ����
// AZ
// 126			//A:1, Z:26
// 
// BTS
// 22019		//B:2, T:20, S:19

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeToDigitEncode(char s[], char e[]);

int main(void)
{
	char str[20];
	char encoding_str[39];

	scanf("%s", str);
	changeToDigitEncode(str, encoding_str);
	printf("%s", encoding_str);
	
	return 0;
}

void changeToDigitEncode(char s[], char e[])
{
	int i, j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'I')
			e[j++] = s[i] - 'A' + '1';
		else if (s[i] <= 'S')
		{
			e[j++] = '1';
			e[j++] = s[i] - 'J' + '0';
		}
		else
		{
			e[j++] = '2';
			e[j++] = s[i] - 'T' + '0';
		}
	}
	e[j] = '\0';

	return;
}
*/

// 21�� ������ �б⸻ 5
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isHiddenPassword(char passwd[], char input[])
{
	int i, j;

	j = 0;
	for (i = 0; input[i] != '\0'; i++)
		if (input[i] == passwd[j])
			j++;
	if (passwd[j] == '\0')
		return (1);
	else
		return (0);
}

int main(void)
{
	char passwd[20], input[20];
	int i;
	scanf("%s", passwd);
	for (i = 0; i < 3; i++) {
		scanf("%s", input);
		if (isHiddenPassword(passwd, input))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
*/