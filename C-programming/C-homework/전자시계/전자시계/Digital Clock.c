#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>  //시간관련 함수를 포함하는 헤더
#include <windows.h> //Sleep 함수를 포함하는 헤더

void printTime(struct tm* t1);										 //시간을 출력하는 함수 선언
void arrIn(char* clockDigits, int digit, int beginNumber);		//배열에 배열을 넣어주는 함수 선언
int main()
{
	time_t curr;			//현재시간을 담을 변수(1900년 1월 1일 0시 0분 0초를 기준으로 초단위로 기록됨.)
	struct tm* curTime;	//현재시간을 시,분,초,날짜 등으로 나누어 저장할 구조체 포인터


	do //무한루프 시작
	{
		time(&curr);								//현재시간을 변수에 저장
		curTime = localtime(&curr);			//구조체에 시간을 저장

		printf("디지털시계 입니다. 종료를 원하시면 CTRL + C 를 입력하세요.\n\n");

		printTime(curTime);					//시간 출력 함수 호출
		Sleep(100);								// 100/1000 초 간격을 맞추기 위해 딜레이를 줌
		system("cls");							//화면지우기

	} while (1);

	return 0;
}

void printTime(struct tm* t1)					//시간 출력함수 정의
{

	char clockDigits[5][33] = { 0, };				//가로 33칸, 세로 5줄 짜리 시계표시를 만들 배열

	arrIn(clockDigits, (t1->tm_hour / 10), 0);			//시간 10의 자리
	arrIn(clockDigits, (t1->tm_hour % 10), 5);		//시간 1의 자리
	arrIn(clockDigits, (t1->tm_min / 10), 12);			//분 10의 자리
	arrIn(clockDigits, (t1->tm_min % 10), 17);		//분 1의 자리
	arrIn(clockDigits, (t1->tm_sec / 10), 24);			//시간 10의 자리
	arrIn(clockDigits, (t1->tm_sec % 10), 29);		//시간 1의 자리


	//디지털 시계 형식으로 배열 clockDigits를 출력함
	for (int i = 0; i < 5; i++)				//배열의 세로길이 만큼 반복
	{
		for (int j = 0; j < 33; j++)		//배열의 가로 길이 만큼 반복
		{
			if (clockDigits[i][j] == 1)		//배열의 요소가 1이면 저장되어 있으면 색칠된 사각형 출력
			{
				printf("■");
			}
			else if ((i == 1 || i == 3) && (j == 10 || j == 22))
			{
				printf("■");					// 시,분,초를 구별하는 ":" 출력
			}
			else
			{
				printf("  ");					//위의 두가지에 아무것도 해당하지 않으면 두칸짜리 공백출력
			}
		}
		printf("\n");							//배열의 가로 한줄이 끝나면 줄바꿈
	}
}


//출력할 배열에 각 시분초에 해당하는 숫자 형태를 입력해 주는 함수 정의
//입력받을 매개변수는 디지털시계배열, 나타낼 숫자, 숫자의 가로 위치
void arrIn(char clockDigits[][33], int digit, int beginNumber)
{
	char numDigits[10][5][4] =  //디지털로 표시해줄 3차원 배열 [0][][] -> 0, [1][][] ->1 ...
	{
		{	//0을 표시
		{1,1,1,1},
		{1,0,0,1},
		{1,0,0,1},
		{1,0,0,1},
		{1,1,1,1}
		},
		{	//1을 표시
		{0,0,0,1},
		{0,0,0,1},
		{0,0,0,1},
		{0,0,0,1},
		{0,0,0,1}
		},
		{	//2를 표시
		{1,1,1,1},
		{0,0,0,1},
		{1,1,1,1},
		{1,0,0,0},
		{1,1,1,1}
		},
		{	//3을 표시
		{1,1,1,1},
		{0,0,0,1},
		{0,1,1,1},
		{0,0,0,1},
		{1,1,1,1}
		},
		{	//4를 표시
		{1,0,0,1},
		{1,0,0,1},
		{1,1,1,1},
		{0,0,0,1},
		{0,0,0,1}
		},
		{	//5을 표시
		{1,1,1,1},
		{1,0,0,0},
		{1,1,1,1},
		{0,0,0,1},
		{1,1,1,1}
		},
		{	//6을 표시
		{1,1,1,1},
		{1,0,0,0},
		{1,1,1,1},
		{1,0,0,1},
		{1,1,1,1}
		},
		{	//7을 표시
		{1,1,1,1},
		{0,0,0,1},
		{0,0,0,1},
		{0,0,0,1},
		{0,0,0,1}
		},
		{	//8을 표시
		{1,1,1,1},
		{1,0,0,1},
		{1,1,1,1},
		{1,0,0,1},
		{1,1,1,1}
		},
		{	//9를 표시
		{1,1,1,1},
		{1,0,0,1},
		{1,1,1,1},
		{0,0,0,1},
		{1,1,1,1}
		}
	};

	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = beginNumber; j < beginNumber + 4; j++)
		{
			clockDigits[i][j] = numDigits[digit][i][cnt];
			cnt++;
		}
		cnt = 0;
	}
}