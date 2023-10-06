//20201012 컴퓨터학과 임소정

// LAB6_0 (문자열의 정의, 표준출력, 문자열 종료방법)
// 다음 예제 프로그램의 결과를 예상해 보세요.
// 그리고 프로그램을 실행한 후 자신의 예상 결과와 비교해 보세요
// 1)2)3)4)를 잘 살펴보라.

/*
#include <stdio.h>
int main(void)
{
	int i;

	// 1) 문자열을 정의하는 여러가지 방법들입니다.
	char digits[] = "0123456789";
	char abc[] = { 'A', 'B', 'C', 'D', '\0' };
	char lan[5] = "java";

	// 2) 출력 결과는?
	printf("%s %s\n", digits, abc);		//%s를 사용한다.

	// 3) 아래처럼 lan 문자열변수를 2가지 방법으로 출력할 수 있다.
	//	  %c와 %s의 쓰임새에 주목하라.
	printf("%s\n", lan);

	for (i = 0; lan[i] != '\0'; i++)	// A)문자열의 마지막을 확인하는 방법을 유의해보라.
		printf("%c", lan[i]);

	// 4) digits[]의 중간에 null character를 삽입하면
	digits[6] = '\0';
	printf("\n%s\n", digits);
	
	return 0;
}
*/

// LAB6_a_1
//하나의 문자열 변수 word를 읽어들여서 (%s 사용),
// 이를 출력(%s 사용)하는 간단한 프로그램을 작성하라.
// word의 길이는 최대 10이라 가정하자.
// 즉, char word[11]이라 선언하여 사용하면 된다.
// 
// 실행 예시
// Enter a word(<= 10 chars) : Happy
// Happy

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char word[11];

	printf("Enter a word(<= 10 chars) : ");
	scanf("%s", word);
	printf("%s\n", word);

	return 0;
}
*/

// LAB6_a_2
// 위의 프로그램을 수정하여 출력할 때, word안의 문자를 하나하나를 출력하도록 하라.
// 즉, 실행 예시는 그대로이다.
// (위의 Lab6_0의 A부분을 참조하라.)


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char word[11];
	int i;

	printf("Enter a word(<= 10 chars) : ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		printf("%c", word[i]);
	printf("\n");

	return 0;
}

