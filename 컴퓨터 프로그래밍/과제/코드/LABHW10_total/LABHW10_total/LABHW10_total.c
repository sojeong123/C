// LAB 10
// (����ü �⺻ ����)
// �Ʒ��� ���� ������Ҹ� ������ ����ü student �� �����϶�. (main�Լ� ����)
// char name[20];
// int midterm;
// int final;

// LAB 10_0_0
// (����ü ����)
// �� ����ü student Ÿ���� ���� aStudent�� �Ʒ��� ���� �����϶�.(main�Լ� �ȿ�)
// struct student aStudent;
// �׸��� �л��� �̸�, �߰����, �б⸻��縦 �Է¹޾�
// �̸� �״�� ����϶�.
// 
// ���� ����
// Enter student name : �ڼ���
// Enter midterm and final score : 100 90
// 
// �̸�		�߰�		�б⸻
// �ڼ���	100		90

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[20];
	int midterm;
	int final;
};

int main(void) {
	struct student aStudent;

	printf("Enter student name : ");
	scanf("%s", aStudent.name);
	printf("Enter midterm and final score : ");
	scanf("%d %d", &aStudent.midterm, &aStudent.final);

	printf("\n�̸�\t�߰�\t�б⸻\n");
	printf("%s\t%d\t%d\n", aStudent.name, aStudent.midterm, aStudent.final);

	return 0;
}
*/

// LAB 10_0_1
// (����ü �迭)
// �� ����ü student Ÿ���� �迭 s(ũ�� 3)�� �����ϰ�,
// struct student s[3];
// �б⸻��縦 �Է� �޾� �̸� �״�� ����ϴ� ���α׷��� �ۼ��϶�.
// 
// ���� ����
// Enter student name : ������
// Enter midterm and final score : 50 60
// Enter student name : �嵿��
// Enter midterm and final score : 60 70
// Enter student name : ��ҿ�
// Enter midterm and final score : 70 80
// 
// �̸�		�߰�		�б⸻
// ������	50		60
// �嵿��	60		70
// ��ҿ�	70		80

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[20];
	int midterm;
	int final;
};

int main(void) {
	struct student s[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("Enter student name : ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score : ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
	}

	printf("\n�̸�\t�߰�\t�б⸻\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final);
	}

	return 0;
}
*/

// LAB 10_1
// (����ü, ����ü ����, ����ü �迭, ����ü ������)
// (1)
// (����ü)
// �Ʒ��� ���� ����� ������ ����ü customer�� �Ʒ��� ���� �����ߴ�.
// �̶� ����ü �ϳ��� �����ϴ� �޸� ũ���
// �� ������� ����ü ������ ��� ��ġ�ϴ���
// ����� �׷� ���ÿ�.
// struct customer {
//		char name[40];
//		int age;
//	};
// 
// (2)
// (����ü ����)
// �տ��� ������ ����ü customer Ÿ���� ���� aCustomer�� 
// ���ڼ��񡱿� 36�� ������ �ʱ�(������ ��)�� �� ����غ��ÿ�.
// (������ ���� �� �ʱ�ȭ �ڵ�� main() �Լ� �ȿ� ��ġ�ϵ��� �Ͻÿ�.)
// 
// (3)
// (����ü �迭)
// ����ü customer Ÿ���� �迭 cArray�� ������ ���ÿ�.
// ���� �嵿��(38��) ��ҿ�(38)�� ���´�.
// �� �� cArray�� 2���� ������Ʈ�� ������,
// i) cArray�� �ʱ�ȭ (����� ���ÿ� �ʱ�ȭ)
// ii) �Ʒ��� �ڵ带 ����Ͽ� ����Ͻÿ�.
// for (i = 0; i < 2; i++)
//	printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);

/*
struct student {
	char name[20];
	int midterm;
	double final;
	int average;
	char grade;
};

int main(void)
{
	struct student aStudent;
	printf("����ü �ϳ��� �����ϴ� �޸� ũ�� : %d\n", sizeof(struct student));
}
*/

/*
// ���� ���
(��)
struct customer aCustomer = {"�ڼ���", 36 };

(��)
struct customer cArray[2] = { {"�嵿��", 38}, {"��ҿ�", 38} };

(��)
for (i = 0; i < 2; i++)
	printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);
*/

/*
struct customer {
	char name[40];
	int age;
};

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	// ���� ���� �κ�
	struct customer aCustomer;
	struct customer cArray[2];
	int i;

	// �ڵ� �κ�
	// (1)
	printf("����ü �ϳ��� �����ϴ� �޸� ũ�� : %d\n", sizeof(struct customer));
	printf("name�� ��ġ : %d\n", &aCustomer.name);
	printf("age�� ��ġ : %d\n", &aCustomer.age);

	// (2)
	strcpy(aCustomer.name, "�ڼ���");
	aCustomer.age = 36;
	printf("name : %s\n", aCustomer.name);
	printf("age : %d\n", aCustomer.age);

	// (3)
	strcpy(cArray[0].name, "�嵿��");
	cArray[0].age = 38;
	strcpy(cArray[1].name, "��ҿ�");
	cArray[1].age = 38;
	for (i = 0; i < 2; i++)
		printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);

	return 0;
}
*/

// HW 10_1
// (����ü ����, ����ü �迭)
// �Ʒ��� ���� ������Ҹ� ������ ����ü student�� �����ϰ�,
// char name[20];
// int midterm;
// int final;
// int average;
// char grade
// �� ����ü student Ÿ���� �迭 s(ũ�� 3)�� �Ʒ��� ���� �����϶�.
// struct student s[3];
// 
// �Ʒ��� ������ó��
// (1)
// 3���� �л��� �̸�, �߰����, �б⸻��縦 �Է¹޾� 
// ��� �ʵ��� name, midterm, final�� �ְ�,
// 3�� �л��� ����� ���((�߰���� + �б⸻���)/2)�Ͽ� average�� ���� ��
// 3���� �л��� ������ ���
// (2)
// 3�� �л��� ������ ���(80�� �̻��̸� A, 50�� �̻��̸� B, 50�� �����̸� F)�Ͽ�
// ��� �ʵ��� grade�� �ְ� �̸� ����Ѵ�.
// (3)
// 3���� �л��� �߰���� ��հ� �б⸻��� ����� ����Ͽ� ����Ѵ�.
// (1)(2)(3)�� ���ʷ� �õ��϶�.
// 
// ���� ����
// Enter student name : �ڼ���
// Enter midterm and final score : 10 20
// Enter student name : �嵿��
// Enter midterm and final score : 100 90
// Enter student name : ��ҿ�
// Enter midterm and final score : 90 40
// �̸�		�߰�		�б⸻	���
// �ڼ���	10		20		15
// �嵿��	100		90		95
// ��ҿ�	90		40		65
// 
// �̸�		����
// �ڼ���		F
// �嵿��		A
// ��ҿ�		B
// 
// �߰������ ��� = 66
// �б⸻����� ��� = 50

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
};

int main(void) {
	struct student s[3];
	int i;
	int sum_mid = 0;
	int sum_fin = 0;

	for (i = 0; i < 3; i++) {
		printf("Enter student name : ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score : ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
		s[i].average = (s[i].midterm + s[i].final) / 2;
		sum_mid += s[i].midterm;
		sum_fin += s[i].final;
	}

	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);
	}

	printf("\n�̸�\t����\n");
	for (i = 0; i < 3; i++) {
		if (s[i].average >= 80) {
			s[i].grade = 'A';
		}
		else if (s[i].average >= 50) {
			s[i].grade = 'B';
		}
		else {
			s[i].grade = 'F';
		}
		printf("%s\t%c\n", s[i].name, s[i].grade);
	}

	printf("\n�߰������ ��� = %d\n", sum_mid / 3);
	printf("�б⸻����� ��� = %d\n", sum_fin / 3);

	return 0;
}
*/

// Project 03
// ���� ���� ���α׷� (����ü �⺻)
// (����ü, ����ü �迭)
// 
// <���>
// 1. ���� Video���� ���
// : ������(videoList)�� �ִ� Video ������ ����Ѵ�.
// 
// 2. Video ����
// : ����, ������ �Է¹޾Ƽ�, ������	(videoList)�� �߰��Ѵ�.
// Video ����(videoCount)�� ������Ų��.
// 
// 3. title�� Video �˻�
// : ������ �Է¹޾Ƽ�,
// ������(videoList)���� �� Video�� ������, ���� �뿩������, �뿩 ���������� ����Ѵ�.
// (strcmp�� ����Ѵ�.)
// 
// 4. Video������ ����� ������ �����Ѵ�.
// 5. �Է��� ������ �ϱ� ����, ��ȭ������ ���鹮�ڸ� �������� �ʰ� ó���Ѵ�.
// 
// �ʱ⿡ �Ʒ��� ���� Video�� �����ϰ� �ִٰ� ����.
// ����				����
// BeforeSunrise	1
// BeforeSunset		3
// BeforeMidnight	5
// Casablanca		7
// EdgeOfTomorrow	9
// 
// ������ ���������� �߰� �ֹ��� ���� ������ �����ϰ�,
// ���ο� Video�� �߰� �ֹ��� ���� �����忡 �߰��Ѵ�.
// 
// string.h�� ����Ͽ� strcmp(videoList[i].title, searchkey)�� �ۼ��Ѵ�.
// 
// ���� ����
// 1(All Video ���), 2(����), 3(�˻�), 4(����): 1
// Video����			����
// -----------------------
// BeforeSunrise	1
// BeforeSunset		3
// BeforeMidnight	5
// Casablanca		7
// EdgeOfTomorrow	9
// 1(All Video ���), 2(����), 3(�˻�), 4(����): 2
// Enter video ���� : BeginAgain
// Enter video ���� : 10
// 1(All Video ���), 2(����), 3(�˻�), 4(����): 1
// Video����			����
// -----------------------
// BeforeSunrise	1
// BeforeSunset		3
// BeforeMidnight	5
// Casablanca		7
// EdgeOfTomorrow	9
// BeginAgain		10
// 1(All Video ���), 2(����), 3(�˻�), 4(����): 3
// Enter video ���� : BeforeSun
// �׷� ������ �����ϴ�.
// 1(All Video ���), 2(����), 3(�˻�), 4(����): 3
// Enter video ���� : BeforeSunrise
// �뿩 �����մϴ�.
// 1(All Video ���), 2(����), 3(�˻�), 4(����): 4

/*
#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 100
#define MAX_CHAR 100 // ���ڿ��� max ����

#include <stdio.h>
#include <string.h>

struct VideoInfo { // ��� ����: ���� �����ϰ� �ִ� Video ���� ����
	char title[MAX_CHAR];
	int qty; // ����
};

int main(void)
{
	int videoCount = 5;
	struct VideoInfo videoList[MAX_VIDEO] = {
		{"BeforeSunrise", 1},
		{"BeforeSunset", 3},
		{"BeforeMidnight", 5},
		{"Casablanca", 7},
		{"EdgeOfTomorrow", 9}
	};	// ���� ����ó�� �ʱ�ȭ

	char title[MAX_CHAR];
	int qty;
	int choice;
	int i;


	printf("1(All Video ���), 2(����), 3(�˻�), 4(����): ");
	scanf("%d", &choice);

	while (choice != 4) {
		switch (choice) {
		case 1:	//������ Video���� ���
			printf("Video����\t����\n");
			printf("-----------------------\n");
			for (i = 0; i < videoCount; i++)
				printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
			break;

		case 2:	// Video ����
			printf("Enter video ���� : ");
			scanf("%s", title);
			printf("Enter video ���� : ");
			scanf("%d", &qty);

			for (i = 0; i < videoCount; i++) {
				if (strcmp(videoList[i].title, title) == 0) {
					videoList[i].qty += qty;
					break;
				}
			}

			if (i == videoCount) {
				strcpy(videoList[videoCount].title, title);
				videoList[videoCount].qty = qty;
				videoCount++;
			}
			break;


		case 3:	// title�� Video �˻�
			printf("Enter video ���� : ");
			scanf("%s", title);

			for (i = 0; i < videoCount; i++) {
				if (strcmp(videoList[i].title, title) == 0) {
					if (videoList[i].qty > 0)
						printf("�뿩 �����մϴ�.\n");
					else
						printf("�뿩 ���Դϴ�.\n");
					break;
				}
			}

			if (i == videoCount)
				printf("�׷� ������ �����ϴ�.\n");

			break;

		}
		printf("1(All Video ���), 2(����), 3(�˻�), 4(����): ");
		scanf("%d", &choice);
	}
}
*/

// 10���� �����ڷ�
// HW(���� ����)
// ���� ���
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i, j;
	int sum;
	char player = b[r][c];

	// ���⿡ ��������� �Ǹ�, 1�� ��ȯ�ϴ� �ڵ带 ����
	int ri, ci;

	// ���� Ž�� (������ Ž���ϰ� ������ Ž��)
	sum = 1;
	ci = c - 1;
	ri = r;
	while (ci != -1 && b[ri][ci] == player)
	{
		sum++;
		ci--;
	}

	// ���⸦ �ϼ��Ͻÿ�.
	ci = c + 1;
	ri = r;
	while (ci != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ci--;
	}

	if(sum == 5)
		return 1;

	return 0;
}

void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;
	printf("    ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d ", i);
	printf("\n     -----------------------------\n");
	for (i = 0; i < BOARD_SIZE; i++)
	{
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c ", b[i][j]);
		printf("\n");
	}
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;		// �ٵϵ��� ���� ��ġ
	int i, j;
	int count;		// �ٵ��ǿ� ���� ���� ä��� ���� ����
	int lose;
	int win;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(�� ��): ", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ')
			continue;			//�̹� ���� ���� �ڸ�

		board[r][c] = turn;
		display(board);

		if (win = winCheck(board, r, c))
			printf("Player %c wins!\n", turn);
		turn = (turn == 'X') ? 'O' : 'X';
		count++;
	} while (!win && count <= BOARD_SIZE * BOARD_SIZE);

	if (!win && count == BOARD_SIZE * BOARD_SIZE)
		printf("Nobody win!\n");
}
*/

// HW(����)
// ���� ������ ���� ���α׷��� ��������.
// ������� ��������, �밢������, ���밢�������� �߰��϶�.

// ���� �ڵ�
/*
	// ���밢�� Ž�� (������ ���� Ž���ϰ� ���� �Ʒ� Ž��)
	sum = 1;
	ci = c + 1;
	ri = r - 1;
	while (ci != BOARD_SIZE && ri != -1 && b[ri][ci] == player)
	{
		sum++;
		ci++;
		ri--;
	}

	// ���⸦ �ϼ��Ͻÿ�.
	ci = c - 1;
	ri = r + 1;
	while (ci != -1 && ri != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ci++;
		ri--;
	}

	if (sum == 5)
		return 1;
*/

// ���� �ڵ�
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i, j;
	int sum;
	char player = b[r][c];

	// ���⿡ ��������� �Ǹ�, 1�� ��ȯ�ϴ� �ڵ带 ����
	int ri, ci;

	// ���� Ž�� (������ Ž���ϰ� ������ Ž��)
	sum = 1;
	ci = c - 1;
	ri = r;
	while (ci != -1 && b[ri][ci] == player)
	{
		sum++;
		ci--;
	}

	// ���⸦ �ϼ��Ͻÿ�.
	ci = c + 1;
	ri = r;
	while (ci != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ci--;
	}

	if (sum == 5)
		return 1;

	// ���� Ž�� (������ Ž���ϰ� �Ʒ��� Ž��)
	sum = 1;
	ci = c;
	ri = r - 1;
	while (ri != -1 && b[ri][ci] == player)
	{
		sum++;
		ri--;
	}

	// ���⸦ �ϼ��Ͻÿ�.
	ci = c;
	ri = r + 1;
	while (ri != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ri--;
	}

	if (sum == 5)
		return 1;

	// �밢�� Ž�� (���� ���� Ž���ϰ� ������ �Ʒ� Ž��)
	sum = 1;
	ci = c - 1;
	ri = r - 1;
	while (ci != -1 && ri != -1 && b[ri][ci] == player)
	{
		sum++;
		ci--;
		ri--;
	}

	// ���⸦ �ϼ��Ͻÿ�.
	ci = c + 1;
	ri = r + 1;
	while (ci != BOARD_SIZE && ri != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ci--;
		ri--;
	}

	if (sum == 5)
		return 1;

	// ���밢�� Ž�� (������ ���� Ž���ϰ� ���� �Ʒ� Ž��)
	sum = 1;
	ci = c - 1;
	ri = r + 1;
	while (ci != -1 && ri != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ci--;
		ri++;
	}

	// ������ �� Ž��
	ci = c + 1;
	ri = r - 1;
	while (ci != BOARD_SIZE && ri != -1 && b[ri][ci] == player)
	{
		sum++;
		ci++;
		ri--;
	}

	if (sum == 5)
		return 1;

	return 0;
}

void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;
	printf("    ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d ", i);
	printf("\n     -----------------------------\n");
	for (i = 0; i < BOARD_SIZE; i++)
	{
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c ", b[i][j]);
		printf("\n");
	}
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;		// �ٵϵ��� ���� ��ġ
	int i, j;
	int count;		// �ٵ��ǿ� ���� ���� ä��� ���� ����
	int lose;
	int win;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(�� ��): ", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ')
			continue;			//�̹� ���� ���� �ڸ�

		board[r][c] = turn;
		display(board);

		if (win = winCheck(board, r, c))
			printf("Player %c wins!\n", turn);
		turn = (turn == 'X') ? 'O' : 'X';
		count++;
	} while (!win && count <= BOARD_SIZE * BOARD_SIZE);

	if (!win && count == BOARD_SIZE * BOARD_SIZE)
		printf("Nobody win!\n");
}
*/
