// 5���� ���ڸ� �Է¹޾�
// 1���� �迭�� �ְ�
// 5���� ���ڸ� ���������� �ϳ��� ������ ����Ѵ�.
// ���� ����
// 10 20 30 40 50	//�Է�
// 50 10 20 30 40	//���
//
// 10 20 30 40 50	//�Է�
// 20 30 40 50 10	//���

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void initArray(int arr[], int size)
{
	int i, k=0;
	for (i = 0; i <size; i++)
	{
		scanf("%d", &arr[i]);
	}
	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}

void turnArray(int arr1[], int arr2[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		arr2[i] = arr1[(i + 1) % size];
	}
	return;
}

int main(void)
{
	int arr1[5];
	int arr2[5];
	int i;
	int n;

	initArray(arr1, 5);
	turnArray(arr1, arr2, 5);
	printArray(arr2, 5);
}
*/


// 1���� �迭 rotate
// 5���� ���ڸ� �Է¹޾� �迭�� �ְ�
// n�� �Է¹�����
// 5���� ���ڸ� ���������� �ϳ��� ������ ����ϴ� ���� n�� �ݺ��Ѵ�.
// ���� ����
// 10 20 30 40 50	//�Է� (5���� ���� �Է�)
// 2		//�Է� : �ݺ��� Ƚ���� 2
// 50 10 20 30 40	//��� : 1ȸ��
// 40 50 10 20 30	//��� : 2ȸ��

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void initArray(int arr[], int size)
{
	int i, k = 0;
	for (i = 0; i <size; i++)
	{
		scanf("%d", &arr[i]);
	}
	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}
*/

// (���ڿ�)�н�����üũ
// �н����忡 ���� �������� üũ�ϱ����� �ϳ��� ����� ������ ����.
// �н����尡 �־������� �� ���ڿ� ���ؼ�
// �� ���ڸ� �����ؼ� ���ӵ� ���ڵ��� �� �� ������ �������� ���� �ʴ� ����̴�.
// abc, cde, xyz, 123, 567�� ���⿡ �ش�ȴ�.
// acdeb�� ���
// cde�� c�� �������� d, e�� ���ӵ� ���ڰ� ��Ÿ����.
// acd, dea, eb, b�� ���ӵ� ���ڵ��� �ƴϴ�.
// 
// ���ڿ��� �־��� �н����忡 ���ؼ�
// ���ӵ� ������ ���ڵ��� ��Ÿ���� ù �κ��� 1�� ��Ÿ����
// ������ ���ںκ��� 0���� ��� �ϴ� �����̴�.
// 
// ��, �н����� acdeb�� ���ؼ�
// 01000�� ����ϴ� ���α׷��� �ۼ��϶�.
// 
// ���� ����
// abc123	//�Է�
// 100100	//���
// 
// acdeb	//�Է�
// 01000	//���
// 
// aaaabc
// 000100
// 
// 1234444
// 1100000


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_word_in_word(char w1[], int start);
int is_word_in_word(char w1[], int start)
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
		printf("%d", is_word_in_word(passwd, i));
	printf("\n");
	return 0;
}

