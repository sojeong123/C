#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

// 함수 원형 선언
void displayTime(int hour, int minute, int second);
void alarm();

int main() {
    while (1) {
        // 현재 시간 구하기
        time_t t = time(NULL);
        struct tm* now = localtime(&t);

        // 시, 분, 초 추출
        int hour = now->tm_hour;
        int minute = now->tm_min;
        int second = now->tm_sec;

        // 시간 표시
        displayTime(hour, minute, second);

        // 정각 알람
        if (minute == 0 && second == 0)
            alarm();

        // 1초 지연
        Sleep(1000);
    }

    return 0;
}

// 시간 표시 함수
void displayTime(int hour, int minute, int second) {
    // 색상 변경을 위한 핸들 가져오기
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // 시간 표시
    SetConsoleTextAttribute(hConsole, 0x0E);  // 노랑색
    printf("%s ", (hour >= 12) ? "오후" : "오전");

    SetConsoleTextAttribute(hConsole, 0x0A);  // 초록색
    printf("%d시 ", (hour > 12) ? hour - 12 : hour);

    SetConsoleTextAttribute(hConsole, 0x09);  // 파랑색
    printf("%d분 ", minute);

    SetConsoleTextAttribute(hConsole, 0x0C);  // 빨강색
    printf("%d초\n", second);

}

// 알람 함수
void alarm() {
    printf("\a");  // Beep음 출력
}