#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

// �Լ� ���� ����
void displayTime(int hour, int minute, int second);
void alarm();

int main() {
    while (1) {
        // ���� �ð� ���ϱ�
        time_t t = time(NULL);
        struct tm* now = localtime(&t);

        // ��, ��, �� ����
        int hour = now->tm_hour;
        int minute = now->tm_min;
        int second = now->tm_sec;

        // �ð� ǥ��
        displayTime(hour, minute, second);

        // ���� �˶�
        if (minute == 0 && second == 0)
            alarm();

        // 1�� ����
        Sleep(1000);
    }

    return 0;
}

// �ð� ǥ�� �Լ�
void displayTime(int hour, int minute, int second) {
    // ���� ������ ���� �ڵ� ��������
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // �ð� ǥ��
    SetConsoleTextAttribute(hConsole, 0x0E);  // �����
    printf("%s ", (hour >= 12) ? "����" : "����");

    SetConsoleTextAttribute(hConsole, 0x0A);  // �ʷϻ�
    printf("%d�� ", (hour > 12) ? hour - 12 : hour);

    SetConsoleTextAttribute(hConsole, 0x09);  // �Ķ���
    printf("%d�� ", minute);

    SetConsoleTextAttribute(hConsole, 0x0C);  // ������
    printf("%d��\n", second);

}

// �˶� �Լ�
void alarm() {
    printf("\a");  // Beep�� ���
}