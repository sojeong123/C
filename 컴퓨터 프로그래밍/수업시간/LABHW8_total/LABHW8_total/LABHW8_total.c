
// LAB8_1
// Call-by-value와 Call-by-reference에 대한 연습이다. 아래의 프로그램을 보고 결과를 예측하시오.
// 실행 예시
// a = 20 b = 30 sum = 50
/*
#include <stdio.h>
void add_two(int x, int y, int *s)
{
	*s = x + y;
}

void main()
{
	int a = 20, b = 30;
	int sum = 0;

	// add_two 함수를 이용하여 a와 b의 합을 구하고 그 결과를 sum에 저장한다.

	add_two(a, b, &sum);
	printf("a = %d b = %d sum = %d\n", a, b, sum);
}
*/

// LAB8_2
// 

// LAB8_3_1 (제출)
// 아래의 코드는 copy()함수다.
// 즉, copy(char *s1, char *s2) 함수는 s2 문자열의 내용을 s1에 복사하는 함수이다.
// (여기서는 s1, s2의 값을 변화시키면서 코드를 작성했다)
// 실행 예시
// 첫번째 복사를 시행한후 copied의 길이와 값은 5와 abcde이다.
// 두번쨰 복사를 시행한후 copied의 길이와 값은 8와 ABCDEFGH다.
/*
# include <stdio.h>

// stringLength()함수는 s1, s2의 값을 변화시키는 코드를 작성한다.
int stringLength(char* s)
{
	int i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return i;
}

void stringCopy(char* s1, const char* s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

int main(void)
{
	char copied[500];
	char data1[] = "abcde";
	char data2[] = "ABCDEFGH";

	stringCopy(copied, data1);
	printf("첫번째 복사를 시행한후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
	stringCopy(copied, data2);
	printf("두번째 복사를 시행한후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
}
*/

// stringLength()함수는 s1, s2의 값을 변화시키지 않는 코드를 작성한다.
/*
int stringLength(char* s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}
*/

// 교수 답안
/*
# include <stdio.h>

// stringLength()함수는 s1, s2의 값을 변화시키는 코드를 작성한다.
int stringLength(char* s)
{
	int len = 0;
	while (*s1)		//'\0'인지 체크
	{
		len++;
		s1++;
	}
	return len;
}

void stringCopy(char* s1, const char* s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

int main(void)
{
	char copied[500];
	char data1[] = "abcde";
	char data2[] = "ABCDEFGH";

	stringCopy(copied, data1);
	printf("첫번째 복사를 시행한후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
	stringCopy(copied, data2);
	printf("두번째 복사를 시행한후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
}
*/

// LAB8_3_2 (제출)
// (문자열을 함수의 매개변수로 전달하는 함수를 한가지 더 연습해보자.
// 2개의 문자열을 비교해서 같으면 0을 다르면 1을 반환하는 stringEqual함수를 정의하여
// 아래의 실행결과가 나오게 하라.
// 실행 예시
// Enter the first string : Suehee
// Enter the second string : Sue
// 두개의 문자열은 다르다
// 
// Enter the first string : Suehee
// Enter the second string : Suehee
// 두개의 문자열은 같다
/*
# include <stdio.h>

// stringEqual함수는  s1, s2의 값을 변화시키는 코드를 작성한다.
int stringEqual(const char* s1, const char* s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return 1;
		s1++;
		s2++;
	}

	if (*s2 != '\0')
		return 1;
	else
		return 0;
}

void main()
{
	char string1[50];
	char string2[50];

	printf("Enter the first string : ");
	scanf_s("%s", string1);
	printf("Enter the second string : ");
	scanf_s("%s", string2);

	if (stringEqual(string1, string2) == 0)
		printf("두개의 문자열은 같다\n");
	else
		printf("두개의 문자열은 다르다\n");
}
*/

/*
// stringEqual함수는  s1, s2의 값을 변화시키지 않는 코드를 작성한다.
int stringEqual(const char* s1, const char* s2)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return 1;
		i++;
	}

	if (s2[i] != '\0')
		return 1;
	else
		return 0;
}
*/

// 교수답안
/*
# include <stdio.h>

// stringEqual함수는  s1, s2의 값을 변화시키는 코드를 작성한다.
int stringEqual(const char* s1, const char* s2)
{
	while(*s1 != '\0' || *s2 != '\0')
		if (*s1++ != *s2++)
			return 1;
	return 0;
}

void main()
{
	char string1[50];
	char string2[50];

	printf("Enter the first string : ");
	scanf_s("%s", string1);
	printf("Enter the second string : ");
	scanf_s("%s", string2);

	if (stringEqual(string1, string2) == 0)
		printf("두개의 문자열은 같다\n");
	else
		printf("두개의 문자열은 다르다\n");
}
*/

// LAB8_4

// HW 8_1
// 배열의 함수 매개변수 전달
// 아래의 실행 결과가 나오도록 프로그램을 완성하라.
// 난수 발생을 위한 seed로 현재의 시간을 이용하는 time()함수를 사용했으므로,
// 실행결과는 매번 다른 수를 보여줄 것이다.
// 실행 결과
// 엘리먼트의 합은 482
// 엘리먼트들은 54 60 69 28 54 17 65 17 50 68
// 엘리먼트들 중 가장 큰 수는 69
// 
// pa값을 변화시키는 방법

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumUpData(int *, int);
void printData(int *, int);
int maxData(int *, int);

void main()
{
	int k;
	int* p;
	int sum;

	int data[10];		// 계산 수행에 사용할 정적 변수

	p = data;			// 혹은 p = &data[0];
	srand(time(NULL));	// random값 출력에 사용하는 함수, Seed값을 부여

	for (k = 0; k < 10; k++) // Index 0..9까지
		*p++ = rand() % 100; // 데이터 초기화. 0부터 99까지의 Random 값을 출력.
	
	sum = sumUpData(data, 10);
	printf("엘리먼트의 합은 %d\n", sum);

	printf("엘리먼트들은 ");
	printData(data, 10);

	printf("\n엘리먼트들 중 가장 큰수는 %d \n", maxData(data, 10));
}

// pa를 움직이지 않는 방법
/*
int sumUpData(int* p, int size)			//int p[]로 써도 된다.
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *p;
		p++;
	}
	return sum;
}
*/

// pa를 움직이는 방법
int sumUpData(int* p, int size)			//int p[]로 써도 된다.
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *p++;
	}
	return sum;
}

// pa를 움직이지 않는 방법
/*
* 
*/

// HW 8_2 (제출)
// HW 8_3 (제출)

// 배열을 함수의 매개변수로 올기는 것
// 포인터를 움직이지 않는 것
// 포인터가 이사가는 것

// 포인터가 이사가는 것
// sum += *pa++;		// pa가 가리키는 값을 sum에 더하고 pa를 1 증가시킨다.

// 포인터를 움직이지 않는 것
// sum += *pa;			// pa가 가리키는 값을 sum에 더한다.

// 배열을 함수의 매개변수로 올기는 것
// sum += pa[i];		// pa가 가리키는 값을 sum에 더한다.