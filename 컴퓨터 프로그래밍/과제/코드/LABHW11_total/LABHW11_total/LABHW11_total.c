// HW 11_1_3 (����õ)
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[10];
	int midterm;
	int final;
	int average;
	char grade;
};

main(void)
{
	struct student s[3];
	struct student* sp = s;
	int i;
	int total1 = 0, total2 = 0;
	int average1, average2;
	for (i = 0; i < 3; i++)
	{
		printf("Enter student name: ");
		scanf("%s", sp->name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &sp->midterm, &sp->final);
		(*sp).average = ((*sp).midterm + (*sp).final) / 2;

		if ((*sp).average >= 80)
			(*sp).grade = 'A';
		else if ((*sp).average >= 50)
			(*sp).grade = 'B';
		else
			(*sp).grade = 'F';

		total1 += (*sp).midterm;
		total2 += (*sp).final;
		sp++;
	}
	sp = s;
	printf("\n�̸�\t�߰�\t�б⸻\t���\t����\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final, (*sp).average);
		sp++;
	}
	sp = s;
	printf("\n�̸�\t����\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s\t%c\n", (*sp).name, (*sp).grade);
		sp++;
	}
	average1 = total1 / 3;
	average2 = total2 / 3;
	printf("\n�߰������ ��� = %d\n", average1);
	printf("�⸻����� ��� = %d\n", average2);
}
*/

// HW 11_1_4
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
};

int main(void)
{
	struct student s[3];
	struct student* sp = s;
	int i;
	int midtermSum = 0;
	int finalSum = 0;

	// ��)
	for (i = 0; i < 3; i++)
	{
		printf("Enter student name: ");
		scanf("%s", (sp)->name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &sp->midterm, &sp->final);

		sp++;
	}
	sp = s;

	for (i = 0; i < 3; i++)
	{
		sp->average = (sp->midterm + sp->final) / 2;

		sp++;
	}
	sp = s;

	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);

		sp++;
	}
	sp = s;

	// ��)
	for (i = 0; i < 3; i++)
	{
		if (sp->average >= 80)
			sp->grade = 'A';
		else if (sp->average >= 50)
			sp->grade = 'B';
		else
			sp->grade = 'F';

		sp++;
	}
	sp = s;

	printf("\n�̸�\t����\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s\t%c\n", sp->name, sp->grade);

		sp++;
	}
	sp = s;

	// ��)
	for (i = 0; i < 3; i++)
	{
		midtermSum += sp->midterm;
		finalSum += sp->final;

		sp++;
	}
	sp = s;

	printf("\n�߰������ ��� = %d\n", midtermSum / 3);
	printf("�⸻����� ��� = %d\n", finalSum / 3);
}
*/


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

// LAB 10_0_2
// LAB10_0_0 �� ���α׷��� 
// �Ʒ��� ���� student Ÿ���� ������ ���� �����͸� �����ϰ�,
// �� �����͸� �̿��Ͽ� ��)�� ���� ���� �ϵ��� ���α׷��� �����϶�.
// (*�� .(dot)�����ڸ� ����϶�))
// struct student *sp = &aStudent;
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
	struct student* sp = &aStudent; // ������ ���� �� �ʱ�ȭ

	printf("Enter student name : ");
	scanf("%s", sp->name); // �����͸� ����Ͽ� ����ü ����� ����

	printf("Enter midterm and final score : ");
	scanf("%d %d", &sp->midterm, &sp->final); // �����͸� ����Ͽ� ����ü ����� ����

	printf("\n�̸�\t�߰�\t�б⸻\n");
	printf("%s\t%d\t%d\n", sp->name, sp->midterm, sp->final); // �����͸� ����Ͽ� ����ü ����� ����

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

// LAB 10_0_3
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
	struct student* sp = s; // ������ ���� �� �ʱ�ȭ
	int i;

	for (i = 0; i < 3; i++) {
		printf("Enter student name : ");
		scanf("%s", (sp + i)->name); // �����͸� ����Ͽ� ����ü ����� ����

		printf("Enter midterm and final score : ");
		scanf("%d %d", &(sp + i)->midterm, &(sp + i)->final); // �����͸� ����Ͽ� ����ü ����� ����
	}

	printf("\n�̸�\t�߰�\t�б⸻\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\n", (sp + i)->name, (sp + i)->midterm, (sp + i)->final); // �����͸� ����Ͽ� ����ü ����� ����
	}

	return 0;
}
*/

// LAB 10_1 (revisited)
// LAB 11_1_1
// LAB 11_1_1
// 1) �߰���缺��(midterm)�� �⸻��缺��(final)�� ����� ���� ����ü Ÿ�� Score�� �����ϰ�
// �߰���� ������ �б⸻��� ������ ����ϴ� printScore�Լ��� �����ϰ�
// �Ʒ��� main�Լ��� �����Ѵ�.
// 2) �� ������ �豳�Ͽ� ������ ����(�߰����� �б⸻��縦 ���� ������ ū)���� ��ȯ�ϴ�
// biggerScore�Լ��� �����ϰ� main �Լ��� �����Ѵ�.
// 3) �� ������ �߰���縦 ���� ��, �б⸻��縦 ���� ���� ����� ���� ����ü ������ ��ȯ�ϴ�
// totalScore�Լ��� �����ϰ� main �Լ��� �����Ѵ�.
// 4) �Ű������� �־��� �߰����� �б⸻����� ������ ���� ����ü ������ ��ȯ�ϴ�
// createScore�Լ��� �����ϰ� main �Լ��� �����Ѵ�.
// 
// ���࿹��
// 1)-----------------------------
// �߰���� ������ 50
// �б⸻��� ������ 100
// �߰���� ������ 70
// �б⸻��� ������ 70
// 2)-----------------------------
// �� �� ������ ���� ����:
// �߰���� ������ 50
// �б⸻��� ������ 100
// 3)-----------------------------
// �� ������ �� ��:
// �߰���� ������ 120
// �б⸻��� ������ 170
// 4)-----------------------------
// �߰���� ������ 99
// �б⸻��� ������ 99

// 1
/*
#include <stdio.h>
#include <stdlib.h>
// 1) typedef�� ����Ͽ� Score��� ���ο� Ÿ���� �����϶�.
typedef struct score Score;
struct score {
	int midterm;
	int final;
};

void printScore(Score s) //2)
{
	printf("�߰���� ������ %d\n", s.midterm);
	printf("�б⸻��� ������ %d\n", s.final);
}

Score biggerScore(Score s1, Score s2) //3)
{
	Score s;
	if (s1.midterm + s1.final > s2.midterm + s2.final)
		s = s1;
	else
		s = s2;
	return s;
}

Score totalScore(Score s1, Score s2) //4)
{
	Score s;
	s.midterm = s1.midterm + s2.midterm;
	s.final = s1.final + s2.final;
	return s;
}

Score createScore(int m, int f) //5)
{
	Score s;
	s.midterm = m;
	s.final = f;
	return s;
}

int main(void)
{
	Score s1, s2, s3;
	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;
	printf("1)-----------------------------\n");
	printScore(s1);
	printScore(s2);
	printf("2)-----------------------------\n");
	printf("�� �� ������ ���� ����:\n");
	printScore(biggerScore(s1, s2));
	printf("3)-----------------------------\n");
	printf("�� ������ �� ��:\n");
	printScore(totalScore(s1, s2));
	printf("4)-----------------------------\n");
	s3 = createScore(99, 99);
	printScore(s3);
}
*/

// 2
/*
#include <stdio.h>
#include <stdlib.h>

// 1) typedef���� ����ü Ÿ�� Score �����϶�.
typedef struct {
	int midterm;
	int final;
} Score;

// 2) �߰���� ������ �б⸻��� ������ ����ϴ� �Լ�
void printScore(Score s) {
	printf("�߰���� ������ %d\n", s.midterm);
	printf("�б⸻��� ������ %d\n", s.final);
}

// 3) �� ������ ���Ͽ� ������ ����(�� ū) ���� ��ȯ�ϴ� �Լ�
Score biggerScore(Score s1, Score s2) {
	return (s1.midterm + s1.final > s2.midterm + s2.final) ? s1 : s2;
}

// 4) �� ������ �߰���縦 ���� ��, �б⸻��縦 ���� ���� ���� ����ü ������ ��ȯ�ϴ� �Լ�
Score totalScore(Score s1, Score s2) {
	Score total;
	total.midterm = s1.midterm + s2.midterm;
	total.final = s1.final + s2.final;
	return total;
}

// 5) �Ű������� �־��� �߰����� �б⸻����� ������ ���� ����ü ������ ��ȯ�ϴ� �Լ�
Score createScore(int m, int f) {
	Score s;
	s.midterm = m;
	s.final = f;
	return s;
}

int main(void) {
	Score s1, s2, s3;
	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;

	printf("1)-----------------------------\n");
	printScore(s1);
	printScore(s2);

	printf("2)-----------------------------\n");
	printf("�� �� ������ ���� ����:\n");
	printScore(biggerScore(s1, s2));

	printf("3)-----------------------------\n");
	printf("�� ������ �� ��:\n");
	printScore(totalScore(s1, s2));

	printf("4)-----------------------------\n");
	s3 = createScore(99, 99);
	printScore(s3);

	return 0;
}
*/


// LAB 11_1_2
// (����ü �����͸� �Լ��� �Ű������� ����)
// ����ü�� ��� �� ũ�Ⱑ Ŭ ��, ������ ���翡 ����� ���� �� �� �����Ƿ�,
// �Ű����� ���޽� �����͸� ����ϴ� ���� ����.
// ���� LAB 11_1_1���� �Լ��� �Ű������� ���� ����ü ������
// ��� ����ü �����ͷ� �ٲپ� ���α׷��� �����϶�.
// ����Ǵ� �Լ��� ������ �Ʒ��� ����.
// createScore�Լ��� ������� �ʴ´�.
// void printScore(Score *p){...}	// �Ű����� ����
// Score *biggerScore(Score *p1, Score *p2){...}	// ��ȯŸ�� ����, �Ű����� ����
// void totalScore(Score *p1, Score *p2, Score *tp){...}	// ��ȯŸ�� ����, �Ű����� �Ѱ� �߰�
// Score createScore(int m, int f){...}	// ���� ����
/*
#include <stdio.h>
#include <stdlib.h>
// 1) typedef�� ����Ͽ� Score��� ���ο� Ÿ���� �����϶�.
typedef struct score Score;
struct score {
	int midterm;
	int final;
};

void printScore(Score *p) //2)
{
	printf("�߰���� ������ %d\n", p->midterm);
	printf("�б⸻��� ������ %d\n", p->final);
}

Score *biggerScore(Score *p1, Score *p2) //3)
{
	Score *s;
	if (p1->midterm + p1->final > p2->midterm + p2->final)
		s = p1;
	else
		s = p2;
	return s;
}

void totalScore(Score *p1, Score *p2, Score *tp) //4)
{
	tp->midterm = p1->midterm + p2->midterm;
	tp->final = p1->final + p2->final;
}

Score createScore(int m, int f) //5)
{
	Score s;
	s.midterm = m;
	s.final = f;
	return s;
}

int main(void)
{
	Score s1, s2, temp;
	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;

	printf("1)-----------------------------\n");
	printScore(&s1);
	printScore(&s2);

	printf("2)-----------------------------\n");
	printf("�� �� ������ ���� ����:\n");
	printScore(biggerScore(&s1, &s2));

	printf("3)-----------------------------\n");
	printf("�� ������ �� ��:\n");
	totalScore(&s1, &s2, &temp);
	printScore(&temp);

	printf("4)-----------------------------\n");
	temp = createScore(99, 99);
	printScore(&temp);
}
*/

// LAB 11_2
// �Ʒ��� ���� student ����ü�� �����ϰ�
// typedef�� �̿��Ͽ� Student��� ���ο� Ÿ���� �����϶�.
// 
// ���࿹��
// Enter a number of student : 3
// Enter student name : ������
// Enter midterm and final score : 100 50
// Enter student name : �嵿��
// Enter midterm and final score : 50 50
// Enter student name : ��ҿ�
// Enter midterm and final score : 60 70
//
// �̸�		�߰�    �⸻    ���
// ������	100		50		75
// �嵿��	50		50		50
// ��ҿ�	60		70		65

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};
// typedef �� ����Ͽ� Student �� ����
typedef struct student Student;

void printStudent(Student aStudent)
{
	printf("%s\t", aStudent.name);
	printf("%d\t%d\t%d\n", aStudent.midterm, aStudent.final, aStudent.average);
}
int main(void)
{
	Student s[40];
	int num, i;
	printf("Enter a number of student:");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("Enter student name: "); //a)
		scanf("%s", s[i].name); //b)
		printf("Enter midterm and final score: "); //c)
		scanf("%d %d", &s[i].midterm, &s[i].final); //d)
	}
	for (i = 0; i < num; i++)
		s[i].average = (s[i].midterm + s[i].final); // e)
		printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for (i = 0; i < num; i++)
		printStudent(s[i]);
}
*/

// LAB 11_2_0
// (����ü �����͸� �Ű�������)
// ���� printStudent�Լ��� ����ü������ �Ű������� �޾Ҵ�.
// �̸� ����ؼ�, ����ü�����͸� �Ű������� �ϵ��� printStudent�Լ��� �����϶�.
// ���� main�Լ��� �����϶�.
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};
// typedef �� ����Ͽ� Student �� ����
typedef struct student Student;

void printStudent(Student *aStudent)
{
	printf("%s\t", aStudent->name);
	printf("%d\t%d\t%d\n", aStudent->midterm, aStudent->final, aStudent->average);
}
int main(void)
{
	Student s[40];
	int num, i;
	printf("Enter a number of student:");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("Enter student name: "); //a)
		scanf("%s", s[i].name); //b)
		printf("Enter midterm and final score: "); //c)
		scanf("%d %d", &s[i].midterm, &s[i].final); //d)
	}
	for (i = 0; i < num; i++)
		s[i].average = (s[i].midterm + s[i].final)/2; // e)
		printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for (i = 0; i < num; i++)
		printStudent(&s[i]);
}
*/

// LAB 11_2_1
// �Ʒ��� ���ô�� ���α׷��� �����϶�.
// �Լ��� �Ű������� ����ü �����͸� ����϶�.
// ���� LAB 11_2_0���� a)b)c)d)�� �� ������ �Ʒ��� �Լ� ȣ��� ��ġ�ϰ�,
// �� �Լ��� ���Ǹ� �߰��϶�.
// readStudentScore(...)
// e)�κ��� �Ʒ��� �Լ� ȣ��� ��ġ�ϰ�, �� �Լ��� ���Ǹ� �߰��϶�.
// calculateStudentAverage(...)

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};
// typedef �� ����Ͽ� Student �� ����
typedef struct student Student;

void printStudent(Student *aStudent)
{
	printf("%s\t", aStudent->name);
	printf("%d\t%d\t%d\n", aStudent->midterm, aStudent->final, aStudent->average);
}
void readStudentScore(Student *aStudent)
{
	printf("Enter student name: "); //a)
	scanf("%s", aStudent->name); //b)
	printf("Enter midterm and final score: "); //c)
	scanf("%d %d", &aStudent->midterm, &aStudent->final); //d)
}
void calculateStudentAverage(Student *aStudent)
{
	aStudent->average = (aStudent->midterm + aStudent->final)/2;
}

int main(void)
{
	Student s[40];
	int num, i;
	printf("Enter a number of student:");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		readStudentScore(&s[i]);
	}
	for (i = 0; i < num; i++)
		calculateStudentAverage(&s[i]);
	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for (i = 0; i < num; i++)
		printStudent(&s[i]);
}
*/

// HW10_1
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

// HW 11_1
// (����ü ������)
// �Ʒ��� ���� ����ü ������ sp�� ����Ͽ�
// HW10_1�� ���α׷��� �ٽ� �ۼ��϶�.
// struct student s[3];
// struct student *sp = s;
// ���⼭�� s[..]�� ǥ���� ������� �ʰ�,
// sp�� -> �����ڸ� ����϶�.
// �׷��� sp = s;�� ��� ����� ���� �ִ�.

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
	struct student* sp = s;
	int i;
	int sum_mid = 0;
	int sum_fin = 0;

	for (i = 0; i < 3; i++) {
		printf("Enter student name : ");
		scanf("%s", sp->name);
		printf("Enter midterm and final score : ");
		scanf("%d %d", &sp->midterm, &sp->final);
		sp->average = (sp->midterm + sp->final) / 2;
		sum_mid += sp->midterm;
		sum_fin += sp->final;
		sp++;
	}

	sp = s;
	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);
		sp++;
	}

	sp = s;
	printf("\n�̸�\t����\n");
	for (i = 0; i < 3; i++) {
		if (sp->average >= 80) {
			sp->grade = 'A';
		}
		else if (sp->average >= 50) {
			sp->grade = 'B';
		}
		else {
			sp->grade = 'F';
		}
		printf("%s\t%c\n", sp->name, sp->grade);
		sp++;
	}

	printf("\n�߰������ ��� = %d\n", sum_mid / 3);
	printf("�б⸻����� ��� = %d\n", sum_fin / 3);

	return 0;
}
*/

// HW 13_1
/*
#define _CRT_SECURE_NO_WARNINGS
// #pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
typedef struct
{
	char name[40];
	int midterm;
	int final;
	int average;
}Student;

typedef struct
{
	int num;
	Student s[40];
}cClass;

void printStudent(Student* sp)
{
	printf("%s\t", sp->name);
	printf("%d\t%d\t%d\n", sp->midterm, sp->final, sp->average);
}

void readStudentScore(Student* sp)
{
	printf("Enter student name: ");
	scanf("%s", sp->name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &sp->midterm, &sp->final);
}

void calculateStudentAverage(Student* sp)
{
	sp->average = (sp->midterm + sp->final) / 2;
}

int main(void)
{
	cClass cp;
	int i;
	Student all = { "Total", 0, 0, 0 };
	printf("Enter a number of students: ");
	scanf("%d", &cp.num);

	// a)
	for (i = 0; i < cp.num; i++)
		readStudentScore(&cp.s[i]);
	// b)
	for (i = 0; i < cp.num; i++)
		calculateStudentAverage(&cp.s[i]);

	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for(i = 0; i < cp.num; i++)
		printStudent(&cp.s[i]);
}
*/

// HW 11_2
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int i;
typedef struct
{
	char name[40];
	int midterm;
	int final;
	int average;
}Student;

typedef struct
{
	int num;
	Student s[40];
}cClass;

void printClass(cClass* sp)
{
	for (i = 0; i < sp->num; i++)
	{
		printf("%s\t", sp->s[i].name);
		printf("%d\t%d\t%d\n", sp->s[i].midterm, sp->s[i].final, sp->s[i].average);
	}
}

void readClass(cClass* sp)
{
	for (i = 0; i < sp ->num; i++)
	{
		printf("Enter student name: ");
		scanf("%s", sp->s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &sp->s[i].midterm, &sp->s[i].final);
	}
}

void calculateClassAverage(cClass* sp)
{
	for (i = 0; i < sp->num; i++)
		sp->s[i].average = (sp->s[i].midterm + sp->s[i].final) / 2;
}

int main(void)
{
	cClass cp;
	Student all = { "Total", 0, 0, 0 };

	printf("Enter a number of students: ");
	scanf("%d", &cp.num);

	readClass(&cp);					// �� �ڵ��� a)�κ� ��ġ
	
	calculateClassAverage(&cp);		// �� �ڵ��� b)�κ� ��ġ

	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	printClass(&cp);
}
*/

// Challenge 11_1
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct Student
{
	char name[20];
	int midterm;
	int final;
	int average;
}Student;

typedef struct cClass
{
	int num;
	Student s[40];
}cClass;

typedef struct cClass CClass;

void readClass(CClass *cp)
{
	int i;
	for (i = 0; i < cp->num; i++)
	{
		printf("Enter student name: ");
		scanf("%s", cp->s[i].name);
		printf("Enter a midterm and final score: ");
		scanf("%d %d", &cp->s[i].midterm, &cp->s[i].final);
	}
}

void printClass(CClass *cp)
{
	int i;
	for (i = 0; i < cp->num; i++)
	{
		printf("%s\t", cp->s[i].name);
		printf("%d\t%d\t%d\n", cp->s[i].midterm, cp->s[i].final, cp->s[i].average);
	}
}

void calculateClassAverage(CClass *cp)
{
	int i;
	for (i = 0; i < cp->num; i++)
		cp->s[i].average = (cp->s[i].midterm + cp->s[i].final) / 2;
}

void calculateAll(CClass *cp, Student *pAll)
{
	int i;
	for (i = 0; i < cp->num; i++)
	{
		pAll->final += cp->s[i].final;
		pAll->midterm += cp->s[i].midterm;
		pAll->average += cp->s[i].average;
	}
	pAll->final = pAll->final / cp->num;
	pAll->midterm = pAll->midterm / cp->num;
	pAll->average = pAll->average / cp->num;
}

void printStudent(Student *sp)
{
	printf("%s\t", sp->name);
	printf("%d\t%d\t%d\n", sp->midterm, sp->final, sp->average);
}

int main(void)
{
	CClass c2;

	Student all = { "All", 0, 0, 0 };

	printf("Enter a number of students: ");
	scanf("%d", &c2.num);

	readClass(&c2);

	calculateClassAverage(&c2);

	printf("\n�̸�\t�߰�\t�⸻\t���\n");
	printClass(&c2);

	calculateAll(&c2, &all);

	printf("--------------------------------\n");
	printStudent(&all);
}
*/

// Project 3_1
// ���� ���� ���α׷�(����ü ���)
/*
#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 100
#define MAX_CUST 200		// max customer
#define MAX_CHAR 100		// ���ڿ��� max ����
#include <stdio.h>
#include <string.h>

typedef struct { // ��� ����: ���� �����ϰ� �ִ� Video ���� ����
	char title[MAX_CHAR];
	int qty; // ����
} VideoInfo;

typedef struct { // ���� ����: �����ذ� (�� id�� video id)���� ����
	int custId; // �� id : 1, 2, 3
	char title[MAX_CHAR]; // Video ����
} RentInfo;

void printAllVideo(VideoInfo videoList[], int videoCount)
{
	int i = 0;
	printf("Video����\t����\n");
	printf("------------------------\n");
	for (i = 0; i < videoCount; i++)
		printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
}

void purchaseVideo(VideoInfo videoList[], int* videoCountPtr, char* title[], int qty)
{
	strcpy(videoList[*videoCountPtr].title, title);
	videoList[*videoCountPtr].qty = qty;
	(*videoCountPtr)++;		// ���� ������ main�� �����ϱ� ���� ������ ���
}

int searchVideoByTitle(VideoInfo* videoList, int videoCount, char* title)
{
	int i = 0;
	for (i = 0; i < videoCount; i++)
	{
		if (strcmp(title, videoList[i].title) == 0)
			return i;
	}
	return -1;
}

void rentVideo(VideoInfo videoList[], int videoCount, RentInfo rentList[], int* rentCountPtr, char* title, int Id)
{
	int index = searchVideoByTitle(videoList, &videoCount, title);

	videoList[index].qty--;
	rentList[*rentCountPtr].custId = Id;
	strcpy(rentList->title, title);
	(*rentCountPtr)++;
	rentList++;
	rentList->custId = '\0';
}

void printAllRent(RentInfo rentList[], int rentCount)
{
	printf("��ID\tVideo����\n");
	printf("------------------------\n");
	for(int i = 0; i < rentCount; i++)
		printf("%d\t%s\n", rentList[i].custId, rentList[i].title);
}

int main(void)
{
	int videoCount = 5;
	VideoInfo videoList[MAX_VIDEO] = {
		{"BeforeSunrise", 1},
		{"BeforeSunset", 3},
		{"BeforeMidnight", 5},
		{"Casablanca", 7},
		{"EdgeOfTomorrow", 9}
	};

	int rentCount = 0;			// ���� ���� �Ǽ��� 0��
	RentInfo rentList[MAX_CUST];
	int choice;
	int indexSearched;
	char title[MAX_CHAR];
	int custId, qty;

	printf("1(All Video ���), 2(����), 3(�˻�), 4(�뿩), 5(All �뿩���� ���), 6(����) : ");
	scanf("%d", &choice);

	while (choice != 6)
	{
		switch (choice)
		{
		case 1: printAllVideo(videoList, videoCount); break;
		case 2:
			printf("Enter video ���� : ");
			scanf("%s", title);
			printf("Enter video ���� : ");
			scanf("%d", &qty);
			purchaseVideo(videoList, &videoCount, title, qty);
			break;
		case 3:
			printf("Enter video ���� : ");
			scanf("%s", title);
			if ((indexSearched = searchVideoByTitle(videoList, videoCount, title)) == -1)
				printf("�׷� ������ �����ϴ�.\n");
			else if (videoList[indexSearched].qty == 0)
				printf("�� �뿩���Դϴ�.\n");
			else
				printf("�뿩 �����մϴ�.\n"); break;
		case 4:
			printf("Enter video ���� :");
			scanf("%s", title);
			printf("Enter �� id : ");
			scanf("%d", &custId);
			rentVideo(videoList, videoCount, rentList, &rentCount, title, custId);
			break;
		case 5:
			printAllRent(rentList, rentCount); break;
		}
		printf("1(All Video ���), 2(����), 3(�˻�), 4(�뿩), 5(All �뿩���� ���), 6(����) : ");
		scanf("%d", &choice);
	}
}
*/