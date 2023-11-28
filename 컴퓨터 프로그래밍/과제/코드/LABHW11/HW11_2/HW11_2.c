// 20201012 ��ǻ���а� �Ӽ���
// HW 11_2
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