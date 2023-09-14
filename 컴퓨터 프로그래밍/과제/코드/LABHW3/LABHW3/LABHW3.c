///20201012 컴퓨터학과 임소정
//LABHW3_3_1
// 완성본
/*
#define SIZE 10
#include <stdio.h>
int main(void)
{
	int seatChoice;
	char choice;		//계속 여부
	int seats[SIZE] = { 0 };
	int i;

	printf("******좌석 예약 시스템******\n");

	printf("\n좌석을 예약하시겠습니까? (y/n) ");
	scanf_s("%c", &choice);
	while (choice == 'y')
	{
		//좌석표 출력
		printf("----------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf("----------------------\n");
		for (i = 0; i < SIZE; i++)
			printf("%2d", seats[i]);
		printf("\n");

		printf("몇번째 좌석? ");
		scanf_s("%d", &seatChoice);

		if (seats[seatChoice - 1] == 0)
		{
			//예약 가능이면
			seats[seatChoice - 1] = 1;
			printf("예약되었습니다.\n");

			//예약내용 반영한 좌석표 출력
			printf("----------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("----------------------\n");
			for (i = 0; i < SIZE; i++)
				printf("%2d", seats[i]);
			printf("\n");
		}
		else		//이미 예약되었으면
			printf("이미 예약된 좌석입니다.\n");

		while (getchar() != '\n');		//버퍼 비우기 getchar() 는 한글자씩 받아오는 함수

		printf("\n좌석을 예약하시겠습니까? (y/n) ");
		scanf_s("%c", &choice);
	}
}
*/

/*
//위의 코드를 함수화
#define SIZE 10
#include <stdio.h>

char askReservation();
void printSeats(int s[], int size);
void processReservation(int a[], int size, int seaatNumber);

int main(void)
{
	int seatChoice;
	int seats[SIZE] = { 0 };

	printf("******좌석 예약 시스템******\n");

	while (askReservation() == 'y')
	{
		printSeats(seats, SIZE);

		printf("몇번째 좌석? ");
		scanf_s("%d", &seatChoice);

		processReservation(seats, SIZE, seatChoice);

		while (getchar() != '\n');		//버퍼 비우기 getchar() 는 한글자씩 받아오는 함수
	}
}

char askReservation()
{
	char choice;
	printf("\n좌석을 예약하시겠습니까? (y/n) ");
	scanf_s("%c", &choice);
	return choice;
}

void processReservation(int a[], int size, int seatNumber)
{
	if (a[seatNumber - 1] == 0)
	{
		//예약 가능이면
		a[seatNumber - 1] = 1;
		printf("예약되었습니다.\n");

		//예약내용 반영한 좌석표 출력
		printSeats(a, size);
	}
	else		//이미 예약되었으면
		printf("이미 예약된 좌석입니다.\n");
}

void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");
}
*/

/*
//LABHW3_3_2
//위의 문제와는 조금 예매 방식이 다른 기차표 예매 프로그램을 작성하자.
//간단한 구현을 위해서 좌석은 모두 10개라고 하자.
//예매할 좌석수를 입력받아, 빈 자리를 앞에서부터 차례로 할당한다.
//0은 예매가능, 1은 이미 예약되었음을 의미한다.
//더 이상 예매할 자리가 남아있지 않으면 프로그램을 종료한다.

//가정 : 남은 자리만큼 예매자수가 정확히 입력된다고 가정하자.
//즉, 3명 4명이 예약된 후 다음에는 남은 좌석이 3자리이므로 3명이 입력된다. (실행예시 참조)

//요구사항 : 가능하면 프로그램을 모듈화하라.(함수 사용!)
//힌트 : 위의 문제에서와 유사하게 모듈화 할 수 있다.
//즉, askReservation, processReservation은 수정하고, printSeats는 그대로 사용한다.

//실행 예시
//******좌석 예약 시스템******
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//0 0 0 0 0 0 0 0 0 0
//좌석을 예약하시곘습니까(몇명)? 3
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 0 0 0 0 0 0 0
//좌석을 예약하시곘습니까(몇명)? 4
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 1 1 1 1 0 0 0
//좌석을 예약하시곘습니까(몇명)? 3
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 1 1 1 1 1 1 1

#define SIZE 10
#include <stdio.h>

char askReservation(int* num);
void printSeats(int s[], int size);
void processReservation(int a[], int size, int num);

int main(void)
{
	int seats[SIZE] = { 0 };
	int num;

	printf("******좌석 예약 시스템******\n");

	while (askReservation(&num) == 'y')
	{
		processReservation(seats, SIZE, num);
	}
}

//좌석을 예약하시겠습니까(몇명)?
char askReservation(int* num)
{
	char choice;
	printf("\n좌석을 예약하시겠습니까(몇명)? ");
	scanf_s("%d", num);
	while (getchar() != '\n');		//버퍼 비우기 getchar() 는 한글자씩 받아오는 함수
	return 'y';
}

//좌석 예약 및 좌석표 출력
void processReservation(int a[], int size, int num)
{
	int i, j;
	int count = 0;
	for (i = 0; i < size; i++)
	{
		if (a[i] == 0)
		{
			a[i] = 1;
			count++;
		}
		if (count == num)
			break;
	}
	printSeats(a, size);
}

//좌석표 출력
void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%d ", s[i]);
	printf("\n");
}
*/

/*
//LABHW3_3_challenge
//위의 문제를 다음과 같이 수정하자.
//가정 : 남은 좌석보다 많은 자리를 예약하려고 할 때
//예약을 할 수 없는 인원수를 출력하라.

//실행 예시
//******좌석 예약 시스템******
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//0 0 0 0 0 0 0 0 0 0
//좌석을 예약하시곘습니까(몇명)? 3
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 0 0 0 0 0 0 0
//좌석을 예약하시곘습니까(몇명)? 4
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 1 1 1 1 0 0 0
//좌석을 예약하시곘습니까(몇명)? 5
//>>>2명은 예약 안됨.
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 1 1 1 1 1 1 1


#include <stdio.h>
#define SIZE 10

char askReservation(int* num);
void printSeats(int s[], int size);
int processReservation(int a[], int size, int num);

int main(void)
{
	int seats[SIZE] = { 0 };
	int num;

	printf("******좌석 예약 시스템******\n");

	while (askReservation(&num) == 'y')
	{
		int unavailable = processReservation(seats, SIZE, num);
		if (unavailable > 0)
		{
			printf(">>>%d명은 예약 안됨.\n", unavailable);
		}
	}
}

// 좌석을 예약하시겠습니까(몇명)?
char askReservation(int* num)
{
	char choice;
	printf("\n좌석을 예약하시겠습니까(몇명)? ");
	scanf_s("%d", num);
	while (getchar() != '\n'); // 버퍼 비우기 getchar() 는 한글자씩 받아오는 함수
	return 'y';
}

// 좌석 예약 및 좌석표 출력
int processReservation(int a[], int size, int num)
{
	int i, j;
	int count = 0;
	for (i = 0; i < size; i++)
	{
		if (a[i] == 0)
		{
			a[i] = 1;
			count++;
		}
		if (count == num)
			break;
	}
	printSeats(a, size);
	return num - count; // Return the number of people who couldn't make a reservation
}

// 좌석표 출력
void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%d ", s[i]);
	printf("\n");
}
*/

/*
//LABHW3_4_1(다중집합)
//수학에에서 다중집합(multiset)은 원소의 중복을 허용한다.
//최대 5개의 정수형 원소를 저장할 수 있는
//다중 집합에 정수를 입력받아 원소를 추가하고,
//그 때마다 다중집합의 원소들을 출력하시오.

//다중집합의 원소가 5개가 되면 프로그램을 종료한다.

//-함수를 사용하여 모듈화하라. (예시 : printSet 등등)

//실행 예시
//다중집합에 추가할 원소 : 30
//{ 30 }
//다중집합에 추가할 원소 : 30
//{ 30, 30 }
//다중집합에 추가할 원소 : 20
//{ 30, 30, 20 }
//다중집합에 추가할 원소 : 10
//{ 30, 30, 20, 10 }
//다중집합에 추가할 원소 : 20
//{ 30, 30, 20, 10, 20 }

#include <stdio.h>
#define SIZE 5

void printSet(int s[], int size);
void addElement(int s[], int size, int element);

int main(void)
{
	int set[SIZE] = { 0 };
	int element;

	while (1)
	{
		printf("다중집합에 추가할 원소 : ");
		scanf_s("%d", &element);
		addElement(set, SIZE, element);
		printSet(set, SIZE);
	}
}

void printSet(int s[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size; i++)
	{
		if (s[i] != 0)
			printf("%d ", s[i]);
	}
	printf("}\n");
}

void addElement(int s[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (s[i] == 0)
		{
			s[i] = element;
			break;
		}
	}
}
*/

/*
//LABHW3_4_2
//수학에서 집합(set)은 다중집합(multiset)과 다르게 원소의 중복을 허용하지 않는다.
//최대 5개의 정수형 원소를 저장할 수 있는
//집합(set)을 구현하시오.
//정수를 입력받아 집합의 우너소로 추가하고, 그때마다 집합의 원소들을 출력하시오.
//집합의 원소가 5개가 되면 프로그램을 종료한다.

//실행 예시
//집합에 추가할 원소 : 20
//{ 20 }
//집합에 추가할 원소 : 20
//20은 이미 집합에 있음.
//집합에 추가할 원소 : 10
//{ 20, 10 }
//집합에 추가할 원소 : 30
//{ 20, 10, 30 }
//집합에 추가할 원소 : 10
//10은 이미 집합에 있음.
//집합에 추가할 원소 : 50
//{ 20, 10, 30, 50 }
//집합에 추가할 원소 : 40
//{ 20, 10, 30, 50, 40 }

#include <stdio.h>
#define SIZE 5

void printSet(int s[], int size);
void addElement(int s[], int size, int element);
int isExist(int s[], int size, int element);

int main(void)
{
	int set[SIZE] = { 0 };
	int element;

	while (1)
	{
		printf("집합에 추가할 원소 : ");
		scanf_s("%d", &element);
		if (isExist(set, SIZE, element) == 1)
		{
			printf("%d은 이미 집합에 있음.\n", element);
		}
		else
		{
			addElement(set, SIZE, element);
			printSet(set, SIZE);
		}
	}
}

void printSet(int s[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size; i++)
	{
		if (s[i] != 0)
			printf("%d ", s[i]);
	}
	printf("}\n");
}

void addElement(int s[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (s[i] == 0)
		{
			s[i] = element;
			break;
		}
	}
}

int isExist(int s[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (s[i] == element)
			return 1;
	}
	return 0;
}
*/
