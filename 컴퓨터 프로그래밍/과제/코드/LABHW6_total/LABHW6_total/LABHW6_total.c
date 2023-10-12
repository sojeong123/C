//20201012 ��ǻ���а� �Ӽ���

// LAB6_0 (���ڿ��� ����, ǥ�����, ���ڿ� ������)
// ���� ���� ���α׷��� ����� ������ ������.
// �׸��� ���α׷��� ������ �� �ڽ��� ���� ����� ���� ������
// 1)2)3)4)�� �� ���캸��.

/*
#include <stdio.h>
int main(void)
{
	int i;

	// 1) ���ڿ��� �����ϴ� �������� ������Դϴ�.
	char digits[] = "0123456789";
	char abc[] = { 'A', 'B', 'C', 'D', '\0' };
	char lan[5] = "java";

	// 2) ��� �����?
	printf("%s %s\n", digits, abc);		//%s�� ����Ѵ�.

	// 3) �Ʒ�ó�� lan ���ڿ������� 2���� ������� ����� �� �ִ�.
	//	  %c�� %s�� ���ӻ��� �ָ��϶�.
	printf("%s\n", lan);

	for (i = 0; lan[i] != '\0'; i++)	// A)���ڿ��� �������� Ȯ���ϴ� ����� �����غ���.
		printf("%c", lan[i]);

	// 4) digits[]�� �߰��� null character�� �����ϸ�
	digits[6] = '\0';
	printf("\n%s\n", digits);
	
	return 0;
}
*/

// LAB6_a_1
//�ϳ��� ���ڿ� ���� word�� �о�鿩�� (%s ���),
// �̸� ���(%s ���)�ϴ� ������ ���α׷��� �ۼ��϶�.
// word�� ���̴� �ִ� 10�̶� ��������.
// ��, char word[11]�̶� �����Ͽ� ����ϸ� �ȴ�.
// 
// ���� ����
// Enter a word(<= 10 chars) : Happy
// Happy

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char word[11];

	printf("Enter a word(<= 10 chars) : ");
	scanf("%s", word);
	printf("%s\n", word);

	return 0;
}
*/

// LAB6_a_2
// ���� ���α׷��� �����Ͽ� ����� ��, word���� ���ڸ� �ϳ��ϳ��� ����ϵ��� �϶�.
// ��, ���� ���ô� �״���̴�.
// (���� Lab6_0�� A�κ��� �����϶�.)

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char word[11];
	int i;

	printf("Enter a word(<= 10 chars) : ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		printf("%c", word[i]);
	printf("\n");

	return 0;
}
*/

/*
���� 5. 2���� �迭 �ð���� rotate(���̵� ��)

���� ������ ���� ������ 5�� 2���� �迭�� ���ҵ��� �Է¹޾�
�ð�������� 90�� ȸ���Ͽ� ����Ϸ��Ѵ�.

�Լ� rotate2dimArray�� �ϼ�����
�Ʒ��� ���� ��µǰ� �϶�.

���࿹:
�Է�)
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
���)
21 16 11 6 1
22 17 12 7 2
23 18 13 8 3
24 19 14 9 4
25 20 15 10 5
*/

/*
# define _CRT_SECURE_NO_WARNINGS
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

/*
����ã��

�Է�����Ʈ
Input Grid:
�� �����ϰ� ����������
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define X_VALUE 5 //2���� �迭�� ���� ��
#define Y_VALUE 5 //2���� �迭�� ���� ��

void readBombInfo(char grid[][Y_VALUE + 1])
{
	int i;
	// grid �� ���� ���� �Է�
	printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]);
}
void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;

	for (i = 0; i < X_VALUE; i++)
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*') {
				// ���⿡ ������ ������ ���� numOfBombs�� �ִ� �ڵ� �ۼ�
				//�ڵ��ۼ�
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


void display_numOfBombs(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
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
	char grid[X_VALUE][Y_VALUE + 1]; //���ڿ��� ��� �������� NULL�� ���� �ϹǷ� 
	// 5X5 �迭�� �ƴ� 5X6 �迭�� �Ǿ�� �Ѵ�.	
	int numOfBombs[X_VALUE][Y_VALUE] = { 0 }; //������ ������ �ִ� ������ 5X5 �迭

	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	display_numOfBombs(grid, numOfBombs);
}
*/