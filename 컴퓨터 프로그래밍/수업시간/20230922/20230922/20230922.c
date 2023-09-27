//Page
//LAB4_1

//LAB4_1_1 (main함수만 있고, 나머지는 function.c에 있음.)
/*
#include <stdio.h>
float g_i = 10.0;		//전역변수
extern float sum_2(float a, float b);

int main(void)
{
	fprintf(stdout, "계산 결과는 %f 입니다.\n", sum_2(10, 20));
	return 0;
}
*/

// 4주차 강의자료
// Page 11 오른쪽 아래 (재귀함수 관련 내용)
// 5! = 5 * 4!
// f(5) = 5 * f(4)
// f(5) = 5 * 4 * f(3)
// f(5) = 5 * 4 * 3 * f(2)
// f(5) = 5 * 4 * 3 * 2 * f(1)
// 즉, ()안의 값이 0일때, 그 값이 1이다.
// 큰 수를 계산하는 방법을 모르기 때문에,
// 가장 작은 값을 알고 계속 반환하는 것이다.
// = 그것이 재귀호출이다.
// 그렇다면 언제까지 반복하는가?
// 재귀호출 탈출조건을 달성할 때까지 반복한다.
// f(n) = n * f(n-1)

//Page 15 (왼쪽)
//반복 VS 순환

//반복적 방법
/*
int factorial(int n)
{
	int i, result = 1;
	for (i = n; i >= n; i--)
		result *= i;
	return result;
}
*/

//재귀적(순환적) 방법
/*
int factorial(int n)
{
	if (n == 0)
		return 1;	//n<=1;으로 했을 때도 같은 결과가 나온다.
	else
		return n * factorial(n - 1);
}
*/

//Page 15 (오른쪽)
//연습
// 다음은 재귀적으로 정의가 가능한가? 정의식은?

// (가)
// 1 + 2 + ... + n
//=n + n-1 + ... + 1
//=5 + 4 + 3 + 2 + 1  
//
// F(0) = 0 (if n = 0)
// F(n) = n + F(n-1) (if n > 0)

//(나)
// 1 + 1/2 + 1/3 + … + 1/n
// F(1) = 1 (if n = 1)
// F(n) = 1/n + F(n-1) (if n > 1)

//(다)
// 2^n
// F(0) = 1 (if n = 0)
// F(n) = 2 * F(n-1) (if n > 0)

//(라)
// x^y
// F(x, 0) = 1 (if y = 0)
// F(x, y) = x * F(x, y-1) (if y > 0)

//LAB4_1_2



