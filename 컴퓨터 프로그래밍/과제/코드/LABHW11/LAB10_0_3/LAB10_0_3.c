// 20201012 컴퓨터학과 임소정
// LAB 10_0_3
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
	struct student* sp = s; 
	int i;

	for (i = 0; i < 3; i++) {
		printf("Enter student name : ");
		scanf("%s", (sp + i)->name); 

		printf("Enter midterm and final score : ");
		scanf("%d %d", &(sp + i)->midterm, &(sp + i)->final); 
	}

	printf("\n이름\t중간\t학기말\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\n", (sp + i)->name, (sp + i)->midterm, (sp + i)->final); 
	}

	return 0;
}