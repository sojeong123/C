// �������ڴ��б� ��ǻ���а� 20201012 �Ӽ���
// ��ǻ�����α׷��� (01)

// 1��
/* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int n)
{
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

// 2��
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int processEven(int* p, int size)
{
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

// 3��
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

// 4��
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

// 5��
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int maxIncreasing(char s[])
{
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

// 6�� (Bonus ������)
/*

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
	/*
int i, j, k, max = 0, count = 0, start = 0, end = 0;
	for (i = 0; i < strlen(s); i++) {
		for (j = i; j < strlen(s); j++) {
			if (s[j] >= s[j + 1]) {
				count = j - i + 1;
				if (max < count) {
					max = count;
					start = i;
					end = j;
				}
				break;
			}
		}
	}
	for (k = start; k <= end; k++) {
		printf("%c", s[k]);
	}
	printf("\n");
	return max;
	*/

	// strlen�� ������� ����.
	/*
	int i, j, k, max = 0, count = 0, start = 0, end = 0;

	for (i = 0; s[i] != '\0'; i++) {
		for (j = i; s[j] != '\0'; j++) {
			if (s[j] >= s[j + 1]) {
				count = j - i + 1;
				if (max < count) {
					max = count;
					start = i;
					end = j;
				}
				break;
			}
		}
	}
	for (k = start; k <= end; k++) {
		printf("%c", s[k]);
	}
	printf("\n");
	return max;
	*/

int i, j, k, max = 0, count = 0, start = 0, end = 0;

	for (i = 0; s[i] != '\0'; i++) {
		for (j = i; s[j] != '\0'; j++) {
			if (s[j] >= s[j + 1]) {
				count = j - i + 1;
				if (max < count) {
					max = count;
					start = i;
					end = j;
				}
				break;
			}
		}
	}
	for (k = start; k <= end; k++) {
		printf("%c", s[k]);
	}
	printf("\n");
	return max;
}

int main(void)
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", maxIncreasing2(s));
})