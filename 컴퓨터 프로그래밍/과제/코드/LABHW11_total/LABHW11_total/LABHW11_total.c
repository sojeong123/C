// HW 11_1_3 (비추천)
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
	printf("\n이름\t중간\t학기말\t평균\t학점\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final, (*sp).average);
		sp++;
	}
	sp = s;
	printf("\n이름\t학점\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s\t%c\n", (*sp).name, (*sp).grade);
		sp++;
	}
	average1 = total1 / 3;
	average2 = total2 / 3;
	printf("\n중간고사의 평균 = %d\n", average1);
	printf("기말고사의 평균 = %d\n", average2);
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

	// 가)
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

	printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);

		sp++;
	}
	sp = s;

	// 나)
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

	printf("\n이름\t학점\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s\t%c\n", sp->name, sp->grade);

		sp++;
	}
	sp = s;

	// 다)
	for (i = 0; i < 3; i++)
	{
		midtermSum += sp->midterm;
		finalSum += sp->final;

		sp++;
	}
	sp = s;

	printf("\n중간고사의 평균 = %d\n", midtermSum / 3);
	printf("기말고사의 평균 = %d\n", finalSum / 3);
}
*/


// LAB 10_0_0
// (구조체 변수)
// 이 구조체 student 타입의 변수 aStudent를 아래와 같이 선언하라.(main함수 안에)
// struct student aStudent;
// 그리고 학생의 이름, 중간고사, 학기말고사를 입력받아
// 이를 그대로 출력하라.
// 
// 실행 예시
// Enter student name : 박수희
// Enter midterm and final score : 100 90
// 
// 이름		중간		학기말
// 박수희	100		90

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

	printf("\n이름\t중간\t학기말\n");
	printf("%s\t%d\t%d\n", aStudent.name, aStudent.midterm, aStudent.final);

	return 0;
}
*/

// LAB 10_0_2
// LAB10_0_0 의 프로그램에 
// 아래와 같이 student 타입의 변수에 대한 포인터를 선언하고,
// 이 포인터를 이용하여 가)와 같은 일을 하도록 프로그램을 수정하라.
// (*와 .(dot)연산자를 사용하라))
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
	struct student* sp = &aStudent; // 포인터 선언 및 초기화

	printf("Enter student name : ");
	scanf("%s", sp->name); // 포인터를 사용하여 구조체 멤버에 접근

	printf("Enter midterm and final score : ");
	scanf("%d %d", &sp->midterm, &sp->final); // 포인터를 사용하여 구조체 멤버에 접근

	printf("\n이름\t중간\t학기말\n");
	printf("%s\t%d\t%d\n", sp->name, sp->midterm, sp->final); // 포인터를 사용하여 구조체 멤버에 접근

	return 0;
}
*/


// LAB 10_0_1
// (구조체 배열)
// 이 구조체 student 타입의 배열 s(크기 3)을 선언하고,
// struct student s[3];
// 학기말고사를 입력 받아 이를 그대로 출력하는 프로그램을 작성하라.
// 
// 실행 예시
// Enter student name : 송혜교
// Enter midterm and final score : 50 60
// Enter student name : 장동건
// Enter midterm and final score : 60 70
// Enter student name : 고소영
// Enter midterm and final score : 70 80
// 
// 이름		중간		학기말
// 송혜교	50		60
// 장동건	60		70
// 고소영	70		80

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

	printf("\n이름\t중간\t학기말\n");
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
	struct student* sp = s; // 포인터 선언 및 초기화
	int i;

	for (i = 0; i < 3; i++) {
		printf("Enter student name : ");
		scanf("%s", (sp + i)->name); // 포인터를 사용하여 구조체 멤버에 접근

		printf("Enter midterm and final score : ");
		scanf("%d %d", &(sp + i)->midterm, &(sp + i)->final); // 포인터를 사용하여 구조체 멤버에 접근
	}

	printf("\n이름\t중간\t학기말\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\n", (sp + i)->name, (sp + i)->midterm, (sp + i)->final); // 포인터를 사용하여 구조체 멤버에 접근
	}

	return 0;
}
*/

// LAB 10_1 (revisited)
// LAB 11_1_1
// LAB 11_1_1
// 1) 중간고사성적(midterm)과 기말고사성적(final)을 멤버로 갖는 구조체 타입 Score을 정의하고
// 중간고사 성적과 학기말고사 성적을 출력하는 printScore함수를 정의하고
// 아래의 main함수를 실행한다.
// 2) 두 성적을 배교하여 성적이 좋은(중간고사와 학기말고사를 더한 총점이 큰)수를 반환하는
// biggerScore함수를 정의하고 main 함수를 실행한다.
// 3) 두 성적의 중간고사를 더한 값, 학기말고사를 더한 값을 멤버로 갖는 구조체 변수를 반환하는
// totalScore함수를 정의하고 main 함수를 실행한다.
// 4) 매개변수로 주어진 중간고사와 학기말고사의 성적을 갖는 구조체 변수를 반환하는
// createScore함수를 정의하고 main 함수를 실행한다.
// 
// 실행예시
// 1)-----------------------------
// 중간고사 성적은 50
// 학기말고사 성적은 100
// 중간고사 성적은 70
// 학기말고사 성적은 70
// 2)-----------------------------
// 둘 중 성적이 좋은 점수:
// 중간고사 성적은 50
// 학기말고사 성적은 100
// 3)-----------------------------
// 두 성적의 총 합:
// 중간고사 성적은 120
// 학기말고사 성적은 170
// 4)-----------------------------
// 중간고사 성적은 99
// 학기말고사 성적은 99

// 1
/*
#include <stdio.h>
#include <stdlib.h>
// 1) typedef를 사용하여 Score라는 새로운 타입을 정의하라.
typedef struct score Score;
struct score {
	int midterm;
	int final;
};

void printScore(Score s) //2)
{
	printf("중간고사 성적은 %d\n", s.midterm);
	printf("학기말고사 성적은 %d\n", s.final);
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
	printf("둘 중 성적이 좋은 점수:\n");
	printScore(biggerScore(s1, s2));
	printf("3)-----------------------------\n");
	printf("두 성적의 총 합:\n");
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

// 1) typedef으로 구조체 타입 Score 정의하라.
typedef struct {
	int midterm;
	int final;
} Score;

// 2) 중간고사 성적과 학기말고사 성적을 출력하는 함수
void printScore(Score s) {
	printf("중간고사 성적은 %d\n", s.midterm);
	printf("학기말고사 성적은 %d\n", s.final);
}

// 3) 두 성적을 비교하여 성적이 좋은(더 큰) 수를 반환하는 함수
Score biggerScore(Score s1, Score s2) {
	return (s1.midterm + s1.final > s2.midterm + s2.final) ? s1 : s2;
}

// 4) 두 성적의 중간고사를 더한 값, 학기말고사를 더한 값을 갖는 구조체 변수를 반환하는 함수
Score totalScore(Score s1, Score s2) {
	Score total;
	total.midterm = s1.midterm + s2.midterm;
	total.final = s1.final + s2.final;
	return total;
}

// 5) 매개변수로 주어진 중간고사와 학기말고사의 성적을 갖는 구조체 변수를 반환하는 함수
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
	printf("둘 중 성적이 좋은 점수:\n");
	printScore(biggerScore(s1, s2));

	printf("3)-----------------------------\n");
	printf("두 성적의 총 합:\n");
	printScore(totalScore(s1, s2));

	printf("4)-----------------------------\n");
	s3 = createScore(99, 99);
	printScore(s3);

	return 0;
}
*/


// LAB 11_1_2
// (구조체 포인터를 함수의 매개변수로 전달)
// 구조체의 경우 그 크기가 클 때, 데이터 복사에 비용이 많이 들 수 있으므로,
// 매개변수 전달시 포인터를 사용하는 것이 좋다.
// 위의 LAB 11_1_1에서 함수의 매개변수로 사용된 구조체 변수를
// 모두 구조체 포인터로 바꾸어 프로그램을 수정하라.
// 변경되는 함수의 원수는 아래와 같다.
// createScore함수는 변경되지 않는다.
// void printScore(Score *p){...}	// 매개변수 변경
// Score *biggerScore(Score *p1, Score *p2){...}	// 반환타입 변경, 매개변수 변경
// void totalScore(Score *p1, Score *p2, Score *tp){...}	// 반환타입 변경, 매개변수 한개 추가
// Score createScore(int m, int f){...}	// 변경 없음
/*
#include <stdio.h>
#include <stdlib.h>
// 1) typedef를 사용하여 Score라는 새로운 타입을 정의하라.
typedef struct score Score;
struct score {
	int midterm;
	int final;
};

void printScore(Score *p) //2)
{
	printf("중간고사 성적은 %d\n", p->midterm);
	printf("학기말고사 성적은 %d\n", p->final);
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
	printf("둘 중 성적이 좋은 점수:\n");
	printScore(biggerScore(&s1, &s2));

	printf("3)-----------------------------\n");
	printf("두 성적의 총 합:\n");
	totalScore(&s1, &s2, &temp);
	printScore(&temp);

	printf("4)-----------------------------\n");
	temp = createScore(99, 99);
	printScore(&temp);
}
*/

// LAB 11_2
// 아래와 같이 student 구조체를 정의하고
// typedef를 이용하여 Student라는 새로운 타입을 정의하라.
// 
// 실행예시
// Enter a number of student : 3
// Enter student name : 송혜교
// Enter midterm and final score : 100 50
// Enter student name : 장동건
// Enter midterm and final score : 50 50
// Enter student name : 고소영
// Enter midterm and final score : 60 70
//
// 이름		중간    기말    평균
// 송혜교	100		50		75
// 장동건	50		50		50
// 고소영	60		70		65

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};
// typedef 를 사용하여 Student 를 정의
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
		printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < num; i++)
		printStudent(s[i]);
}
*/

// LAB 11_2_0
// (구조체 포인터를 매개변수로)
// 위의 printStudent함수는 구조체변수를 매개변수로 받았다.
// 이를 고려해서, 구조체포인터를 매개변수로 하도록 printStudent함수를 수정하라.
// 물론 main함수도 수정하라.
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};
// typedef 를 사용하여 Student 를 정의
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
		printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < num; i++)
		printStudent(&s[i]);
}
*/

// LAB 11_2_1
// 아래의 지시대로 프로그램을 수정하라.
// 함수의 매개변수로 구조체 포인터를 사용하라.
// 위의 LAB 11_2_0에서 a)b)c)d)의 네 문장을 아래의 함수 호출로 대치하고,
// 이 함수의 정의를 추가하라.
// readStudentScore(...)
// e)부분을 아래의 함수 호출로 대치하고, 이 함수의 정의를 추가하라.
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
// typedef 를 사용하여 Student 를 정의
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
	printf("\n이름\t중간\t학기말\t평균\n");
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

	printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);
	}

	printf("\n이름\t학점\n");
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

	printf("\n중간고사의 평균 = %d\n", sum_mid / 3);
	printf("학기말고사의 평균 = %d\n", sum_fin / 3);

	return 0;
}
*/

// HW 11_1
// (구조체 포인터)
// 아래와 같은 구조체 포인터 sp를 사용하여
// HW10_1의 프로그램을 다시 작성하라.
// struct student s[3];
// struct student *sp = s;
// 여기서는 s[..]의 표현은 사용하지 않고,
// sp와 -> 연산자를 사용하라.
// 그러나 sp = s;는 계속 사용할 수도 있다.

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
	printf("\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);
		sp++;
	}

	sp = s;
	printf("\n이름\t학점\n");
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

	printf("\n중간고사의 평균 = %d\n", sum_mid / 3);
	printf("학기말고사의 평균 = %d\n", sum_fin / 3);

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

	printf("\n이름\t중간\t학기말\t평균\n");
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

	readClass(&cp);					// 앞 코드의 a)부분 대치
	
	calculateClassAverage(&cp);		// 앞 코드의 b)부분 대치

	printf("\n이름\t중간\t학기말\t평균\n");
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

	printf("\n이름\t중간\t기말\t평균\n");
	printClass(&c2);

	calculateAll(&c2, &all);

	printf("--------------------------------\n");
	printStudent(&all);
}
*/

// Project 3_1
// 비디오 관리 프로그램(구조체 고급)
/*
#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 100
#define MAX_CUST 200		// max customer
#define MAX_CHAR 100		// 문자열의 max 문자
#include <stdio.h>
#include <string.h>

typedef struct { // 재고 대장: 현재 보유하고 있는 Video 정보 저장
	char title[MAX_CHAR];
	int qty; // 수량
} VideoInfo;

typedef struct { // 대출 대장: 대출해간 (고객 id와 video id)들을 저장
	int custId; // 고객 id : 1, 2, 3
	char title[MAX_CHAR]; // Video 제목
} RentInfo;

void printAllVideo(VideoInfo videoList[], int videoCount)
{
	int i = 0;
	printf("Video제목\t수량\n");
	printf("------------------------\n");
	for (i = 0; i < videoCount; i++)
		printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
}

void purchaseVideo(VideoInfo videoList[], int* videoCountPtr, char* title[], int qty)
{
	strcpy(videoList[*videoCountPtr].title, title);
	videoList[*videoCountPtr].qty = qty;
	(*videoCountPtr)++;		// 비디오 개수를 main에 전달하기 위해 포인터 사용
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
	printf("고객ID\tVideo제목\n");
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

	int rentCount = 0;			// 현재 대출 건수는 0임
	RentInfo rentList[MAX_CUST];
	int choice;
	int indexSearched;
	char title[MAX_CHAR];
	int custId, qty;

	printf("1(All Video 출력), 2(구입), 3(검색), 4(대여), 5(All 대여정보 출력), 6(종료) : ");
	scanf("%d", &choice);

	while (choice != 6)
	{
		switch (choice)
		{
		case 1: printAllVideo(videoList, videoCount); break;
		case 2:
			printf("Enter video 제목 : ");
			scanf("%s", title);
			printf("Enter video 수량 : ");
			scanf("%d", &qty);
			purchaseVideo(videoList, &videoCount, title, qty);
			break;
		case 3:
			printf("Enter video 제목 : ");
			scanf("%s", title);
			if ((indexSearched = searchVideoByTitle(videoList, videoCount, title)) == -1)
				printf("그런 비디오는 없습니다.\n");
			else if (videoList[indexSearched].qty == 0)
				printf("다 대여중입니다.\n");
			else
				printf("대여 가능합니다.\n"); break;
		case 4:
			printf("Enter video 제목 :");
			scanf("%s", title);
			printf("Enter 고객 id : ");
			scanf("%d", &custId);
			rentVideo(videoList, videoCount, rentList, &rentCount, title, custId);
			break;
		case 5:
			printAllRent(rentList, rentCount); break;
		}
		printf("1(All Video 출력), 2(구입), 3(검색), 4(대여), 5(All 대여정보 출력), 6(종료) : ");
		scanf("%d", &choice);
	}
}
*/