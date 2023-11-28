// 20201012 컴퓨터학과 임소정
// HW 13_1
#define _CRT_SECURE_NO_WARNINGS
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

	printf("\n이름\t중간\t학기말\t평균\n");
	for(i = 0; i < cp.num; i++)
		printStudent(&cp.s[i]);
}