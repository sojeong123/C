// ���α׷��ӽ� ����

// <5�� ����>
// ������2019�б⸻
// (2���� �迭 �ð���� rotate)
// ���� ������ ���� ������ 5�� 2���� �迭�� ���ҵ��� �Է¹޾�
// �ð�������� 90�� ȸ���Ͽ� ����Ϸ��Ѵ�.
// �Լ� rotate2dimArray�� �ϼ����� �Ʒ��� ���� ��µǰ� �϶�.
//
// ���࿹:
// �Է�)
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25
// ���)
// 21 16 11 6 1
// 22 17 12 7 2
// 23 18 13 8 3
// 24 19 14 9 4
// 25 20 15 10 5

/*
#include <stdio.h>
// a�� 90�� �ð�������� ȸ���Ͽ� b�� �ִ´�
void rotate2dimArray(int a[][5], int b[][5], int size)
{
	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++)
			b[j][size - 1 - i] = a[i][j];
	}

	return;
}

int main(void)
{
	int A[5][5];
	int B[5][5];
	int n, key;
	int i, j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &A[i][j]);

	rotate2dimArray(A, B, 5);
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
}
*/

// ����ã��
// �Է�����Ʈ
// Input Grid :
// �� �����ϰ� ����������.

/*
#include<stdio.h>

#define X_VALUE 5 //2���� �迭�� ���� ��
#define Y_VALUE 5 //2���� �迭�� ���� ��

void readBombInfo(char grid[][Y_VALUE+1])
{
	int i;
	// grid �� ���� ���� �Է�
	//printf("Input Grid\n");
	for(i = 0 ; i < X_VALUE; i++ )
		scanf( "%s", grid[i] );
}
void countBomb(char grid[][Y_VALUE+1], int numOfBombs[][Y_VALUE])
{
	int i, j;

	for (i = 0; i < X_VALUE; i++)
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*') {
				// ���⿡ ������ ������ ���� numOfBombs�� �ִ� �ڵ� �ۼ�
if (i - 1 >= 0 && j - 1 >= 0)
					numOfBombs[i - 1][j - 1]++;
				if (i - 1 >= 0)
					numOfBombs[i - 1][j]++;
				if (i - 1 >= 0 && j + 1 < Y_VALUE)
					numOfBombs[i - 1][j + 1]++;
				if (j - 1 >= 0)
					numOfBombs[i][j - 1]++;
				if (j + 1 < Y_VALUE)
					numOfBombs[i][j + 1]++;
				if (i + 1 < X_VALUE && j - 1 >= 0)
					numOfBombs[i + 1][j - 1]++;
				if (i + 1 < X_VALUE)
					numOfBombs[i + 1][j]++;
				if (i + 1 < X_VALUE && j + 1 < Y_VALUE)
					numOfBombs[i + 1][j + 1]++;
			}
}
void display_numOfBombs(char grid[][Y_VALUE+1], int numOfBombs[][Y_VALUE])
{
	int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*')
				printf("*");
			else
				printf("%d", numOfBombs[i][j]);
		printf("\n");
	}
}

int main(void)
{
	char grid[X_VALUE][Y_VALUE+1]; //���ڿ��� ��� �������� NULL�� ���� �ϹǷ�
// 5X5 �迭�� �ƴ� 5X6 �迭�� �Ǿ�� �Ѵ�.
	int numOfBombs[X_VALUE][Y_VALUE] = {0}; //������ ������ �ִ� ������ 5X5 �迭

	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	display_numOfBombs(grid, numOfBombs);
}
*/

// <6�� ����>
// ������ HW6_2
// ���� ����
// abcd1e2f		//�Էµ� ���ڿ�
// 3			//��� : 1+2=3
// 
// abcd12e3		//�Էµ� ���ڿ�
// 6			//��� : 1+2+3=6

/*
#include <stdio.h>
int main(void)
{
	char word[81];
	int i;
	int total = 0;

	printf("Enter one word: ");
	scanf_s("%s", word);

	// �ڵ� �ۼ�

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '0' && word[i] <= '9')
		{
			total += word[i] - '0';
		}
	}

	printf("%d\n", total);

	return 0;
}
*/

// ������ Challenge6b
// (�ܾ�� ���Ӽ���)
// �Ű����� word���� ����(���� ���)���� ���� return�ϴ� �Լ��� solution�Լ��� �ۼ��϶�.

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
	char word[81];
	int total;

	scanf_s("%s", word);
	total = solution(word);
	printf("%d\n", total);
	
	return 0;
}

int solution(char* word)
{
	int i;
	int total = 0;
	int answer = 0;

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '0' && word[i] <= '9')
		{
			answer = answer * 10 + (word[i] - '0');
		}
		else
		{
			total += answer;
			answer = 0;
		}
	}
	total += answer;

	return total;
}
*/

// ������ 2018 �б⸻���
// (��Ʈ�� ����)
// ���ĺ���(��� �ҹ���)���� ���ĵǾ��ִ� ���ڿ� a�� ���ڿ� b��
// ���ĵǰ� merge�Ͽ� c�� �ִ� ���α׷��� �ۼ��϶�.
// ���ڿ� a�� ���ڿ� b�� ���̰� 19���Ϸ� ��������.
// 
// ���� ����
// ace bd		//�Է� : a�� b
// abcde		//��� : c
// 
// abc abc		//�Է� : a�� b
// aabbcc		//��� : c
// 
// abc xyz		//�Է� : a�� b
// abcxyz		//��� : c

/*
#include <stdio.h>
int main(void)
{
	char a[20], b[20], c[40];
	int i, j, k;

	scanf("%s %s", a, b);

	// �ڵ� �ۼ�

	for (i = 0, j = 0, k = 0; a[i] != '\0' && b[j] != '\0'; k++)
	{
		if (a[i] < b[j])
		{
			c[k] = a[i];
			i++;
		}
		else
		{
			c[k] = b[j];
			j++;
		}
	}
	while (a[i] != '\0')
	{
		c[k] = a[i];
		i++;
		k++;
	}
	while (b[j] != '\0')
	{
		c[k] = b[j];
		j++;
		k++;
	}
	c[k] = '\0';

	printf("%s\n", c);

	return 0;
}
*/