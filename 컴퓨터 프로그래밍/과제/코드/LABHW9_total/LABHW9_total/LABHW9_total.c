// LAB9_0_1
// (여러 문자열 입력 함수를 연습)
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main(void)
{
	char ch;
	while (1)
	{
		scanf("%c", &ch); // 예 1)
		// ch = getchar(); // 예 2)
		// ch = fgetc(stdin); // 예 3)
		// ch = getch(); // 예 4)
		// ch = getche(); // 예 5)
		if (ch == 'q') break;
		_putch(ch); // printf("%c", ch), putchar(ch), fputc(ch, stdout)나 모두 같은 결과
	}
}
*/

// LAB9_0_2
// 아래의 주어진 프로그램은 문자들을 입력받고
// 이를 그대로 출력(echo)하는 단순한 프로그램이다.
// 이 프로그램은 파일의 끝(^ Z, control 과 Z 를 동시에 누름)까지 실행된다.
// ^ Z 는 키보드 입력시 파일의 끝을 나타낸다.
/*
#include <stdio.h>
#include <ctype.h> //문자처리 함수 사용을 위해
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
*/

// LAB9_0_2a
// (isupper, islower, toupper, tolower 함수의 연습)
// 위에 주어진 프로그램을 약간 수정하여 프로그램을 작성하라.
// 즉, 파일의 끝까지, 문자를 입력 받아서 소문자는 대문자로
// 대문자는 소문자로 바꾸어 출력하는 프로그램이다.
// 문자입출력을 위해 getchar, putchar 를 사용한다.
// 실행결과
// Enter characters(^Z for exit):
// abcd
// ABCD
// DongDuk
// dONGdUK
// DongDuk2023
// dONGdUK2023
// ^Z
/*
#include <stdio.h>
#include <ctype.h> //문자처리 함수 사용을 위해
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	c = getchar();
	while (c != EOF)
	{
		if (isupper(c))
			putchar(tolower(c));
		else if (islower(c))
			putchar(toupper(c));
		else
			putchar(c);
		c = getchar();
	}
}
*/

// LAB9_0_2b
// 입력, 출력 함수로 fgetc, fputc 를 사용하여 위의 문제를 다시 풀자.
// 하지만 반복의 형태를
// while ((ch = getchar()) != 감시값)
// putchar(ch);
// 로 바꾸어서 풀어보자.
/*
#include <stdio.h>
#include <ctype.h> //문자처리 함수 사용을 위해
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");
	while ((c = getchar()) != EOF)
	{
		if (isupper(c))
			putchar(tolower(c));
		else if (islower(c))
			putchar(toupper(c));
		else
			putchar(c);
	}
}
*/

// LAB9_1
// 버퍼를 비우지 않는 버전
/*
#include <stdio.h>
void main()
{
	char c;
	printf("Enter 문자열(q이전까지 문자열로 인정함)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	printf("\n----------------------------------------------------------\n");
	printf("Enter 두번째 문자열(q이전까지 문자열로 인정함)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	putchar('\n');
}
*/

// 버퍼를 비우는 버전
// while (getchar() != '\n'); 를 사용
/*
#include <stdio.h>
void main()
{
	char c;
	printf("Enter 문자열(q이전까지 문자열로 인정함)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	while (getchar() != '\n');
	printf("\n----------------------------------------------------------\n");
	printf("Enter 두번째 문자열(q이전까지 문자열로 인정함)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	while (getchar() != '\n');
	putchar('\n');
}
*/

// LAB9_2
// LAB9_2a
/*
#include <stdio.h> // LAB9_2a
#include <string.h>
int main(void)
{
	char str1[5];
	printf("문자열을 입력하세요:");
	gets(str1);
	printf("입력한 문자열는 %s\n", str1);
	printf("문자열의 크기는 %d\n", strlen(str1));
}
*/

// LAB9_2b
/*
#include <stdio.h> // LAB9_2b
#include <string.h>
int main(void)
{
	char str2[5];
	printf("문자열을 입력하세요:");
	fgets(str2, sizeof(str2), stdin);
	printf("입력한 문자열는 %s\n", str2);
	printf("문자열의 크기는 %d\n", strlen(str2));
}
*/

// LAB9_3
// (문자열 처리 함수)
// 단순 코드
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char str1[15] = "ABCDED";
	char str2[15] = "abcde";
	char str3[15] = "1234";
	int n;

	char s[] = "Life is short, but art is long";
	char delimiters[] = " ,\n\0"; // 네 개의 분리 문자들(공백,콤마,줄바꿈,널문자) 지정한다
	char* token;

	printf("가)str1 의 길이 = %d\n", strlen(str1));
	printf(" str2 의 길이 = %d\n", strlen(str2));

	strcpy(str1, str2);
	printf("나)str1 = %s\t\tstr2 = %s\n", str1, str2);

	strncpy(str1, str3, 2); // strncpy 는 자동으로 ‘\0’을 넣지 않음에 주의하자!
	printf("다)str1 = %s\t\tstr3 = %s\n", str1, str3);

	strcat(str1, str2);
	printf("라)str1 = %s\tstr2 = %s\n", str1, str2);

	strncat(str1, str3, 2); // strncat 는 ‘\0’을 자동으로 넣는다!
	printf("마)str1 = %s\tstr3 = %s\n", str1, str3);
	
	printf("바)%d %d %d\n", strcmp("aaa", "abc"), strcmp("aaa", "aaa"), strcmp("ddd", "ccc", str3));
	
	strcpy(str1, "111");
	n = atoi(str1) * 7;
	printf("사)str1 를 7 배 한 값은 %d\n", n);
	
	printf("아)\n"); // 중요!!
	n = 1;
	token = strtok(s, delimiters);
	while (token != NULL)
	{
		printf("%d 번째 토큰은 %s\n", n++, token);
		token = strtok(NULL, delimiters);
	}
}
*/

// 실행결과를 예측하여 출력문 옆에 주석으로 작성하자.
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char str1[15] = "ABCDED";
	char str2[15] = "abcde";
	char str3[15] = "1234";
	int n;

	char s[] = "Life is short, but art is long";
	char delimiters[] = " ,\n\0";
	char* token;

	printf("가)str1 의 길이 = %d\n", strlen(str1)); // 6
	printf(" str2 의 길이 = %d\n", strlen(str2)); // 5

	strcpy(str1, str2);
	printf("나)str1 = %s\t\tstr2 = %s\n", str1, str2); // str1 = abcde str2 = abcde
	
	strncpy(str1, str3, 2);
	printf("다)str1 = %s\t\tstr3 = %s\n", str1, str3); // str1 = 12cde str3 = 1234
	
	strcat(str1, str2);
	printf("라)str1 = %s\tstr2 = %s\n", str1, str2); // str1 = 12cdeabcde str2 = abcde
	
	strncat(str1, str3, 2);
	printf("마)str1 = %s\tstr3 = %s\n", str1, str3); // str1 = 12cdeabcde12 str3 = 1234

	printf("바)%d %d %d\n", strcmp("aaa", "abc"), strcmp("aaa", "aaa"), strcmp("ddd", "ccc", str3)); // -1 0 1
	
	strcpy(str1, "111");
	n = atoi(str1) * 7;
	printf("사)str1 를 7 배 한 값은 %d\n", n); // str1 를 7배 한 값은 777

	printf("아)\n");
	n = 1;
	token = strtok(s, delimiters);
	while (token != NULL)
	{
		printf("%d 번째 토큰은 %s\n", n++, token);
		token = strtok(NULL, delimiters);
	}
	// 1 번째 토큰은 Life
	// 2 번째 토큰은 is
	// 3 번째 토큰은 short
	// 4 번째 토큰은 but
	// 5 번째 토큰은 art
	// 6 번째 토큰은 is
	// 7 번째 토큰은 long
}
*/

// LAB9_4
// (문자열 처리 함수, strcpy, strcat, strnpy 등)
// 아래의 실행결과가 나오도록 프로그램을 작성하라.
// 실행 결과
// 당신의 fullname은 Pak, Suehee
// 주민등록번호 앞자리는 630826
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char fullName[50];
	char lastName[50] = "Pak";
	char firstName[50] = "Suehee";

	char id[15] = "630826-2020222"; // 14 개의 문자 + '\0'
	char idFront[7];

	// fullName = "," 그리고 이름을 넣는다.
	strcpy(fullName, lastName);
	strcat(fullName, ", ");
	strcat(fullName, firstName);
	printf("당신의 fullname은 %s\n", fullName);

	// idFront에 주민등록번호의 앞 6자리를 넣는다.
	strncpy(idFront, id, 6);
	idFront[6] = '\0';
	printf("주민등록번호 앞자리는 %s\n", idFront);
}
*/

// LAB9_5
// (문자열 처리)(strtok, atoi 함수 사용 연습)
// 아래와 같이 이름과 나이를 하나의 문자열로 읽어서,
// 이 중에서 이름만을 출력하는 프로그램을 작성하라.
// 이름은 공백 없는 문자들로, 그리고 공백문자후에 나이가 정확히 입력된다.
// 이때는 이름의 길이를 알 수 없으므로,
// 공백문자가 나올때까지 문자들을 읽으면서 name 에 저장해야 한다.
// 실행결과
// 이름<공백없이 알파벳들로 구성>과 나이를 입력하라.<예: Abba 50> : Sue 40
// 입력한 정보:
// Sue 40
// 이름은 Sue이고 한국 나이는 40입니다.
// 10년 후에는 50살입니다.
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50];
	int i;
	char* name, * age;
	printf("이름(공백없이 알파벳들로 구성)과 나이를 입력하라(예: Abba 50):");
	gets(str);
	puts("입력한 정보: ");
	puts(str); // 바로 출력해본다.

	name = strtok(str, " ");
	age = strtok(NULL, " ");

	printf("이름은 %s이고 한국 나이는 %s입니다.\n", name, age);
	printf("10년 후에는 %d살입니다.\n", atoi(age) + 10);
}
*/

// HW9_1
// 적당한 길이의 문자열을 입력받는다(fgets 사용).
// 그런 후
// 1. 그 안에 존재하는 문자들만을 한 단어(alphabetString1)로 출력하고,
// 2. 그 안에 존재하는 숫자들로 한 단어(digitString)를 출력하고,
// 3. 그 단어 안의 소문자는 대문자로 대문자는 소문자로 바꾼 단어(alphabetString2)를 출력하고,
// 4. 문자열단어와 숫자단어를 하나의 단어(convertedString)로 출력하는 프로그램을 작성하라.
// 
// 위의 1,2를 먼저 성공한 후 3,4를 차례로 진행하라.
// 문자열 입력시 fget를 사용하라.
// 문자 처리 함수 (isalpha, isdigit, isupper 등), 문자열 처리 함수(strcpy, strcat, strlen 등)을 사용하라.
// 
// 실행결과
// 문자열을 입력하세요 : ab1cd23e
// 문자들은 abcde
// 숫자들은 123
// 대소문자를 바꾼 문자들은 ABCDE
// 문자들과 숫자들로 재배열한 문자열은 abcde123
// 
// 문자열을 입력하세요 : Dong#Duk2010Victory
// 문자들은 DongDukVictory
// 숫자들은 2010
// 대소문자를 바꾼 문자들은 dONGdUKvICTORY
// 문자들과 숫자들로 재배열한 문자열은 DongDukVictory2010
/*
#include<stdio.h>
#include <string.h>
int main(void)
{
	char string[50]; // 입력되는 문자열을 저장
	char alphaString1[50]; // 입력문자열에서 알파벳만 저장
	char alphaString2[50]; // 대소문자를 바꿈
	char digitString[50];
	char convertedString[50]; // 문자들과 숫자들로 재배열한 문자열

	printf("문자열을 입력하세요:");
	fgets(string, sizeof(string), stdin);

	int i = 0, j = 0, k = 0, l = 0, m = 0;
	while (string[i] != '\0')
	{
		if (isalpha(string[i]))
		{
			alphaString1[j] = string[i];
			j++;
		}
		if (isdigit(string[i]))
		{
			digitString[k] = string[i];
			k++;
		}
		i++;
	}

	alphaString1[j] = '\0';
	digitString[k] = '\0';

	printf("문자들은 %s\n", alphaString1);
	printf("숫자들은 %s\n", digitString);

	while (alphaString1[l] != '\0')
	{
		if (isupper(alphaString1[l]))
			alphaString2[l] = tolower(alphaString1[l]);
		else if (islower(alphaString1[l]))
			alphaString2[l] = toupper(alphaString1[l]);
		l++;
	}

	alphaString2[l] = '\0';

	while (alphaString1[m] != '\0')
	{
		convertedString[m] = alphaString1[m];
		m++;
	}

	while (digitString[m - l] != '\0')
	{
		convertedString[m] = digitString[m - l];
		m++;
	}

	convertedString[m] = '\0';

	printf("대소문자를 바꾼 문자들은 %s\n", alphaString2);
	printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);
}
*/

// HW9_2
// 주민등록번호를 입력받아서(‘-‘를 포함해서 정확히 정확히 입력된다고 가정)
// 평균수명을 더한 년도를 출력하는 프로그램을 작성하라.
// 남자, 여자의 평균수명은 각각 77 세, 84 세이다.
// 주민등록번호 뒷부분의 첫자리가 1 인경우는 남성, 2 인경우는 여성이다.
// 1900 년대 출생한 사람들의 주민등록번호만 다룬다고 가정한다.
// 
// 한꺼번에 문제를 풀려고 하지말고, 문제를 단계로 나누어서 풀도록 하라.
// 1 단계: 당신은 * ***년도 생이군요를 출력
// 2 단계 : 여자분이시군요를 출력
// 3 단계 : 평균 수명 84 를 더하면…를 출력
// 
// 실행결과
// 주민등록번호 입력('-'를 포함) : 630826-2020222
// 당신은 1963년도 생이군요.
// 여자분이시군요.
// 평균 수명 84를 더하면 2047까지 산다고 계산됩니다.
// 
// 주민등록번호 입력('-'를 포함) : 591225-1010123
// 당신은 1959년도 생이군요.
// 남자분이시군요.
// 평균 수명 77를 더하면 2036까지 산다고 계산됩니다.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char jumin[15];
	printf("주민등록번호 입력('-' 포함): ");
	scanf("%s", jumin);

	// 년도 추출
	char year_str[5];
	strncpy(year_str, jumin, 2);  // 주민등록번호 앞 두 자리
	year_str[2] = '\0';  // 문자열 끝을 표시
	int year = atoi(year_str);  // 문자열을 정수로 변환

	// 성별 확인
	int gender_digit = jumin[7] - '0';  // 주민등록번호 뒷부분의 첫 자리

	printf("당신은 19%d년도 생이군요\n", year);
	if (gender_digit == 1) {
		printf("남자분이시군요.\n");
		printf("평균 수명 77를 더하면 %d까지 산다고 계산됩니다.\n", year + 77 + 1900);
	}
	else if (gender_digit == 2) {
		printf("여자분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다.\n", year + 84 + 1900);
	}

	return 0;
}
*/


// LAB(오목 준비 : 말 놓기)
// 오목 프로그램을 작성하자.
// 즉, 상/하/좌/우/대각선 방향으로 5개의 돌이 연속인지 여부를 확인하여, 이겼는지 여부를 체크한다.
// Player X와 Player O가 차례로 3X3칸으로 된 게임판의 말(O 혹은 X)을 놓은 것을 구현한다.
// 
// <기능>
// 두 명의 플레이어가 번갈아 O와 X의 말을 놓는다.
// 이미 고른 칸을 선택하면 다시 입력 프롬트를 보여준다.(화살표)
// 지금은 게임판에 말이 다 놓여지면 게임 끝나는 것으로 하자
// 추후, 실제 오목게임에서는 오목이 생성되면 게임이 끝남
// 
// <프로그램 설계>
// 함수화
// 각 선택이 표시된(X와 O로) 게임판을 출력하는 부분을 함수화하라.
// void display(int b[][10]);
// 
// 실행 예시
//	   0 1 2
//    -------------------
// 0 |
// 1 |
// 2 |
// Player X(행 열) : 1 1
//	   0 1 2
//    -------------------
// 0 |
// 1 |   X
// 2 |
// Player O(행 열) : 1 2
//    0 1 2
//    -------------------
// 0 |
// 1 |   X O
// 2 |
// Player X(행 열) : 1 1
// Player X(행 열) : 0 1
//    0 1 2
//    -------------------
// 0 |   X
// 1 |   X O
// 2 |
// Player O(행 열) :

// 교수 답안
int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i, j;
	int sum;

	// 여기에 수평오목이 되면 1을 반환하는 코드를 삽입
	int ri, ci;

	// 수평 탐색(왼쪽 탐색하고 오른쪽 탐색)
	sum = 1;
	ri = r;
	ci = c - 1;
	while (ci != -1 && b[ri][ci] == player)
	// player은 놓은 말
	{// 왼쪽 선을 넘지 않고,...
		sum++;
		ci--;
	}
	ri = r;
	ci = c + 1;
	while (ci != BOARD_SIZE && b[ri][ci] == player)
	{// 오른쪽 선을 넘지 않고,...
		sum++;
		ci++;
	}
	if (sum == 5) return 1;

	return 0;
}

dipaly(board);
do
{
	printf("Player %c(행 열):", turn);
	scanf("%d %d", &r, &c);

	if (board[r][c] != ' ') continue;	// 이미 말이 놓인 자리

	board[r][c] = turn;
	display(board);

	if (win = winCheck(board, r, c))
		printf("Player %c wins!\n", turn);
	turn = (turn == 'X') ? 'O' : 'X';)
	count++;
} while(!win && count <= BOARD_SIZE * BOARD_SIZE);

if(!win && count > BOARD_SIZE * BOARD_SIZE)
	printf("Nobody wins!\n");


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 3 // 추후에 10으로 바꾸어서 진행한다

void display(char b[][BOARD_SIZE]) {
	int i, j;
	printf("    ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%d ", i);
	printf("\n");
	printf("   -------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%d |", i);
		for (j = 0; j < BOARD_SIZE; j++) {
			if (b[i][j] == ' ') {
				printf(" ");
			}
			else {
				printf("%c", b[i][j]);
			}
			printf(" ");
		}
		printf("\n");
	}
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';
	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ') {
		
			continue;
		}

		board[r][c] = turn;
		display(board);
		count++;

		if (turn == 'X')
			turn = 'O';
		else
			turn = 'X';
	} while (count <= BOARD_SIZE * BOARD_SIZE);
	return 0;
}
*/

// 또 다른 diplay 함수
/*
void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;
	printf(" ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}
*/

// HW(수평오목)
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 10

void display(char b[][BOARD_SIZE]) {
	char ch;
	int i, j;
	printf("    0 1 2 3 4 5 6 7 8 9\n");
	printf("   ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%d :", i);
		for (j = 0; j < BOARD_SIZE; j++) {
			if (b[i][j] == ' ') {
				printf("  ");
			}
			else {
				printf(" %c", b[i][j]);
			}
		}
		printf("\n");
	}
}

int winCheck(char b[][BOARD_SIZE], int r, int c) {
	int count = 1;
	char player = b[r][c];

	// 오른쪽으로 가로 확인
	for (int i = c + 1; i < BOARD_SIZE && b[r][i] == player; i++)
		count++;
	// 왼쪽으로 가로 확인
	for (int i = c - 1; i >= 0 && b[r][i] == player; i--)
		count++;

	return count >= 5;
}

int main() {
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';
	count = 1;
	display(board);
	do {
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ') {

			continue;
		}

		board[r][c] = turn;
		display(board);
		count++;

		if (winCheck(board, r, c)) {
			printf("Player %c wins!\n", turn);
			return 0;
		}

		if (count > BOARD_SIZE * BOARD_SIZE) {
			printf("Nobody wins!\n");
			return 0;
		}

		if (turn == 'X')
			turn = 'O';
		else
			turn = 'X';
	} while (1);

	return 0;
}
*/