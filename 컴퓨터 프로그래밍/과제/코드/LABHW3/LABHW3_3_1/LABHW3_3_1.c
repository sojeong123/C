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