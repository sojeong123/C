// 20201012 ��ǻ���а� �Ӽ���
// LAB 10_0_2
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
	struct student* sp = &aStudent; 

	printf("Enter student name : ");
	scanf("%s", sp->name); 

	printf("Enter midterm and final score : ");
	scanf("%d %d", &sp->midterm, &sp->final);

	printf("\n�̸�\t�߰�\t�б⸻\n");
	printf("%s\t%d\t%d\n", sp->name, sp->midterm, sp->final); 

	return 0;
}