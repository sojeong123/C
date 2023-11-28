// 20201012 컴퓨터학과 임소정
// Challenge 11_1
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

	printf("\n이름\t중간\t기말\t평균\n");
	printClass(&c2);

	calculateAll(&c2, &all);

	printf("--------------------------------\n");
	printStudent(&all);
}