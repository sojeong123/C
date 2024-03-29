// 정수형 변수와 a와 b에 저장된 값이 각각 10, 6이라면 다음 문장이 실행된 이후에 변수 a에 저장된 값은 얼마인가?
//답 : 4

// 정수 24의 오른쪽 5번째 비트를 출력할 수 있게 printf()함수 안의 내용을 채워 명령어를 작성하시오.
//답 : printf("%d", 24 & 0x10);

// 다음 중에서 비주얼 스튜디오 솔루션 파일의 확장자는?
//답 : .sln

//변수 m=3, n=2인 경우, 다음 중에서 연산 결과값이 다른 하나는 무엇인가
// 보기 1) ++m-4 2) m++-2 3) --m-n 4) m---++n
//답 : 4

// 아래 출력 내용을 토대로, 10진수 정수를 입력받아서 16진수로 출력하는 프로그램을 C언어로 작성하시오.
// 출력 내용
// 10진수 정수를 입력하세요: 415
// 16진수로 출력 : 0x19f
//답 : #include <stdio.h>
//int main(void)
//{
//	int num;
//	printf("10진수 정수를 입력하세요: ");
//	scanf_s("%d", &num);
//	printf("16진수로 출력 : 0x%x", num);
//	return 0;
//}

// 다음 소스코드를 실행했을 때, printf()함수를 통해 출력되는 값을 답하시오.
// int n = 1;
// do
// {
// } while (++n <=5);
// printf("%d\n", n);
//답 : 6

// 다음 중에서 문장 printf("%#X", 15);로 출력되는 값은 무엇인가?
//답 : 0XF

// C프로그래밍에서, 아래 연산식의 결괏값은 무엇인가?
// 10 + 5 - (2 * 5) / 4 % 3
//답 : 13

//사용자로부터 숫자 n을 입력받고, 아래 공식이 성립하는 최대 k값을 계산해서 출력하는 프로그램을 C언어로 작성하시오.
// 2^k =< n
// 출력내용
// 숫자 n을 입력하세요: 15
// 최대 k값: 3
//답 : #include <stdio.h>
//int main(void)
//{
//	int n, k = 0;
//	printf("숫자 n을 입력하세요: ");
//	scanf_s("%d", &n);
//	while (1)
//	{
//		if (n >= 2)
//		{
//			n /= 2;
//			k++;
//		}
//		else
//			break;
//	}
//	printf("최대 k값: %d", k);
//	return 0;
//}

// 다음 중 가장 큰 값은?
// 1) sizeof(double) 2) sizeof(int) 3) sizeof(char) 4)sizeof(long)
//답 : 4

// 변수이름 data를 선언하면서 정수 값 100을 저장하는 문장을 작성하시오.
//답 : int data = 100;

// 다음 중에서 이항연산자가 아닌 것은 무엇인가?
// 1) / 2)sizeof 3) % 4) &&
//답 : 2

// 사용자로부터 초(Second)를 입력받아, 이를 [시, 분, 초]의 형태로 출력하는 프로그램을 C언어로 작성하시오.
// 출력내용
// 초(Second)를 입력하세요: 4300
// 1시 11분 40초
//답 : #include <stdio.h>
//int main(void)
//{
//	int sec, hour, min;
//	printf("초(Second)를 입력하세요: ");
//	scanf_s("%d", &sec);
//	hour = sec / 3600;
//	min = (sec % 3600) / 60;
//	sec = (sec % 3600) % 60;
//	printf("%d시 %d분 %d초", hour, min, sec);
//	return 0;
//}

// 다음 중에서 변수 선언 문장으로 잘못된 것은?
// 1) unsigned a, b, c;
// 2) unsigned float uf;
// 3)long int n;
// 4) double x = 10.0;
//답 : 2

// 다음 중에서 정수 상수의 표현이 잘못된 것은?
// 1) OxFF 2) 011 3) 090 4) 30
//답 : 3

// 프로그램에서 프로그램 내용에는 전혀 영향을 미치지 않는 설명문을 무엇이라 하는가? 국문 또는 영문 중 하나로 답하시오.
//답 : 주석 (Comment)

// 다음 문장에서 빈칸을 채우시오.
// "C언어는 3개의 반복문 #1, #2, for를 지원한다."
// #1 : while
// #2 : do-while

// 전기의 흐름을 표현하는 1과 흐르지 않음을 표현하는 0으로 표현되는 이 언어는 컴퓨터가 유일하게 바로 인식하는 언어이다. 이 언어는 무엇인가? 국문 또는 영문 중 하나로 답하시오.
//답 : 기계어 (Machine Language)

//다음 중에서 오류가 발생하지 않는 문장은?
// 1) const PI double = 3.14;
// 2) unsigned float = 2.67F;
// 3) int alpha =145;
// 4) int float data = 6.8F;
//답 : 3

// 다음 문장에서 그 출력 값이 다른 한 문장은 무엇인가?
// 1) printf("%d", 10);
// 2) printf("%d", 010);
// 3) printf("%d", 012);
// 4) printf("%d", 0xA);
//답 : 3

// 다음 중에서 정수형 자료형이 아닌 것은?
// 1) long double 2) long 3) short 4) int
// 답 : 1

// 다음 소스코드의 출력값은 무엇인가?
// int count =1;
// while (count <= 3)
// count++;
// printf("%d\n", count);
//답 : 4

//다음중에서 무한반복이 발생하지 않는 것은 무엇인가?
// 1) while (1){}
// 2) do {} while (1);
// 3) while(0){}
// 4) do{} while(True);
//답 : 3

// 중첩 while문을 이용하여, 구구단 2단부터 9단까지 출력하는 프로그램을 C언어로 작성하시오.
// 답 : #include <stdio.h>
//int main(void)
//{
//	int i = 2, j = 1;
//	while (i <= 9)
//	{
//		while (j <= 9)
//		{
//			printf("%d * %d = %d\n", i, j, i * j);
//			j++;
//		}
//		i++;
//		j = 1;
//	}
//	return 0;
//}

// 프로그래밍 언어란 무엇인지 설명하시오. 주의) 프로그래밍 언어의 종류를 묻는 것이 아닙니다.
//답 : 컴퓨터에게 명령을 내리기 위한 언어

// 1바이트(Btye)는 총 몇개의 구분되는 내용을 표현할 수 있는가?
//답 : 256

// 다음 중에서 결과 값이 다른 하나는 무엇인가?
// 1) (int)3.4 + (int)2.9
// 2) (double) 11/2
// 3) 17 / 3
// 4) 17 % 6
//답 : 2

// C언어의 문법을 구성하는, 그의미가 결정되어 있는 단어들을 가리켜 무엇이라 하는가? 국문 또는 영문 중 하나로 답하시오.
//답 : 키워드 (Keyword)

// 다음 소스코드를 실행했을 때, printf()함수를 통해 출력되는 값을 답하시오.
// int n = 1;
// do
// {
// } while (++n <= 5);
// printf("%d\n", n);
//답 : 6

// 다음 중에서 8진수의 표현으로 잘못된 것은?
// 1)36 2)60 3)17 4)58
//답 : 4

// 다음 소스코드의 출력값은 무엇인가?
// int count = 1;
// while (count <= 3)
// {
//	count++;
// }
// printf("%d\n", count);
//답 : 4

// 기계어를 프로그래머인 사람이 좀 더 이해하기 쉬운 기호 형태로 일대일 대응시킨 프로그래밍 언어는 무엇인가? 국문 또는 영문 중 하나로 답하시오.
//답 : 어셈블리어 (Assembly Language)

// 다음 변수 선언을 참고했을 때, 잘못된 scanf_s()문장은 무엇인가?
// int a = 0, b = 0;
// double x = 0, y = 0;
// 1) scanf_s("%d %f", &b, &x);
// 2) scanf_s("%d%d", &a, &b);
// 3) scnaf_s("%d", &a);
// 4) scanf_s("%f", &x);
//답 : 1

// 다음중에서 변수이름으로 사용할 수 없는 것은?
// 1)Employee 2) my_name 3) C# 4) year2019
//답 : 3

// C언어에서 기본 자료형을 정수형과 실수형으로 나눠서 제공하는 이유는?
//답 : 메모리의 크기가 다르기 때문

//다음 질문이 잘못된 이유를 서술하시오.
//"오른쪽으로 비트이동을 1번하면 값이 2배로 증가된다."
//답 : 부호비트가 1이면 2배로 증가되지 않는다.

// 아래의 서술 내용이 맞으면 O, 틀리면 X를 표시하시오.
// 1) 사람이 프로그래밍 언어로 컴퓨터에게 명령을 내리기 위해서는 프로그래밍 언어를 기계어로 변환하는 통역사인 운영체제가 필요하지 않는가? 