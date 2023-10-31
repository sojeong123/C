// 1
// cycleNB�� ������ ������.
// �־��� �Է� n�� 2�� ���ϸ鼭 100������ ���� �������� ����� �Ѵ�.
// �Է��� 9���,
// 9 18 36 72�� �츮�� ���ϴ� �������̴�.
// �� �������� �� ����(���⿡���� 4)�� ����ϴ� ���α׷��� �ۼ��϶�.
// 
// ���� ����
// 9			//�Է� : n
// 9 18 36 72	//��� : ���� 2�̰� 100 ������ ������
// 4			//��� : �������� ����
// 
// 50			//�Է� : n
// 50 100		//��� : ���� 2�̰� 100 ������ ������
// 2			//��� : �������� ����
// 
// ��� �Լ��� ����϶�.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int n)
{
	//�� �Լ��� ��������� �ۼ�
	if (n > 100)
		return 0;
	else
	{
		printf("%d ", n);
		return 1 + f(n * 2);
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("end\n%d\n", f(n));
}
*/


// ����ã��
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define X_VALUE 5
#define Y_VALUE 5

void readBombInfo(char grid[][Y_VALUE + 1])
{
	int i;

	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]);
}
void countBomb(char grid[][Y_VALUE + 1], int numOfBombs[][Y_VALUE])
{
	int i, j;

	for (i = 0; i < X_VALUE; i++)
		for (j = 0; j < Y_VALUE; j++)
			if (grid[i][j] == '*') {
				if (i - 1 >= 0) {
					numOfBombs[i - 1][j]++;
					if (j - 1 >= 0)
						numOfBombs[i - 1][j - 1]++;
					if (j + 1 < Y_VALUE)
						numOfBombs[i - 1][j + 1]++;
				}
				if (i + 1 < X_VALUE) {
					numOfBombs[i + 1][j]++;
					if (j - 1 >= 0)
						numOfBombs[i + 1][j - 1]++;
					if (j + 1 < Y_VALUE)
						numOfBombs[i + 1][j + 1]++;
				}
				if (j - 1 >= 0)
					numOfBombs[i][j - 1]++;
				if (j + 1 < Y_VALUE)
					numOfBombs[i][j + 1]++;
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
int main()
{
	char grid[X_VALUE][Y_VALUE + 1];
	int numOfBombs[X_VALUE][Y_VALUE] = { 0 };

	readBombInfo(grid);
	countBomb(grid, numOfBombs);
	display_numOfBombs(grid, numOfBombs);
}
*/


// ����ã�� ����(2���� �迭)
// ���� ����ã�⸦ ���� ������ ������.
// char�� 2�����迭�� grid���� 0 �Ǵ� 1(����)�� ���ڰ� �ԷµǾ� �ִ�.
// ������ �迭�� nB����
// nB[i][j]�� grid[i][j] �ֺ��� ������ ����
// ���� ���� 2���� ������2��, �� 4���� ���� 1���� ���� �����Ѵ�.
// - ����
// - ������ ����
// - ������
// - �������� ������
// 
// ���������� nB�迭�� ����Ѵ�.
// 
// ���� ���, ������ ���� ���ڰ� grid�迭�� �ԷµǾ�����,
// 10011
// 10110
// 00000
// 10001
// 00001
// 
// nB �迭�� ù���� �࿡��
// 02311
// �� ����ȴ�.
// 
// ��,
// nb[0][0] = grid[0][1] + grid[0][2] = 0
// nb[0][1] = grid[0][0] + grid[0][2] + grid[0][3] = 2
// nb[0][2] = grid[0][0] + grid[0][1] + grid[0][3] + grid[0][4] = 3
// nb[0][3] = grid[0][1] + grid[0][2] + grid[0][4] = 1
// nb[0][4] = grid[0][2] + grid[0][3] = 1
// 
// �迭 nB�� ���ҵ��� ����ϸ� ������ ����.
// 0 2 3 1 1
// 1 3 2 1 2
// 0 0 0 0 0
// 0 1 2 1 0
// 0 0 1 1 0
// 
// ���� ����
// 10011
// 10110
// 00000
// 10001
// 00001		//�Է� : ���� 5���� �Է��ؼ�, grid �迭�� �ִ´�.
// 0 2 3 1 1	//��� : nB�迭�� ù��° ��
// 1 3 2 1 2	//��� : nB�迭�� �ι�° ��
// 0 0 0 0 0	//��� : nB�迭�� ����° ��
// 0 1 2 1 0	//��� : nB�迭�� �׹�° ��
// 0 0 1 1 0	//��� : nB�迭�� �ټ���° ��

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define X_VALUE 5 // 2���� �迭�� ���� ��
#define Y_VALUE 5 // 2���� �迭�� ���� ��

void readGridInfo(char grid[][Y_VALUE + 1]) // �������� ����
{
	int i;
	// grid �� ���� ���� �Է�
	//printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]);
}

void countGrid(char grid[][Y_VALUE + 1], int nB[][Y_VALUE])
{
	// �ڵ� �ۼ�
int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++) {
			if (grid[i][j] == '1') {
				if (j - 2 >= 0) {
					nB[i][j - 2]++;
				}
				if (j - 1 >= 0) {
					nB[i][j - 1]++;
				}
				if (j + 1 < Y_VALUE) {
					nB[i][j + 1]++;
				}
				if (j + 2 < Y_VALUE) {
					nB[i][j + 2]++;
				}
			}
		}
	}


}

void display_nB(int nB[][Y_VALUE]) // �������� ����
{
	int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++)
			printf("%d ", nB[i][j]);
		printf("\n");
	}
}

int main(void) // �������� ����
{
	char grid[X_VALUE][Y_VALUE + 1]; // ���ڿ� ������ \0 �� ������ 5*6 �迭

	int nB[X_VALUE][Y_VALUE] = { 0 };

	readGridInfo(grid);
	countGrid(grid, nB);
	display_nB(nB);
}
*/


// ���ڿ�(increasing sequence 1)
// ���ڿ� abcdfó�� ���ĺ� ������ �̷���� ���� increasing sequence��� ����.
// ��, ���� ���ĺ��� ascii���� ���ų�, �� ū ���ĺ��� �ڿ� ������ sequence��.
// �̷� ���ǿ� ���ϸ�
// baf�� increasing sequence�� �ƴϴ�.
// 
// ���̰� 50�̸��� ���ڿ��� �о�鿩��,
// �� ���ڿ� �ȿ��� ���������� ��Ÿ����
// �ִ������ increasing sequence�� ã�� ���α׷��� �ۼ��϶�.
// ���ڿ��� �Ű������� �Ͽ� �� ���ڿ� �ȿ� �ִ� ������
// increasing sequence�� ã�Ƽ� �� ���̸� ��ȯ�ϴ� �Լ��� maxIncreasing�� �ۼ��϶�.
// 
// pabcabcdaaabcdcd�� ���
// p abc abcd aaabcd�� increasing sequence�� �Ǹ�,
// �� �� ���� �� ���� aaabcd�̴�.
// increasing sequence�� �ִ� ���̸� ����Ѵ�.
// 
// ���� ����
// pabcabcdaaabcdcd	//�Է� : ���ڿ�
// 6				//��� : increasing sequence�� �ִ� ����
// 
// orwyzabd			//�Է� : ���ڿ�
// 5				//��� : increasing sequence�� �ִ� ����

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing(char s[])
{
	// �ڵ� �ۼ�
	int i, j, k, max = 0, count = 0;
	for (i = 0; i < strlen(s); i++) {
		for (j = i; j < strlen(s); j++) {
			if (s[j] >= s[j + 1]) {
				count = j - i + 1;
				if (max < count) {
					max = count;
				}
				break;
			}
		}
	}
	return max;
}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing(s));
}
*/


// ���ڿ�(increasing sequence 2)
// ���� increasing sequenc 1������ �ִ� ���̸� ����Ͽ���.
// �ִ������ increasing sequence�� ����ϰ� �϶�.
// ���ڿ��� �Ű������� �Ͽ� �� ���ڿ� �ȿ� �ִ� ������
// increasing sequence�� ����ϰ� �� ���̸� ��ȯ�ϴ� �Լ��� maxIncreasing2�� �ۼ��϶�.
// 
// �ִ������ increasing sequence�� �������� ���,
// ���� ���� increasing sequence�� ����϶�.
// 
// ���� ����
// pabcabcdaaabcdcd	//�Է� : ���ڿ�
// aaabcd			//��� : �ִ� increasing sequence
// 6				//��� : �ִ�increasing sequence�� ����
// 
// vxyzoabde			//�Է� : ���ڿ�
// vxyz				//��� : vxyz�� abde�� ���� ���� ����Ѵ�.
// 4				//��� : �ִ�increasing sequence�� ����


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing2(char s[])
{
	// strlen, strcpy �� ���ڿ� �Լ��� ������� ���� �ۼ�����.
int i, j, k, max = 0, count = 0, start = 0, end = 0;


}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing2(s));
}


// ���ڿ� ��ġ��
// ũ�Ⱑ 20�̸��� 2���� ���ڿ�a, ���ڿ�b�� �Է¹޾�,
// �� ���ڿ��� ���� ��ġ�� ���Ͽ�, 
// ���ĺ� ������ ���� ���ڸ� ���ڿ�c�� ��������, ����ϴ� ���α׷��� �ۼ��϶�.
// �������� ���� ���ڿ����� ���ڵ��� ���� ���, ���� ���ڵ��� �״�� c�� �����Ѵ�.
// ���ڿ��� ��� �ҹ��ڷθ� �̷���� �ִ�.
// 
// ���� ����
// abcde		//�Է� : ù��° ���ڿ�
// xyz			//�Է� : �ι�° ���ڿ�
// abcde		//���
// 
// mnpq			//�Է� : ù��° ���ڿ�
// axbyccc		//�Է� : �ι�° ���ڿ�
// anbqccc		//���

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char a[20], b[20], c[20];
	int i, j, k = 0;
	scanf("%s", a);
	scanf("%s", b);
	for (i = 0; i < 20; i++) {
		if (a[i] == '\0' || b[i] == '\0') {
			break;
		}
		if (a[i] < b[i]) {
			c[k] = a[i];
			k++;
		}
		else if (a[i] > b[i]) {
			c[k] = b[i];
			k++;
		}
		else {
			c[k] = a[i];
			k++;
		}
	}
	if (a[i] == '\0') {
		for (j = i; j < 20; j++) {
			c[k] = b[j];
			k++;
		}
	}
	else if (b[i] == '\0') {
		for (j = i; j < 20; j++) {
			c[k] = a[j];
			k++;
		}
	}
	printf("%s", c);
}
*/


// ¦���� �� (������ �迭�� ������)
// �μ��� ���޹��� �迭 �߿��� ¦���� ����ϰ�
// �׵��� ���� ��ȯ�ϴ� �Լ��� processEven�� �ۼ��϶�.
// 
// ���� ����
// 5			//n�� �Է�
// 4 6 7 8 10	//n���� ������ �Է�
// 4 6 8        //��� : ¦���� ���
// 18			//�� ���
// 
// 4			//n�� �Է�
// 50 63 21 10	//n���� ������ �Է�
// 50 10		//��� : ¦���� ���
// 60			//�� ���

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int processEven(int* p, int size)
{
	// �����Ͱ� �̵��ϴ� ���, �� �������� ���� ��ȭ��Ű�� ������� �ۼ�����.
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		if (*(p + i) % 2 == 0) {
			printf("%d ", *(p + i));
			sum += *(p + i);
		}
	}
	return sum;
}

int main(void)
{
	int i;
	int n;
	int data[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &data[i]);
	printf("%d\n", processEven(data, n));
}
*/