#include <stdio.h>  //기본 함수 헤더
#include <Windows.h>  //gotoxy 함수 헤더
#include<conio.h>  //getch 함수 헤더
#include <time.h>   //clock() 함수 헤더
#include <mmsystem.h>;   //음악 함수 헤더

#pragma comment(lib, "winmm.lib")  //라이브러리 로드

#define Game_bgm "D:\\2023-1\\c프로그래밍\\C프팀플\\stranger-things-124008.wav"
// 로드할 소리 파일 경로를 미리 매크로 저장
#define MAP_X 3
#define MAP_Y 2
#define MAP_WIDTH 30
#define MAP_HEIGHT 20
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define PAUSE 112
#define ESC 27

int key;
int dir;
int speed;
int length;
int score;
int x[100], y[100];
int food_x, food_y;
int last_score = 0;
int best_score = 0;
int bomb1_x, bomb1_y;
int bomb2_x[3], bomb2_y[3];

clock_t start;
clock_t end;

void title1(void); //1단계 게임 시작화면 
void title2(void); //2단계 게임 시작화면 
void title3(void); //3단계 게임 시작화면 
void reset1(void); //게임 초기화 
void reset2(void);
void reset3(void);
void draw_map1(void); // 게임판 테두리를 그림 
void draw_map2(void);
void draw_map3(void);
void move1(int dir); //뱀머리를 이동 
void move2(int dir, clock_t start, clock_t end);
void move3(int dir);
void pause(void); //일시정지 
void game_over(void); //게임 오버를 확인 
void food1(void); // 음식 생성
void food2(void); 
void food3(void); 
void stageone(void); 
void stagetwo(void);
void stagethree(void); 
void TotalTitle(void);


void init() { // 마우스 커서 지우기 
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);  
    CONSOLE_CURSOR_INFO ConsoleCursor = { 0, };  //콘솔 커서 정보를 담고 있는 구조체를 생성하고 초기화함 
    ConsoleCursor.bVisible = 0;  //커서를 보이지 않도록 설정 
    ConsoleCursor.dwSize = 1;  //커서의 크기를 조정 
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);  //마우스 커서를 숨김으로 설정 
}

void gotoxy(int x, int y, char* s) { //x값을 2x로 변경, 좌표값에 바로 문자열을 입력할 수 있도록 printf함수 삽입  
    COORD pos = { 2 * x,y };  //콘솔 폰트의 가로 폭이 세로 폭의 2배라 가로로 두칸씩 이동하도록 설정함 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);  //콘솔창의 커서 위치를 설정
    printf("%s", s);
}

void draw_map1() { //1단계 맵
    int i;
    
    for (i = 0; i < MAP_WIDTH; i++) {
        gotoxy(MAP_X + i, MAP_Y, "■"); //위쪽 벽 그리기 
    }
    for (i = MAP_Y + 1; i < MAP_Y + MAP_HEIGHT - 1; i++) {
        gotoxy(MAP_X, i, "■");  //왼쪽 벽 그리기
        gotoxy(MAP_X + MAP_WIDTH - 1, i, "■");  //오른쪽 벽 그리기
    }
    for (i = 0; i < MAP_WIDTH; i++) {
        gotoxy(MAP_X + i, MAP_Y + MAP_HEIGHT - 1, "■");  //아래쪽 벽 그리기
    }
}

void draw_map2() { // 2단계 맵
    int i;

    for (i = 0; i < MAP_WIDTH; i++) {
        gotoxy(MAP_X + i, MAP_Y, "■");  //위쪽 벽 그리기 
    }
    for (i = 0; i < MAP_WIDTH; i++) {
        gotoxy(MAP_X + i, MAP_Y + MAP_HEIGHT - 1, "■");  //중앙 세로 벽 1 그리기
    }

    int j;
    for (i = 0; i < MAP_HEIGHT; i++) {
        gotoxy(MAP_X + (MAP_WIDTH / 2), MAP_Y + i, "■");  //중앙 세로 벽 2 그리기
    }
    for (i = 0; i < MAP_HEIGHT; i++) {
        for (j = 0; j < MAP_WIDTH; j++) {
            if (j == MAP_WIDTH / 2 || j == (MAP_WIDTH / 2) - 1) {
                gotoxy(MAP_X + j, MAP_Y + i, "■");  // 아래쪽 벽 그리기 
            }
        }
    }
}

void draw_map3() { // 십자가 모양의 맵
    int i;

    for (i = 0; i < MAP_WIDTH; i++) {
        gotoxy(MAP_X + i, MAP_Y + MAP_HEIGHT / 2, "■");    // 가로선 그리기
    }

    for (i = MAP_Y + 1; i < MAP_Y + MAP_HEIGHT - 1; i++) {
        gotoxy(MAP_X + MAP_WIDTH / 2, i, "■");    // 세로선 그리기
    }
}

void title1() { //1단계 시작 화면
    init();
    int i, j;

    while (_kbhit()) _getch();

    draw_map1();
    for (i = MAP_Y + 1; i < MAP_Y + MAP_HEIGHT - 1; i++) { // 맵 테두리 안쪽을 빈칸으로 채움 
        for (j = MAP_X + 1; j < MAP_X + MAP_WIDTH - 1; j++) gotoxy(j, i, "  ");
    }

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 5, "+--------------------------+");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 6, "|         1 단 계          |");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 7, "+--------------------------+");

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 10, MAP_Y + 9, " < 시작하려면 스페이스 바를 누르세요 > ");

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 11, "   ◇ ←,→,↑,↓ : Move    ");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 12, "   ◇ P : Pause             ");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 13, "   ◇ ESC : Quit              ");

    while (1) {
        if (_kbhit())
            key = _getch();
        if (key == ESC) exit(0); //esc를 누르면 종료 

        if (key == 32) {   //스페이스바를 누르면 콘솔화면 지움 
            system("cls");  
            break;
        }
    }
    reset1(); //1단계 실행
}

void title2() { //2단계 시작 화면
    init();
    int i, j;

    while (_kbhit()) _getch();

    draw_map2();
    for (i = MAP_Y + 1; i < MAP_Y + MAP_HEIGHT - 1; i++) { 
        for (j = MAP_X + 1; j < MAP_X + MAP_WIDTH - 1; j++) gotoxy(j, i, "  ");  // 맵 테두리 안쪽을 빈칸으로 채움 
    }

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 5, "+--------------------------+");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 6, "|         2 단 계          |");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 7, "+--------------------------+");

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 10, MAP_Y + 9, " < 시작하려면 스페이스 바를 누르세요 > ");

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 11, "   ◇ ←,→,↑,↓ : Move    ");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 12, "   ◇ P : Pause             ");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 13, "   ◇ ESC : Quit              ");

    while (1) {
        if (_kbhit())
            key = _getch();
        if (key == ESC) exit(0);

        if (key == 32) {
            system("cls");
            break;
        }
    }
    reset2();
}

void title3() { //3단계 시작 화면
    init();  
    int i, j;

    while (_kbhit()) _getch();

    draw_map3();
    for (i = MAP_Y; i < MAP_Y + MAP_HEIGHT; i++)
    {
        for (j = MAP_X; j < MAP_X + MAP_WIDTH; j++)
        {
            if (i == MAP_Y || i == MAP_Y + MAP_HEIGHT - 1 || j == MAP_X || j == MAP_X + MAP_WIDTH - 1)
            {
                gotoxy(j, i, "  "); // 테두리 부분을 빈칸으로 채움
            }
            else
            {
                gotoxy(j, i, "  "); // 내부 부분을 빈칸으로 채움
            }
        }
    }

    for (i = 0; i < MAP_WIDTH; i++) {
        gotoxy(MAP_X + i, MAP_Y, "■");  
    }
    for (i = MAP_Y + 1; i < MAP_Y + MAP_HEIGHT - 1; i++) {
        gotoxy(MAP_X, i, "■");
        gotoxy(MAP_X + MAP_WIDTH - 1, i, "■");
    }
    for (i = 0; i < MAP_WIDTH; i++) {
        gotoxy(MAP_X + i, MAP_Y + MAP_HEIGHT - 1, "■");
    }

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 5, "+--------------------------+");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 6, "|         3 단 계          |");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 7, "+--------------------------+");

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 10, MAP_Y + 9, " < 시작하려면 스페이스 바를 누르세요 > ");

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 11, "   ◇ ←,→,↑,↓ : Move    ");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 12, "   ◇ P : Pause             ");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 13, "   ◇ ESC : Quit              ");

    while (1) {
        if (_kbhit())
            key = _getch();
        if (key == ESC) exit(0);

        if (key == 32) {
            system("cls");
            break;
        }
    }
    reset3();
}

void pause(void) {
    while (1) {
        if (key == PAUSE) {
            gotoxy(MAP_X + (MAP_WIDTH / 2) - 9, MAP_Y, "<다시 시작하려면 아무 키나 누르세요 > ");
            Sleep(400);  //0.4초 대기 
            gotoxy(MAP_X + (MAP_WIDTH / 2) - 9, MAP_Y, "                                    ");
            Sleep(400); 
        }
        else {
            draw_map1();
            return;
        }
        if (_kbhit()) {
            do {
                key = _getch();
            } while (key == 224);
        }
    }
}

void food1(void) {
    int i;

    int food_crush_on = 0;//food가 뱀 몸통좌표에 생길 경우 on 
    int r = 0; //난수 생성에 사동되는 변수 
    gotoxy(MAP_X, MAP_Y + MAP_HEIGHT, " YOUR SCORE: "); //점수표시 
    printf("%3d, LAST SCORE: %3d, BEST SCORE: %3d", score, last_score, best_score);

    while (1) {
        food_crush_on = 0;
        srand((unsigned)time(NULL) + r); //난수표생성 
        food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //난수를 좌표값에 넣음 
        food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

        for (i = 0; i < length; i++) { //food가 뱀 몸통과 겹치는지 확인  
            if (food_x == x[i] && food_y == y[i]) {
                food_crush_on = 1; //겹치면 food_crush_on 를 on 
                r++;
                break;
            }
        }

        if (food_crush_on == 1) continue; //겹쳤을 경우 while문을 다시 시작 

        gotoxy(MAP_X + food_x, MAP_Y + food_y, "♪"); //안겹쳤을 경우 좌표값에 food를 찍고 
        speed -= 3; //속도 증가 
        break;
    }
}

void food2(void) {
    int i;

    int food_crush_on = 0;//food가 뱀 몸통좌표에 생길 경우 on 
    int r = 0; //난수 생성에 사동되는 변수 
    gotoxy(MAP_X, MAP_Y + MAP_HEIGHT, " YOUR SCORE: "); //점수표시 
    printf("%3d, LAST SCORE: %3d, BEST SCORE: %3d", score, last_score, best_score);

    while (1) {
        food_crush_on = 0;
        srand((unsigned)time(NULL) + r); //난수표생성 

        int quadrant = rand() % 2; // 0또는 1 값 중 하나를 선택하여 quadrant 변수에 저장
        do {
            if (quadrant == 0) { //왼쪽
                food_x = (rand() % (MAP_WIDTH / 2 - 2));
                food_y = (rand() % (MAP_HEIGHT - 2)) + 1;
            }
            else if (quadrant == 1) { //오른쪽
                food_x = (rand() % (MAP_WIDTH / 2 - 2) + (MAP_WIDTH / 2 + 1));
                food_y = (rand() % (MAP_HEIGHT - 2)) + 1;
            }
        } while (food_x == bomb1_x && food_y == bomb1_y);

        for (i = 0; i < length; i++) { //food가 뱀 몸통과 겹치는지 확인  
            if (food_x == x[i] && food_y == y[i]) {
                food_crush_on = 1; //겹치면 food_crush_on 를 on 
                r++;
                break;
            }
        }

        if (food_crush_on == 1) continue; //겹쳤을 경우 while문을 다시 시작 

        gotoxy(MAP_X + food_x, MAP_Y + food_y, "♪"); //안겹쳤을 경우 좌표값에 food를 찍고 
        speed -= 3; //속도 증가
        break;
    }
}

void food3(void) {
    int i;

    int food_crush_on = 0;//food가 뱀 몸통좌표에 생길 경우 on 
    int r = 0; //난수 생성에 사동되는 변수 
    gotoxy(MAP_X, MAP_Y + MAP_HEIGHT, " YOUR SCORE: "); //점수표시 
    printf("%3d, LAST SCORE: %3d, BEST SCORE: %3d", score, last_score, best_score);

    while (1) {
        food_crush_on = 0;
        srand((unsigned)time(NULL) + r); //난수표생성 

        int quadrant = rand() % 4; // 0부터 3까지의 값 중 하나를 선택하여 quadrant 변수에 저장

        if (quadrant == 0) { // 좌측 상단 모서리
            food_x = (rand() % (MAP_WIDTH / 2 - 4)) + 2; // 좌측 상단 절반 부분에서 난수 생성
            food_y = (rand() % (MAP_HEIGHT / 2 - 4)) + 2;
        }
        else if (quadrant == 1) { // 우측 상단 모서리
            food_x = (rand() % (MAP_WIDTH / 2 - 4)) + (MAP_WIDTH / 2 + 2); // 우측 상단 절반 부분에서 난수 생성
            food_y = (rand() % (MAP_HEIGHT / 2 - 4)) + 2;
        }
        else if (quadrant == 2) { // 좌측 하단 모서리
            food_x = (rand() % (MAP_WIDTH / 2 - 4)) + 2; // 좌측 하단 절반 부분에서 난수 생성
            food_y = (rand() % (MAP_HEIGHT / 2 - 4)) + (MAP_HEIGHT / 2 + 2);
        }
        else { // 우측 하단 모서리
            food_x = (rand() % (MAP_WIDTH / 2 - 4)) + (MAP_WIDTH / 2 + 2); // 우측 하단 절반 부분에서 난수 생성
            food_y = (rand() % (MAP_HEIGHT / 2 - 4)) + (MAP_HEIGHT / 2 + 2);
        }

        for (i = 0; i < length; i++) { //food가 뱀 몸통과 겹치는지 확인  
            if (food_x == x[i] && food_y == y[i]) {
                food_crush_on = 1; //겹치면 food_crush_on 를 on 
                r++;
                break;
            }
        }

        if (food_crush_on == 1) continue; //겹쳤을 경우 while문을 다시 시작 

        gotoxy(MAP_X + food_x, MAP_Y + food_y, "♪"); //안겹쳤을 경우 좌표값에 food를 찍고 
        speed -= 3; //속도 증가 
        break;
    }
}

void reset1(void) { //게임 끝났을 때 초기화 함수 

    system("cls"); //화면 지우기 
    draw_map1();   //게임 맵 그리기 
    while (_kbhit()) _getch();  //이전에 눌린 키 입력을 모두 무시함 

    dir = LEFT;  //뱀의 이동방향 초기값을 왼쪽으로 설정
    speed = 100;  //이동 간격을 100으로 설정
    length = 5;  //뱀의 길이 초기값을 5로 설정 
    score = 0;  //게임 점수 초기값을 0으로 설정 

    for (int i = 0; i < length; i++) { //뱀 몸통값 입력 
        x[i] = MAP_WIDTH / 2 + i;  //뱀의 몸통 x값 좌표 배열
        y[i] = MAP_HEIGHT / 2;     //뱀의 몸통 y값 좌표 배열 
        gotoxy(MAP_X + x[i], MAP_Y + y[i], "ㅇ");  //몸통은 ㅇ으로 표시
    }
    gotoxy(MAP_X + x[0], MAP_Y + y[0], "ㅎ");  //머리는 ㅎ으로 표시 
    food1();   //food함수 호출해서 음식 랜덤 생성 
}


void reset2(void) { //게임 끝났을 때 초기화 함수 

    system("cls");
    draw_map2();
    while (_kbhit()) _getch();

    dir = DOWN;
    speed = 100;
    length = 5;
    score = 0;

    for (int i = 0; i < length; i++) {
        x[i] = i + 3;  //변형된 맵에 맞추어 뱀의 좌표를 다르게 설정함 
        y[i] = 3;
        gotoxy(MAP_X + x[i], MAP_Y + y[i], "ㅇ");
    }
    gotoxy(MAP_X + x[0], MAP_Y + y[0], "ㅎ");

    start = clock() / CLOCKS_PER_SEC;  //게임 시작 시간 측정   
    end = clock() / CLOCKS_PER_SEC;  //게임 종료 시간 측정 
    food2();
}

void reset3(void) { //게임 끝났을 때 초기화 함수 

    system("cls");
    draw_map3();
    while (_kbhit()) _getch();

    dir = LEFT;
    speed = 100;
    length = 5;
    score = 0;

    //십자가 모양의 맵이기 때문에 뱀의 초기 위치를 중앙에 오지않도록 수정
    for (int i = 0; i < length; i++) {
        x[i] = i + 1;  // 왼쪽으로 이동하며 증가하는 값
        y[i] = 1;      // 맨 위쪽 위치로 고정
        gotoxy(MAP_X + x[i], MAP_Y + y[i], "ㅇ");
    }
    gotoxy(MAP_X + x[0], MAP_Y + y[0], "ㅎ");

    start = clock() / CLOCKS_PER_SEC;
    end = clock() / CLOCKS_PER_SEC;
    food3();
}

clock_t bomb1(void) {

    int quadrant = rand() % 2; // 0또는 1 값 중 하나를 선택하여 quadrant 변수에 저장

    do {
        if (quadrant == 0) { //왼쪽 맵에 폭탄 좌표 지정 
            bomb1_x = (rand() % (MAP_WIDTH / 2 - 2));
            bomb1_y = (rand() % (MAP_HEIGHT - 2)) + 1;
        }
        else if (quadrant == 1) { //오른쪽 맵에 폭탄 좌표 지정 
            bomb1_x = (rand() % (MAP_WIDTH / 2 - 2) + (MAP_WIDTH / 2 + 1));
            bomb1_y = (rand() % (MAP_HEIGHT - 2)) + 1;
        }
    } while (food_x == bomb1_x && food_y == bomb1_y);  //food와 bomb좌표가 겹칠 경우에 실행 

    gotoxy(MAP_X + bomb1_x, MAP_Y + bomb1_y, "z");  //해당 좌표에 'z' 모양 폭탄 생성 

    end = clock() / CLOCKS_PER_SEC + 3; // 3초 더한 시간으로 업데이트
    return end;
}

clock_t bomb2(void) {
    int i;

    for (i = 0; i < 3; i++) // 폭탄 3개
    {
        int quadrant = rand() % 4; // 0또는 3 값 중 하나를 선택하여 quadrant 변수에 저장
        do {
            if (quadrant == 0) { // 좌측 상단 모서리
                bomb2_x[i] = (rand() % (MAP_WIDTH / 2 - 4)) + 2; // 좌측 상단 절반 부분에서 폭탄 좌표 지정 
                bomb2_y[i] = (rand() % (MAP_HEIGHT / 2 - 4)) + 2;
            }
            else if (quadrant == 1) { // 우측 상단 모서리
                bomb2_x[i] = (rand() % (MAP_WIDTH / 2 - 4)) + (MAP_WIDTH / 2 + 2); // 우측 상단 절반 부분에서 폭탄 좌표 지정 
                bomb2_y[i] = (rand() % (MAP_HEIGHT / 2 - 4)) + 2;
            }
            else if (quadrant == 2) { // 좌측 하단 모서리
                bomb2_x[i] = (rand() % (MAP_WIDTH / 2 - 4)) + 2; // 좌측 하단 절반 부분에서 폭탄 좌표 지정 
                bomb2_y[i] = (rand() % (MAP_HEIGHT / 2 - 4)) + (MAP_HEIGHT / 2 + 2);
            }
            else { // 우측 하단 모서리
                bomb2_x[i] = (rand() % (MAP_WIDTH / 2 - 4)) + (MAP_WIDTH / 2 + 2); // 우측 하단 절반 부분에서 폭탄 좌표 지정 
                bomb2_y[i] = (rand() % (MAP_HEIGHT / 2 - 4)) + (MAP_HEIGHT / 2 + 2);
            }
        } while (food_x == bomb2_x[i] && food_y == bomb2_y[i]);  //food와 bomb2좌표가 겹칠 경우 실행 

        gotoxy(MAP_X + bomb2_x[i], MAP_Y + bomb2_y[i], "z");  //해당 좌표에 'z' 모양 폭탄 생성 
    }
    end = clock() / CLOCKS_PER_SEC + 3; // 3초 더한 시간으로 업데이트
    return end;
}

void game_over() { //게임종료 함수 

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 6, MAP_Y + 5, "+----------------------+");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 6, MAP_Y + 6, "|      GAME OVER..     |");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 6, MAP_Y + 7, "+----------------------+");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 4, MAP_Y + 8, " YOUR SCORE : ");
    printf("%d", last_score = score);

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 9, MAP_Y + 12, " 다시 시작하려면 아무 키나 누르세요 ");

    if (score > best_score) {
        best_score = score;
        gotoxy(MAP_X + (MAP_WIDTH / 2) - 4, MAP_Y + 10, "☆ BEST SCORE ☆");
    }

    Sleep(500);  //0.5초 동안 대기 
    while (_kbhit()) _getch();   //버퍼에 남아있는 입력을 처리 후 
    key = _getch();  //키 입력 받음 
    TotalTitle();  //전체 타이틀 호출 
}

void move1(int dir) { //뱀 움직이는 함수 
    int i;

    if (x[0] == food_x && y[0] == food_y) { //food와 뱀이 충돌했을 경우(음식 먹었을 경우)
        score += 10; //점수 증가 
        food1(); //새로운 food 추가 
        length++; //길이증가 
        x[length - 1] = x[length - 2]; //새로만든 몸통에 값 입력 
        y[length - 1] = y[length - 2]; 
    }

    if (x[0] == 0 || x[0] == MAP_WIDTH - 1 || y[0] == 0 || y[0] == MAP_HEIGHT - 1) { //뱀이 벽과 충돌했을 경우 
        game_over(); //게임 종료 
        return;
        //return을 사용하여 move의 나머지 부분이 실행되지 않도록 합니다. 
    }

    if (x[0] == 0 || x[0] == MAP_WIDTH - 1 || y[0])  
        gotoxy(MAP_X + x[length - 1], MAP_Y + y[length - 1], "  "); //몸통 마지막을 지움 
    for (i = length - 1; i > 0; i--) { //몸통좌표를 한칸씩 옮김 
        x[i] = x[i - 1]; 
        y[i] = y[i - 1];
    }
    gotoxy(MAP_X + x[0], MAP_Y + y[0], "ㅇ"); //머리가 있던곳을 몸통으로 고침 
    if (dir == LEFT) --x[0]; //방향에 따라 새로운 머리좌표(x[0],y[0])값을 변경 
    if (dir == RIGHT) ++x[0]; 
    if (dir == UP) --y[0];
    if (dir == DOWN) ++y[0];
    gotoxy(MAP_X + x[i], MAP_Y + y[i], "ㅎ"); //새로운 머리좌표값에 머리를 그림 
}

void move2(int dir, clock_t start, clock_t end) { //뱀 움직이는 함수 
    int i;
    start = clock() / CLOCKS_PER_SEC; // 현재 시간 업데이트
    if (score >= 20 && (double)(end - start) / CLOCKS_PER_SEC <= 0) { // end - start 값이 0보다 작거나 같을 경우 bomb 위치 재생성
        gotoxy(MAP_X + bomb1_x, MAP_Y + bomb1_y, " "); // 원래 있던 bomb 삭제
        end = bomb1(); // end 시간 업데이트
    }

    if (x[0] == food_x && y[0] == food_y) { //food와 뱀이 충돌했을 경우(음식 먹었을 경우)
        score += 10; //점수 증가 
        food2(); //새로운 food 추가 
        length++; //길이증가 
        x[length - 1] = x[length - 2]; //새로만든 몸통에 값 입력 
        y[length - 1] = y[length - 2];
    }

    //I모양 벽과 충돌했을 경우 게임종료
    if (y[0] == 0 || y[0] == MAP_HEIGHT - 1 || x[0] == 14 || x[0] == 15) {
        game_over(); //game_over에서 게임을 다시 시작하게 되면 여기서부터 반복되므로 
        return;   //return을 사용하여 move의 나머지 부분이 실행되지 않도록 합니다 
    }

    //뚫린벽 -> 반대편으로 나오게
    if (x[0] == 0 || x[0] == MAP_WIDTH - 1 || y[0])  //뱀이 뚫린 벽에 위치했을 때 
        gotoxy(MAP_X + x[length - 1], MAP_Y + y[length - 1], "  "); //몸통 마지막을 지움 
    for (i = length - 1; i > 0; i--) { //몸통좌표를 한칸씩 옮김 
        x[i] = x[i - 1];
        y[i] = y[i - 1];
    }
    gotoxy(MAP_X + x[0], MAP_Y + y[0], "ㅇ"); //머리가 있던 곳을 몸통으로 고침 

    int new_x = x[0]; // 새로운 머리 좌표
    int new_y = y[0];

    // 왼쪽 -> 오른쪽
    if (new_x == -1) {
        new_x = MAP_WIDTH - 2;
    }
    // 오른쪽 -> 왼쪽
    else if (new_x == MAP_WIDTH) {
        new_x = 1;
    }

    gotoxy(MAP_X + x[length - 1], MAP_Y + y[length - 1], "  ");  //뱀 몸통 마지막을 공백으로 처리 
    for (i = length - 1; i > 0; i--) {   //뱀의 몸통을 한 칸씩 이동시킴 
        x[i] = x[i - 1];
        y[i] = y[i - 1];
    }

    gotoxy(MAP_X + x[0], MAP_Y + y[0], "ㅇ");  //뱀의 머리였던 부분을 몸통으로 바꿈 

    //머리 위치 재정의 
    if (dir == LEFT) { 
        new_x--; 
    }
    else if (dir == RIGHT) {
        new_x++;
    }
    else if (dir == UP) {
        new_y--;
    }
    else if (dir == DOWN) {
        new_y++;
    }
    //새로운 머리 좌표 
    x[0] = new_x;
    y[0] = new_y;

    gotoxy(MAP_X + x[0], MAP_Y + y[0], "ㅎ"); // 수정된 머리 좌표에 머리를 그림

    if (x[0] == bomb1_x && y[0] == bomb1_y) { // 뱀 머리와 폭탄의 좌표가 겹치면 게임 종료
        game_over();
        return;
    }
}

void move3(int dir) { //뱀 움직이는 함수 
    int i;

    start = clock() / CLOCKS_PER_SEC; // 현재 시간 업데이트
    if ((double)(end - start) / CLOCKS_PER_SEC <= 0) { // end - start 값이 0보다 작거나 같을 경우 bomb 위치 재생성
        for (i = 0; i < 3; i++) {  
            gotoxy(MAP_X + bomb2_x[i], MAP_Y + bomb2_y[i], " "); // 원래 있던 bomb 삭제
        }
        end = bomb2(); // end 시간 업데이트
    }

    if (x[0] == food_x && y[0] == food_y) {  //food와 뱀이 충돌했을 경우(음식 먹었을 경우)
        score += 10; //점수 증가 
        food3(); //새로운 food 추가 
        length++; //길이증가 
        x[length - 1] = x[length - 2]; //새로만든 몸통에 값 입력 
        y[length - 1] = y[length - 2];
    }

    //십자가 모양 벽에 닿았을 때 게임 종료
    if (x[0] == MAP_WIDTH / 2 - 1 || x[0] == MAP_WIDTH / 2 || x[0] == MAP_WIDTH / 2 + 1 ||
        y[0] == MAP_HEIGHT / 2 - 1 || y[0] == MAP_HEIGHT / 2 || y[0] == MAP_HEIGHT / 2 + 1) {
        game_over();
        return;
    }

    //테두리 밖을 나갔을 때 뱀이 반대편으로 나오게 하기
    if (x[0] == 0 || x[0] == MAP_WIDTH - 1 || y[0])
        gotoxy(MAP_X + x[length - 1], MAP_Y + y[length - 1], "  "); //몸통 마지막을 지움 
    for (i = length - 1; i > 0; i--) { //몸통좌표를 한칸씩 옮김 
        x[i] = x[i - 1];
        y[i] = y[i - 1];
    }

    gotoxy(MAP_X + x[0], MAP_Y + y[0], "ㅇ"); // 머리가 있던 곳을 몸통으로 고침

    int new_x = x[0]; // 새로운 머리 좌표
    int new_y = y[0];

    if (new_x == 0) {
        new_x = MAP_WIDTH - 2; // 왼쪽 벽을 벗어날 경우 오른쪽 끝으로 나오도록 조정
    }
    else if (new_x == MAP_WIDTH - 1) {
        new_x = 1; // 오른쪽 벽을 벗어날 경우 왼쪽 끝으로 나오도록 조정
    }

    if (new_y == 0) {
        new_y = MAP_HEIGHT - 2; // 위쪽 벽을 벗어날 경우 아래쪽 끝으로 나오도록 조정
    }
    else if (new_y == MAP_HEIGHT - 1) {
        new_y = 1; // 아래쪽 벽을 벗어날 경우 위쪽 끝으로 나오도록 조정
    }

    gotoxy(MAP_X + x[length - 1], MAP_Y + y[length - 1], "  ");   //뱀의 몸통 마지막을 공백으로 지움 
    for (i = length - 1; i > 0; i--) {  //뱀의 몸통을 한 칸씩 이동함 
        x[i] = x[i - 1];
        y[i] = y[i - 1];
    }

    gotoxy(MAP_X + x[0], MAP_Y + y[0], "ㅇ");  //뱀의 머리였던 곳을 몸통으로 바꿈 

    //현재 이동 방향에 따라 새로운 머리의 좌표를 생성함 
    if (dir == LEFT) {  
        new_x--;  //왼쪽으로 이동 
    }
    else if (dir == RIGHT) {  
        new_x++;  //오른쪽으로 이동 
    }
    else if (dir == UP) {
        new_y--;  //위쪽으로 이동
    }
    else if (dir == DOWN) { 
        new_y++;  //아래쪽으로 이동 
    }

    x[0] = new_x;
    y[0] = new_y;

    gotoxy(MAP_X + x[0], MAP_Y + y[0], "ㅎ"); // 수정된 머리 좌표에 머리를 그림

    for (i = 0; i < 3; i++) {
        if (x[0] == bomb2_x[i] && y[0] == bomb2_y[i]) { // 뱀 머리와 폭탄의 좌표가 겹치면 게임 종료
            game_over();
            return;
        }
    }
}

void stageone() {  //1단계 게임 실행 
    title1(); 

    while (1) {
        if (_kbhit())  //키보드 입력 받음 
            do { key = _getch(); } while (key == 224);  
        Sleep(speed);

        switch (key) {  //입력된 키에 따른 동작 수행 
        case LEFT:
        case RIGHT:
        case UP:
        case DOWN:
            if ((dir == LEFT && key != RIGHT) || (dir == RIGHT && key != LEFT) || (dir == UP && key != DOWN) || (dir == DOWN && key != UP))
                dir = key;
            key = 0;
            break;
        case PAUSE:
            pause();
            break;
        case ESC:
            game_over();
        }
        move1(dir);  
    }
    return 0;
}


void stagetwo() {  //2단계 게임 실행 
    title2();

    while (1) {
        if (_kbhit())
            do { key = _getch(); } while (key == 224);
        Sleep(speed);

        switch (key) {
        case LEFT:
        case RIGHT:
        case UP:
        case DOWN:
            if ((dir == LEFT && key != RIGHT) || (dir == RIGHT && key != LEFT) || (dir == UP && key != DOWN) || (dir == DOWN && key != UP))
                dir = key;
            key = 0;
            break;
        case PAUSE:
            pause();
            break;
        case ESC:
            game_over();
        }
        move2(dir, start, end);
    }
    return 0;
}

void stagethree() {  //3단계 게임 실행 
    title3();

    while (1) {
        if (_kbhit())
            do { key = _getch(); } while (key == 224);
        Sleep(speed);

        switch (key) {
        case LEFT:
        case RIGHT:
        case UP:
        case DOWN:
            if ((dir == LEFT && key != RIGHT) || (dir == RIGHT && key != LEFT) || (dir == UP && key != DOWN) || (dir == DOWN && key != UP))
                dir = key;
            key = 0;
            break;
        case PAUSE:
            pause();
            break;
        case ESC:
            game_over();
        }
        move3(dir);
    }
    return 0;
}

void TotalTitle()
{
    init();
    int i, j;

    PlaySound(TEXT(Game_bgm), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); //배경 음악 재생 

    while (_kbhit()) _getch();

    draw_map1(); //맵 그리기
    for (i = MAP_Y; i < MAP_Y + MAP_HEIGHT; i++)
    {
        for (j = MAP_X; j < MAP_X + MAP_WIDTH; j++)
        {
            if (i == MAP_Y || i == MAP_Y + MAP_HEIGHT - 1 || j == MAP_X || j == MAP_X + MAP_WIDTH - 1)
            {
                gotoxy(j, i, "  "); // 테두리 부분을 빈칸으로 채움
            }
            else
            {
                gotoxy(j, i, "  "); // 내부 부분을 빈칸으로 채움
            }
        }
    }

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 5, "+--------------------------+");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 6, "|        S N A K E         |");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 7, "+--------------------------+");

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 10, MAP_Y + 9, " < 스테이지 번호를 고르세요 -> 1, 2, 3 > ");

    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 11, "   ◇ ←,→,↑,↓ : Move    ");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 12, "   ◇ P : Pause             ");
    gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 13, "   ◇ ESC : Quit              ");

    while (1) {
        if (_kbhit())
            key = _getch();
        if (key == ESC) exit(0);

        // 스테이지 선택
        if (key == 49) {   //49 -> 1 key
            stageone();
            break;
        }
        else if (key == 50)  //50 -> 2 key
        {
            stagetwo();
            break;
        }
        else if (key == 51)  //51 -> 3 key
        {
            stagethree();
            break;
        }
    }
    reset1();
}


int main()
{
    TotalTitle();

    return 0;
}