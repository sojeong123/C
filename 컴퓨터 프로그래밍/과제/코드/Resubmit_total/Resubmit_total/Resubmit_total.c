// HW1_1
// (for 문, 배열, rand()함수)
// 0 부터 9 까지의 출현 회수를 세어 출력하는 부분을 추가하라.
// 0 부터 9 까지의 개수를 세기위해 크기가 10 인 정수형 배열 count 를 사용하라.
// 즉, count[0]에 0 의 개수 저장, … , count[9]에 9 의 개수 저장
// 실행 예시
// Enter the number of random numbers<<=100> : 10
// 0의 개수는 1
// 1의 개수는 0
// 2의 개수는 1
// 3의 개수는 0
// 4의 개수는 3
// 5의 개수는 1
// 6의 개수는 2
// 7의 개수는 0
// 8의 개수는 1
// 9의 개수는 1
// -----------------------------------------------
// 발생된 난수는
//	  6     5     4     9     2
//    8     4     0     6     4
// 
// 출력되는 난수의 개수를 생성된 난수의 최대값까지만 출력하지 말고,
// 0 부터 9 까지의 개수를 출력하라.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int count[10], data[100], num, i;
	srand(time(NULL));

	printf("Enter the number of random numbers(<=100): ");
	scanf("%d", &num);

	for (i = 0; i < 10; i++)
		count[i] = 0;

	for (i = 0; i < num; i++)
	{
		data[i] = rand() % 10;
		switch (data[i])
		{
		case 0:
			count[0]++;
			break;

		case 1:
			count[1]++;
			break;

		case 2:
			count[2]++;
			break;

		case 3:
			count[3]++;
			break;

		case 4:
			count[4]++;
			break;

		case 5:
			count[5]++;
			break;

		case 6:
			count[6]++;
			break;

		case 7:
			count[7]++;
			break;

		case 8:
			count[8]++;
			break;

		case 9:
			count[9]++;
			break;
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d의 개수는 %d\n", i, count[i]);
	printf("---------------------------------------\n");
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++)
	{
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}
	return 0;
}
*/

// HW1_2
// (응용) 자판기 프로그램 : 거스름돈 계산하기
// 주어진 거스름돈에 대해서 어떤 동전으로 거슬러 줄지를 계산하는 프로그램이다.
// 동전은 500 원, 100 원, 50 원, 10 원짜리 동전이 있으며,
// 거슬러 주는 동전의 개수를 최소한으로 하는 것을 목적으로 한다.
// 예를 들어 100 원을 거슬러 줄 경우,
// 10 원짜리 10 개를 거슬러 주는 것이 아니라, 100 원짜리 1 개를 거슬러 주어야 한다.
// 
// 1. 각 동전의 금액은 coins 라는 배열에 저장되어 있다.
// 2. int coins[4] = { 500, 100, 50, 10 };
// 3. 돌려주어야 할 금액이 change 이라는 변수에 저장되어 있다고 가정하면
// 4. 일단 금액이 큰 동전부터 시작한다.
// 5. 동전의 액면 금액(예를 들면, 500 원)으로 나누었을 때, 몫이 거슬러주어야 할 동전의 개수가 된다.
// 6. change 에 액면 금액으로 나눈 나머지를 넣고 다음 동전으로 넘어간다.
// 
// 실행 예시
// Enter the amount of change : 580
// 500 coin : 1
// 100 coin : 0
// 50 coin : 1
// 10 coin : 3
// 
// Enter the amount of change : 1340
// 500 coin : 2
// 100 coin : 3
// 50 coin : 0
// 10 coin : 4
// 
//위의 코드를 배열을 사용하여 다시 작성하시오.

//내가 한 것
/*
#include <stdio.h>
int main(void)
{
	int change, i;
	int coin[4] = { 500, 100, 50, 10 };

	printf("Enter the amount of change : ");
	scanf_s("%d", &change);

	for (i = 0; i < 4; i++)
	{
		printf("%d coin : %d\n", coin[i], change / coin[i]);
		change = change % coin[i];
	}

	return 0;
}
*/

//교수 답안
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int coins[4] = { 500, 100, 50, 10 };
	int change, coin;

	printf("Enter the amount of change : ");
	scanf("%d", &change);

	for (int i = 0; i < 4; i++)
	{
		coin = change / coins[i];
		printf("%d coin : %d\n", coins[i], coin);
		change = change % coins[i];
	}
	return 0;
}
*/

// 21년 프논이 학기말 4_2
// 대문자들에 대해서
// A는 1, B는 2, C는 3, …, Z는 26으로 수를 부여할 수 있다.
// 주어진 단어(대문자로 구성된) (크기가 20미만)에 대해서
// 위의 매칭 방법대로 암호화하려한다.
// 예를 들어, 주어진 단어가 ABD면 암호화의 결과는 124가 된다.
// 단어는 대문자로만 이루어진다.
// 단어는 A부터 Z의 문자로 이루어진다.
// A부터 Z의 문자로 이루어진 문자열 s를 숫자들로 된 문자열 e로 바꾸는
// 함수 changeToDigitEncode를 작성하라.
// 실행 예시
// AZ
// 126			//A:1, Z:26
// 
// BTS
// 22019		//B:2, T:20, S:19

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeToDigitEncode(char s[], char e[]);

int main(void)
{
	char str[20];
	char encoding_str[39];

	scanf("%s", str);
	changeToDigitEncode(str, encoding_str);
	printf("%s", encoding_str);
	
	return 0;
}

void changeToDigitEncode(char s[], char e[])
{
	int i, j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'I')
			e[j++] = s[i] - 'A' + '1';
		else if (s[i] <= 'S')
		{
			e[j++] = '1';
			e[j++] = s[i] - 'J' + '0';
		}
		else
		{
			e[j++] = '2';
			e[j++] = s[i] - 'T' + '0';
		}
	}
	e[j] = '\0';

	return;
}
*/

// 21년 프논이 학기말 5
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isHiddenPassword(char passwd[], char input[])
{
	int i, j;

	j = 0;
	for (i = 0; input[i] != '\0'; i++)
		if (input[i] == passwd[j])
			j++;
	if (passwd[j] == '\0')
		return (1);
	else
		return (0);
}

int main(void)
{
	char passwd[20], input[20];
	int i;
	scanf("%s", passwd);
	for (i = 0; i < 3; i++) {
		scanf("%s", input);
		if (isHiddenPassword(passwd, input))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
*/