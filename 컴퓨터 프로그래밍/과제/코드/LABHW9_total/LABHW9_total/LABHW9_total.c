// LAB9_0_1
// (���� ���ڿ� �Է� �Լ��� ����)
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main(void)
{
	char ch;
	while (1)
	{
		scanf("%c", &ch); // �� 1)
		// ch = getchar(); // �� 2)
		// ch = fgetc(stdin); // �� 3)
		// ch = getch(); // �� 4)
		// ch = getche(); // �� 5)
		if (ch == 'q') break;
		_putch(ch); // printf("%c", ch), putchar(ch), fputc(ch, stdout)�� ��� ���� ���
	}
}
*/

// LAB9_0_2
// �Ʒ��� �־��� ���α׷��� ���ڵ��� �Է¹ް�
// �̸� �״�� ���(echo)�ϴ� �ܼ��� ���α׷��̴�.
// �� ���α׷��� ������ ��(^ Z, control �� Z �� ���ÿ� ����)���� ����ȴ�.
// ^ Z �� Ű���� �Է½� ������ ���� ��Ÿ����.
/*
#include <stdio.h>
#include <ctype.h> //����ó�� �Լ� ����� ����
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
// (isupper, islower, toupper, tolower �Լ��� ����)
// ���� �־��� ���α׷��� �ణ �����Ͽ� ���α׷��� �ۼ��϶�.
// ��, ������ ������, ���ڸ� �Է� �޾Ƽ� �ҹ��ڴ� �빮�ڷ�
// �빮�ڴ� �ҹ��ڷ� �ٲپ� ����ϴ� ���α׷��̴�.
// ����������� ���� getchar, putchar �� ����Ѵ�.
// ������
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
#include <ctype.h> //����ó�� �Լ� ����� ����
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
// �Է�, ��� �Լ��� fgetc, fputc �� ����Ͽ� ���� ������ �ٽ� Ǯ��.
// ������ �ݺ��� ���¸�
// while ((ch = getchar()) != ���ð�)
// putchar(ch);
// �� �ٲپ Ǯ���.
/*
#include <stdio.h>
#include <ctype.h> //����ó�� �Լ� ����� ����
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
// ���۸� ����� �ʴ� ����
/*
#include <stdio.h>
void main()
{
	char c;
	printf("Enter ���ڿ�(q�������� ���ڿ��� ������)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	printf("\n----------------------------------------------------------\n");
	printf("Enter �ι�° ���ڿ�(q�������� ���ڿ��� ������)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	putchar('\n');
}
*/

// ���۸� ���� ����
// while (getchar() != '\n'); �� ���
/*
#include <stdio.h>
void main()
{
	char c;
	printf("Enter ���ڿ�(q�������� ���ڿ��� ������)\n");
	c = getchar();
	while (!(c == 'q'))
	{
		putchar(c);
		c = getchar();
	}
	while (getchar() != '\n');
	printf("\n----------------------------------------------------------\n");
	printf("Enter �ι�° ���ڿ�(q�������� ���ڿ��� ������)\n");
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
	printf("���ڿ��� �Է��ϼ���:");
	gets(str1);
	printf("�Է��� ���ڿ��� %s\n", str1);
	printf("���ڿ��� ũ��� %d\n", strlen(str1));
}
*/

// LAB9_2b
/*
#include <stdio.h> // LAB9_2b
#include <string.h>
int main(void)
{
	char str2[5];
	printf("���ڿ��� �Է��ϼ���:");
	fgets(str2, sizeof(str2), stdin);
	printf("�Է��� ���ڿ��� %s\n", str2);
	printf("���ڿ��� ũ��� %d\n", strlen(str2));
}
*/

// LAB9_3
// (���ڿ� ó�� �Լ�)
// �ܼ� �ڵ�
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
	char delimiters[] = " ,\n\0"; // �� ���� �и� ���ڵ�(����,�޸�,�ٹٲ�,�ι���) �����Ѵ�
	char* token;

	printf("��)str1 �� ���� = %d\n", strlen(str1));
	printf(" str2 �� ���� = %d\n", strlen(str2));

	strcpy(str1, str2);
	printf("��)str1 = %s\t\tstr2 = %s\n", str1, str2);

	strncpy(str1, str3, 2); // strncpy �� �ڵ����� ��\0���� ���� ������ ��������!
	printf("��)str1 = %s\t\tstr3 = %s\n", str1, str3);

	strcat(str1, str2);
	printf("��)str1 = %s\tstr2 = %s\n", str1, str2);

	strncat(str1, str3, 2); // strncat �� ��\0���� �ڵ����� �ִ´�!
	printf("��)str1 = %s\tstr3 = %s\n", str1, str3);
	
	printf("��)%d %d %d\n", strcmp("aaa", "abc"), strcmp("aaa", "aaa"), strcmp("ddd", "ccc", str3));
	
	strcpy(str1, "111");
	n = atoi(str1) * 7;
	printf("��)str1 �� 7 �� �� ���� %d\n", n);
	
	printf("��)\n"); // �߿�!!
	n = 1;
	token = strtok(s, delimiters);
	while (token != NULL)
	{
		printf("%d ��° ��ū�� %s\n", n++, token);
		token = strtok(NULL, delimiters);
	}
}
*/

// �������� �����Ͽ� ��¹� ���� �ּ����� �ۼ�����.
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

	printf("��)str1 �� ���� = %d\n", strlen(str1)); // 6
	printf(" str2 �� ���� = %d\n", strlen(str2)); // 5

	strcpy(str1, str2);
	printf("��)str1 = %s\t\tstr2 = %s\n", str1, str2); // str1 = abcde str2 = abcde
	
	strncpy(str1, str3, 2);
	printf("��)str1 = %s\t\tstr3 = %s\n", str1, str3); // str1 = 12cde str3 = 1234
	
	strcat(str1, str2);
	printf("��)str1 = %s\tstr2 = %s\n", str1, str2); // str1 = 12cdeabcde str2 = abcde
	
	strncat(str1, str3, 2);
	printf("��)str1 = %s\tstr3 = %s\n", str1, str3); // str1 = 12cdeabcde12 str3 = 1234

	printf("��)%d %d %d\n", strcmp("aaa", "abc"), strcmp("aaa", "aaa"), strcmp("ddd", "ccc", str3)); // -1 0 1
	
	strcpy(str1, "111");
	n = atoi(str1) * 7;
	printf("��)str1 �� 7 �� �� ���� %d\n", n); // str1 �� 7�� �� ���� 777

	printf("��)\n");
	n = 1;
	token = strtok(s, delimiters);
	while (token != NULL)
	{
		printf("%d ��° ��ū�� %s\n", n++, token);
		token = strtok(NULL, delimiters);
	}
	// 1 ��° ��ū�� Life
	// 2 ��° ��ū�� is
	// 3 ��° ��ū�� short
	// 4 ��° ��ū�� but
	// 5 ��° ��ū�� art
	// 6 ��° ��ū�� is
	// 7 ��° ��ū�� long
}
*/

// LAB9_4
// (���ڿ� ó�� �Լ�, strcpy, strcat, strnpy ��)
// �Ʒ��� �������� �������� ���α׷��� �ۼ��϶�.
// ���� ���
// ����� fullname�� Pak, Suehee
// �ֹε�Ϲ�ȣ ���ڸ��� 630826
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char fullName[50];
	char lastName[50] = "Pak";
	char firstName[50] = "Suehee";

	char id[15] = "630826-2020222"; // 14 ���� ���� + '\0'
	char idFront[7];

	// fullName = "," �׸��� �̸��� �ִ´�.
	strcpy(fullName, lastName);
	strcat(fullName, ", ");
	strcat(fullName, firstName);
	printf("����� fullname�� %s\n", fullName);

	// idFront�� �ֹε�Ϲ�ȣ�� �� 6�ڸ��� �ִ´�.
	strncpy(idFront, id, 6);
	idFront[6] = '\0';
	printf("�ֹε�Ϲ�ȣ ���ڸ��� %s\n", idFront);
}
*/

// LAB9_5
// (���ڿ� ó��)(strtok, atoi �Լ� ��� ����)
// �Ʒ��� ���� �̸��� ���̸� �ϳ��� ���ڿ��� �о,
// �� �߿��� �̸����� ����ϴ� ���α׷��� �ۼ��϶�.
// �̸��� ���� ���� ���ڵ��, �׸��� ���鹮���Ŀ� ���̰� ��Ȯ�� �Էµȴ�.
// �̶��� �̸��� ���̸� �� �� �����Ƿ�,
// ���鹮�ڰ� ���ö����� ���ڵ��� �����鼭 name �� �����ؾ� �Ѵ�.
// ������
// �̸�<������� ���ĺ���� ����>�� ���̸� �Է��϶�.<��: Abba 50> : Sue 40
// �Է��� ����:
// Sue 40
// �̸��� Sue�̰� �ѱ� ���̴� 40�Դϴ�.
// 10�� �Ŀ��� 50���Դϴ�.
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50];
	int i;
	char* name, * age;
	printf("�̸�(������� ���ĺ���� ����)�� ���̸� �Է��϶�(��: Abba 50):");
	gets(str);
	puts("�Է��� ����: ");
	puts(str); // �ٷ� ����غ���.

	name = strtok(str, " ");
	age = strtok(NULL, " ");

	printf("�̸��� %s�̰� �ѱ� ���̴� %s�Դϴ�.\n", name, age);
	printf("10�� �Ŀ��� %d���Դϴ�.\n", atoi(age) + 10);
}
*/

// HW9_1
// ������ ������ ���ڿ��� �Է¹޴´�(fgets ���).
// �׷� ��
// 1. �� �ȿ� �����ϴ� ���ڵ鸸�� �� �ܾ�(alphabetString1)�� ����ϰ�,
// 2. �� �ȿ� �����ϴ� ���ڵ�� �� �ܾ�(digitString)�� ����ϰ�,
// 3. �� �ܾ� ���� �ҹ��ڴ� �빮�ڷ� �빮�ڴ� �ҹ��ڷ� �ٲ� �ܾ�(alphabetString2)�� ����ϰ�,
// 4. ���ڿ��ܾ�� ���ڴܾ �ϳ��� �ܾ�(convertedString)�� ����ϴ� ���α׷��� �ۼ��϶�.
// 
// ���� 1,2�� ���� ������ �� 3,4�� ���ʷ� �����϶�.
// ���ڿ� �Է½� fget�� ����϶�.
// ���� ó�� �Լ� (isalpha, isdigit, isupper ��), ���ڿ� ó�� �Լ�(strcpy, strcat, strlen ��)�� ����϶�.
// 
// ������
// ���ڿ��� �Է��ϼ��� : ab1cd23e
// ���ڵ��� abcde
// ���ڵ��� 123
// ��ҹ��ڸ� �ٲ� ���ڵ��� ABCDE
// ���ڵ�� ���ڵ�� ��迭�� ���ڿ��� abcde123
// 
// ���ڿ��� �Է��ϼ��� : Dong#Duk2010Victory
// ���ڵ��� DongDukVictory
// ���ڵ��� 2010
// ��ҹ��ڸ� �ٲ� ���ڵ��� dONGdUKvICTORY
// ���ڵ�� ���ڵ�� ��迭�� ���ڿ��� DongDukVictory2010
/*
#include<stdio.h>
#include <string.h>
int main(void)
{
	char string[50]; // �ԷµǴ� ���ڿ��� ����
	char alphaString1[50]; // �Է¹��ڿ����� ���ĺ��� ����
	char alphaString2[50]; // ��ҹ��ڸ� �ٲ�
	char digitString[50];
	char convertedString[50]; // ���ڵ�� ���ڵ�� ��迭�� ���ڿ�

	printf("���ڿ��� �Է��ϼ���:");
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

	printf("���ڵ��� %s\n", alphaString1);
	printf("���ڵ��� %s\n", digitString);

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

	printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2);
	printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);
}
*/

// HW9_2
// �ֹε�Ϲ�ȣ�� �Է¹޾Ƽ�(��-���� �����ؼ� ��Ȯ�� ��Ȯ�� �Էµȴٰ� ����)
// ��ռ����� ���� �⵵�� ����ϴ� ���α׷��� �ۼ��϶�.
// ����, ������ ��ռ����� ���� 77 ��, 84 ���̴�.
// �ֹε�Ϲ�ȣ �޺κ��� ù�ڸ��� 1 �ΰ��� ����, 2 �ΰ��� �����̴�.
// 1900 ��� ����� ������� �ֹε�Ϲ�ȣ�� �ٷ�ٰ� �����Ѵ�.
// 
// �Ѳ����� ������ Ǯ���� ��������, ������ �ܰ�� ����� Ǯ���� �϶�.
// 1 �ܰ�: ����� * ***�⵵ ���̱��並 ���
// 2 �ܰ� : ���ں��̽ñ��並 ���
// 3 �ܰ� : ��� ���� 84 �� ���ϸ顦�� ���
// 
// ������
// �ֹε�Ϲ�ȣ �Է�('-'�� ����) : 630826-2020222
// ����� 1963�⵵ ���̱���.
// ���ں��̽ñ���.
// ��� ���� 84�� ���ϸ� 2047���� ��ٰ� ���˴ϴ�.
// 
// �ֹε�Ϲ�ȣ �Է�('-'�� ����) : 591225-1010123
// ����� 1959�⵵ ���̱���.
// ���ں��̽ñ���.
// ��� ���� 77�� ���ϸ� 2036���� ��ٰ� ���˴ϴ�.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char jumin[15];
	printf("�ֹε�Ϲ�ȣ �Է�('-' ����): ");
	scanf("%s", jumin);

	// �⵵ ����
	char year_str[5];
	strncpy(year_str, jumin, 2);  // �ֹε�Ϲ�ȣ �� �� �ڸ�
	year_str[2] = '\0';  // ���ڿ� ���� ǥ��
	int year = atoi(year_str);  // ���ڿ��� ������ ��ȯ

	// ���� Ȯ��
	int gender_digit = jumin[7] - '0';  // �ֹε�Ϲ�ȣ �޺κ��� ù �ڸ�

	printf("����� 19%d�⵵ ���̱���\n", year);
	if (gender_digit == 1) {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", year + 77 + 1900);
	}
	else if (gender_digit == 2) {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", year + 84 + 1900);
	}

	return 0;
}
*/


// LAB(���� �غ� : �� ����)
// ���� ���α׷��� �ۼ�����.
// ��, ��/��/��/��/�밢�� �������� 5���� ���� �������� ���θ� Ȯ���Ͽ�, �̰���� ���θ� üũ�Ѵ�.
// Player X�� Player O�� ���ʷ� 3X3ĭ���� �� �������� ��(O Ȥ�� X)�� ���� ���� �����Ѵ�.
// 
// <���>
// �� ���� �÷��̾ ������ O�� X�� ���� ���´�.
// �̹� �� ĭ�� �����ϸ� �ٽ� �Է� ����Ʈ�� �����ش�.(ȭ��ǥ)
// ������ �����ǿ� ���� �� �������� ���� ������ ������ ����
// ����, ���� ������ӿ����� ������ �����Ǹ� ������ ����
// 
// <���α׷� ����>
// �Լ�ȭ
// �� ������ ǥ�õ�(X�� O��) �������� ����ϴ� �κ��� �Լ�ȭ�϶�.
// void display(int b[][10]);
// 
// ���� ����
//	   0 1 2
//    -------------------
// 0 |
// 1 |
// 2 |
// Player X(�� ��) : 1 1
//	   0 1 2
//    -------------------
// 0 |
// 1 |   X
// 2 |
// Player O(�� ��) : 1 2
//    0 1 2
//    -------------------
// 0 |
// 1 |   X O
// 2 |
// Player X(�� ��) : 1 1
// Player X(�� ��) : 0 1
//    0 1 2
//    -------------------
// 0 |   X
// 1 |   X O
// 2 |
// Player O(�� ��) :

// ���� ���
int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i, j;
	int sum;

	// ���⿡ ��������� �Ǹ� 1�� ��ȯ�ϴ� �ڵ带 ����
	int ri, ci;

	// ���� Ž��(���� Ž���ϰ� ������ Ž��)
	sum = 1;
	ri = r;
	ci = c - 1;
	while (ci != -1 && b[ri][ci] == player)
	// player�� ���� ��
	{// ���� ���� ���� �ʰ�,...
		sum++;
		ci--;
	}
	ri = r;
	ci = c + 1;
	while (ci != BOARD_SIZE && b[ri][ci] == player)
	{// ������ ���� ���� �ʰ�,...
		sum++;
		ci++;
	}
	if (sum == 5) return 1;

	return 0;
}

dipaly(board);
do
{
	printf("Player %c(�� ��):", turn);
	scanf("%d %d", &r, &c);

	if (board[r][c] != ' ') continue;	// �̹� ���� ���� �ڸ�

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
#define BOARD_SIZE 3 // ���Ŀ� 10���� �ٲپ �����Ѵ�

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
		printf("Player %c(�� ��):", turn);
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

// �� �ٸ� diplay �Լ�
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

// HW(�������)
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

	// ���������� ���� Ȯ��
	for (int i = c + 1; i < BOARD_SIZE && b[r][i] == player; i++)
		count++;
	// �������� ���� Ȯ��
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
		printf("Player %c(�� ��):", turn);
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