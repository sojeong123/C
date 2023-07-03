//20201012 컴퓨터학과 임소정

//2번
//고객을 다음과 같이 구분하였으며,
//각 등급에 따라 다른 할인율을 적용할 때
//등급에 따른 할인율을 출력하는 프로그램을 작성하시오.
//반드시 switch문을 사용한다.

//등급	할인율
//V(Vip)	30%
//G(Gold)	30%
//S(Silver)	20%
//F(Family)	10%
//N(Non-member)	0%

//출력 예시
//등급 입력 : G
//G등급 고객의 할인율은 30%이다.

//등급 입력 : F
//F등급 고객의 할인율은 10%이다.

//등급 입력 : N
//N등급 고객의 할인율은 0%이다.

#include <stdio.h>
int main(void)
{
	char grade;

	printf("등급 입력 : ");
	scanf_s("%c", &grade);

	switch (grade)
	{
	case 'V':
		printf("V등급 고객의 할인율은 30%%이다.\n");
		break;
	case 'G':
		printf("G등급 고객의 할인율은 30%%이다.\n");
		break;
	case 'S':
		printf("S등급 고객의 할인율은 20%%이다.\n");
		break;
	case 'F':
		printf("F등급 고객의 할인율은 10%%이다.\n");
		break;
	case 'N':
		printf("N등급 고객의 할인율은 0%%이다.\n");
		break;
	default:
		printf("잘못된 등급입니다.\n");
		break;
	}
	return 0;
}