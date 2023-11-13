// LAB 10
// (구조체 기본 연습)
// 아래와 같은 구성요소를 갖도록 구조체 student 를 선언하라. (main함수 전에)
// char name[20];
// int midterm;
// int final;

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

// LAB 10_1
// (구조체, 구조체 변수, 구조체 배열, 구조체 포인터)
// (1)
// (구조체)
// 아래와 같은 멤버를 가지는 구조체 customer를 아래와 같이 선언했다.
// 이때 구조체 하나가 차지하는 메모리 크기와
// 각 멤버들이 구조체 내에서 어떻게 위치하는지
// 모습을 그려 보시오.
// struct customer {
//		char name[40];
//		int age;
//	};
// 
// (2)
// (구조체 변수)
// 앞에서 선언한 구조체 customer 타입의 변수 aCustomer를 
// “박수희”와 36을 값으로 초기(선언할 때)한 후 출력해보시오.
// (변수의 선언 및 초기화 코드는 main() 함수 안에 위치하도록 하시오.)
// 
// (3)
// (구조체 배열)
// 구조체 customer 타입의 배열 cArray를 선언해 보시오.
// 값은 장동건(38세) 고소영(38)을 갖는다.
// 이 떄 cArray는 2개의 엘리먼트를 가지며,
// i) cArray를 초기화 (선언과 동시에 초기화)
// ii) 아래의 코드를 사용하여 출력하시오.
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
	printf("구조체 하나가 차지하는 메모리 크기 : %d\n", sizeof(struct student));
}
*/

/*
// 교수 답안
(나)
struct customer aCustomer = {"박수희", 36 };

(다)
struct customer cArray[2] = { {"장동건", 38}, {"고소영", 38} };

(라)
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
	// 변수 선언 부분
	struct customer aCustomer;
	struct customer cArray[2];
	int i;

	// 코드 부분
	// (1)
	printf("구조체 하나가 차지하는 메모리 크기 : %d\n", sizeof(struct customer));
	printf("name의 위치 : %d\n", &aCustomer.name);
	printf("age의 위치 : %d\n", &aCustomer.age);

	// (2)
	strcpy(aCustomer.name, "박수희");
	aCustomer.age = 36;
	printf("name : %s\n", aCustomer.name);
	printf("age : %d\n", aCustomer.age);

	// (3)
	strcpy(cArray[0].name, "장동건");
	cArray[0].age = 38;
	strcpy(cArray[1].name, "고소영");
	cArray[1].age = 38;
	for (i = 0; i < 2; i++)
		printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);

	return 0;
}
*/

// HW 10_1
// (구조체 변수, 구조체 배열)
// 아래와 같은 구성요소를 같도록 구조체 student를 선언하고,
// char name[20];
// int midterm;
// int final;
// int average;
// char grade
// 이 구조체 student 타입의 배열 s(크기 3)를 아래와 같이 선언하라.
// struct student s[3];
// 
// 아래의 실행결과처럼
// (1)
// 3명의 학생의 이름, 중간고사, 학기말고사를 입력받아 
// 멤버 필드인 name, midterm, final에 넣고,
// 3명 학생의 평균을 계산((중간고사 + 학기말고사)/2)하여 average에 넣은 후
// 3명의 학생의 정보를 출력
// (2)
// 3명 학생의 학점을 계산(80점 이상이면 A, 50점 이상이면 B, 50점 이하이면 F)하여
// 멤버 필드인 grade에 넣고 이를 출력한다.
// (3)
// 3명의 학생의 중간고사 평균과 학기말고사 평균을 계산하여 출력한다.
// (1)(2)(3)을 차례로 시도하라.
// 
// 실행 예시
// Enter student name : 박수희
// Enter midterm and final score : 10 20
// Enter student name : 장동건
// Enter midterm and final score : 100 90
// Enter student name : 고소영
// Enter midterm and final score : 90 40
// 이름		중간		학기말	평균
// 박수희	10		20		15
// 장동건	100		90		95
// 고소영	90		40		65
// 
// 이름		학점
// 박수희		F
// 장동건		A
// 고소영		B
// 
// 중간고사의 평균 = 66
// 학기말고사의 평균 = 50

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

// Project 03
// 비디오 관리 프로그램 (구조체 기본)
// (구조체, 구조체 배열)
// 
// <기능>
// 1. 보유 Video들을 출력
// : 재고대장(videoList)에 있는 Video 정보를 출력한다.
// 
// 2. Video 구입
// : 제목, 수량을 입력받아서, 재고대장	(videoList)에 추가한다.
// Video 개수(videoCount)를 증가시킨다.
// 
// 3. title로 Video 검색
// : 제목을 입력받아서,
// 재고대장(videoList)내에 이 Video가 없는지, 전부 대여중인지, 대여 가능한지를 출력한다.
// (strcmp를 사용한다.)
// 
// 4. Video정보는 제목과 수량을 포함한다.
// 5. 입력을 간단히 하기 위해, 영화제목은 공백문자를 포함하지 않고 처리한다.
// 
// 초기에 아래와 같은 Video를 보유하고 있다고 하자.
// 제목				수량
// BeforeSunrise	1
// BeforeSunset		3
// BeforeMidnight	5
// Casablanca		7
// EdgeOfTomorrow	9
// 
// 기존에 존재하지만 추가 주문한 것은 수량만 증가하고,
// 새로운 Video를 추가 주문한 것은 재고대장에 추가한다.
// 
// string.h를 사용하여 strcmp(videoList[i].title, searchkey)로 작성한다.
// 
// 실행 예시
// 1(All Video 출력), 2(구입), 3(검색), 4(종료): 1
// Video제목			수량
// -----------------------
// BeforeSunrise	1
// BeforeSunset		3
// BeforeMidnight	5
// Casablanca		7
// EdgeOfTomorrow	9
// 1(All Video 출력), 2(구입), 3(검색), 4(종료): 2
// Enter video 제목 : BeginAgain
// Enter video 수량 : 10
// 1(All Video 출력), 2(구입), 3(검색), 4(종료): 1
// Video제목			수량
// -----------------------
// BeforeSunrise	1
// BeforeSunset		3
// BeforeMidnight	5
// Casablanca		7
// EdgeOfTomorrow	9
// BeginAgain		10
// 1(All Video 출력), 2(구입), 3(검색), 4(종료): 3
// Enter video 제목 : BeforeSun
// 그런 비디오는 없습니다.
// 1(All Video 출력), 2(구입), 3(검색), 4(종료): 3
// Enter video 제목 : BeforeSunrise
// 대여 가능합니다.
// 1(All Video 출력), 2(구입), 3(검색), 4(종료): 4

/*
#define _CRT_SECURE_NO_WARNINGS
#define MAX_VIDEO 100
#define MAX_CHAR 100 // 문자열의 max 문자

#include <stdio.h>
#include <string.h>

struct VideoInfo { // 재고 대장: 현재 보유하고 있는 Video 정보 저장
	char title[MAX_CHAR];
	int qty; // 수량
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
	};	// 앞의 정보처럼 초기화

	char title[MAX_CHAR];
	int qty;
	int choice;
	int i;


	printf("1(All Video 출력), 2(구입), 3(검색), 4(종료): ");
	scanf("%d", &choice);

	while (choice != 4) {
		switch (choice) {
		case 1:	//보유한 Video들을 출력
			printf("Video제목\t수량\n");
			printf("-----------------------\n");
			for (i = 0; i < videoCount; i++)
				printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
			break;

		case 2:	// Video 구입
			printf("Enter video 제목 : ");
			scanf("%s", title);
			printf("Enter video 수량 : ");
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


		case 3:	// title로 Video 검색
			printf("Enter video 제목 : ");
			scanf("%s", title);

			for (i = 0; i < videoCount; i++) {
				if (strcmp(videoList[i].title, title) == 0) {
					if (videoList[i].qty > 0)
						printf("대여 가능합니다.\n");
					else
						printf("대여 중입니다.\n");
					break;
				}
			}

			if (i == videoCount)
				printf("그런 비디오는 없습니다.\n");

			break;

		}
		printf("1(All Video 출력), 2(구입), 3(검색), 4(종료): ");
		scanf("%d", &choice);
	}
}
*/

// 10주차 강의자료
// HW(수평 오목)
// 교수 답안
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i, j;
	int sum;
	char player = b[r][c];

	// 여기에 수평오목이 되면, 1을 반환하는 코드를 삽입
	int ri, ci;

	// 수평 탐색 (왼쪽을 탐색하고 오른쪽 탐색)
	sum = 1;
	ci = c - 1;
	ri = r;
	while (ci != -1 && b[ri][ci] == player)
	{
		sum++;
		ci--;
	}

	// 여기를 완성하시오.
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
	int r, c;		// 바둑돌을 놓는 위치
	int i, j;
	int count;		// 바둑판에 돌을 가득 채우면 게임 종료
	int lose;
	int win;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열): ", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ')
			continue;			//이미 말이 놓인 자리

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

// HW(오목)
// 이제 완전한 오목 프로그램을 구현하자.
// 수평오목에 수직오목, 대각선오목, 역대각선오목을 추가하라.

// 오류 코드
/*
	// 역대각선 탐색 (오른쪽 위를 탐색하고 왼쪽 아래 탐색)
	sum = 1;
	ci = c + 1;
	ri = r - 1;
	while (ci != BOARD_SIZE && ri != -1 && b[ri][ci] == player)
	{
		sum++;
		ci++;
		ri--;
	}

	// 여기를 완성하시오.
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

// 정답 코드
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i, j;
	int sum;
	char player = b[r][c];

	// 여기에 수평오목이 되면, 1을 반환하는 코드를 삽입
	int ri, ci;

	// 수평 탐색 (왼쪽을 탐색하고 오른쪽 탐색)
	sum = 1;
	ci = c - 1;
	ri = r;
	while (ci != -1 && b[ri][ci] == player)
	{
		sum++;
		ci--;
	}

	// 여기를 완성하시오.
	ci = c + 1;
	ri = r;
	while (ci != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ci--;
	}

	if (sum == 5)
		return 1;

	// 수직 탐색 (위쪽을 탐색하고 아래쪽 탐색)
	sum = 1;
	ci = c;
	ri = r - 1;
	while (ri != -1 && b[ri][ci] == player)
	{
		sum++;
		ri--;
	}

	// 여기를 완성하시오.
	ci = c;
	ri = r + 1;
	while (ri != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ri--;
	}

	if (sum == 5)
		return 1;

	// 대각선 탐색 (왼쪽 위를 탐색하고 오른쪽 아래 탐색)
	sum = 1;
	ci = c - 1;
	ri = r - 1;
	while (ci != -1 && ri != -1 && b[ri][ci] == player)
	{
		sum++;
		ci--;
		ri--;
	}

	// 여기를 완성하시오.
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

	// 역대각선 탐색 (오른쪽 위를 탐색하고 왼쪽 아래 탐색)
	sum = 1;
	ci = c - 1;
	ri = r + 1;
	while (ci != -1 && ri != BOARD_SIZE && b[ri][ci] == player)
	{
		sum++;
		ci--;
		ri++;
	}

	// 오른쪽 위 탐색
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
	int r, c;		// 바둑돌을 놓는 위치
	int i, j;
	int count;		// 바둑판에 돌을 가득 채우면 게임 종료
	int lose;
	int win;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열): ", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ')
			continue;			//이미 말이 놓인 자리

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
