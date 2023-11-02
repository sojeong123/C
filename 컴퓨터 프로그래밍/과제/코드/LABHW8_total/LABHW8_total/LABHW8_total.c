// LAB 8_3_1
/*
# include <stdio.h>
// stringLength()함수는 s1, s2의 값을 변화시키는 코드를 작성한다.
int stringLength(char* s1)
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

// LAB 8_3_2
/*
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int stringEqual(const char* s1, const char* s2)
{
	while (*s1 != '\0' && *s2 != '\0')
		if (*s1++ != *s2++)
			return 1;
	return (*s1 == '\0' && *s2 == '\0');
}

int main()
{
	char string1[50];
	char string2[50];

	printf("Enter the first string : ");
	scanf_s("%49s", string1, sizeof(string1));
	printf("Enter the second string : ");
	scanf_s("%49s", string2, sizeof(string2));

	if (stringEqual(string1, string2) == 0)
		printf("두 개의 문자열은 같다\n");
	else
		printf("두 개의 문자열은 다르다\n");

	return 0;
}

# define _CRT_SECURE_NO_WARNINGS
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
// 2차원 배열을 함수의 매개변수로 전달
// 2차원 배열 array의 엘리먼트들을 출력하고 그들 중 가장 큰 수를 출력하는 프로그램이다.
// 
// main함수에서 rowNb값을 예측해보라.
// int rowNb = sizeof(array) / sizeof(array[0]);
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_array(int pa[][3], int size)
{
	int i, j;
	for(i = 0; i < size; i++)
		for(j = 0; i < size; i++)
			printf("%d ", *(pa[i]+ j));
}

// 함수 print_array에서 매개변수인 pa를 표현한 것처럼 max_array함수도 정의하라.
int max_array(int pa[][3], int size)
{
	int i, j, max;
	max = pa[0][0];
	for (i = 0; i < size; i++)
		for (j = 0; i < size; i++)
			if (max < pa[i][j])
				max = pa[i][j];
	return max;
}

int main(void)
{
	int array[][3] = { {1, 22, 70}, {23, 80, 34}, {90, 20, 4}, {40, 99, 30} };
	int rowNb = sizeof(array) / sizeof(array[0]);

	print_array(array, rowNb);
	printf("\n가장 큰 수는 %d이다.\n", max_array(array, rowNb));
}
*/

// HW8_1
// 배열의 함수와 매개변수 전달
// 아래의 실행 결과가 나오도록 프로그램을 완성하라.
// 나머지 3개의 함수의 정의부분을 완성하라.
// 난수발생을 위한 seed로 현재의 시간을 이용하는 time함수를 사용했으므로,
// 실행결과는 매번 다른 수들을	 출력할 것이다.
// 실행 결과
// 엘리먼트의 합은 482
// 엘리먼트들은 54 60 69 28 54 17 65 17 50 68
// 엘리먼트들 중 가장 큰 수는 69

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumUpData(int*, int);
void printData(int*, int);
int maxData(int*, int);

void main()
{
	int k;
	int* p;
	int sum;

	int data[10];					// 계산 수행에 사용할 정적 변수

	p = data;						// 혹은 p = &data[0];
	srand(time(NULL));				// random 값 출력에 사용되는 함수. Seed 값을 부여

	for (k = 0; k < 10; k++)	    // Index 0..9까지
		*p++ = rand() % 100;		// 데이터 초기화. 0부터 99까지의 Random 값을 출력.

	sum = sumUpData(data, 10);
	printf("엘리먼트의 합은 %d\n", sum);

	printf("엘리먼트들은 ");
	printData(data, 10);

	printf("\n엘리먼트들 중 가장 큰수는 %d \n", maxData(data, 10));
}

int sumUpData(int *p, int size)		// int p[]로 써도 된다
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += *p++;
	return sum;
}

void printData(int* p, int size)    // int p[]로 써도 된다
{
	for (int i = 0; i < size; i++)
		printf("%d ", *p++);
}

int maxData(int* p, int size) // int p[]로 써도 된다
{
	int max = *p;
	for (int i = 0; i < size; i++)
		if (max < *p)
			max = *p;
	return max;
}
*/

// HW8_2
// 문자열을 함수의 매개변수로 전달
// 아래의 기능을 하는 ㅡㅍ로글매을 작성하라.
// - 이 두개의 이름이 같은가, 혹은 알파벳으로 앞서는가(즉, 정렬되어있는가)를 판별하여 출력하고,
// 이 이름을 붙여서 출력하고
// 이 이름안의 'u'글자를 'x'로 바꾸어 출력하라.
// 
// 실행 결과
// Enter the first nuame : Suehee
// Enter the second name : Suehee
// 두개의 이름은 같다.
// The concatenated name is SueheeSuehee
// The changed name is SxeheeSxehee
// 
// Enter the first nuame : Abba
// Enter the second name : Suehee
// 두개의 이름은 다르며 정렬되어있다.
// The concatenated name is AbbaSuehee
// The changed name is AbbaSxehee
// 
// Enter the first nuame : Suehee
// Enter the second name : Abba
// 두개의 이름은 다르며 정렬되어있지않다
// The concatenated name is SueheeAbba
// The changed name is SxeheeAbba

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// stringCompare(s1, s2)함수는
// s1과 s2가 같으면 0을, s1이 s2보다 앞서면 1을, s1이 s2보다 뒤에 있으면 -1을 반환한다.
int stringCompare(const char* s1, const char* s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
			return 1;
		else if (*s1 < *s2)
			return -1;
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return 0;
	else if (*s1 == '\0')
		return -1;
	else
		return 1;
}

// stringCat(s1, s2)함수는 s2를 s1의 뒤에 붙인다.
void stringCat(char* s1, const char* s2)
{
	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

// stringChange(s, ch, newCh)함수는 s안의 ch를 newCh로 바꾼다.
void stringChange(char* s, char ch, char newCh)
{
	while (*s)
	{
		if (*s == ch)
			*s = newCh;
		s++;
	}
}

int main(void)
{
	char name1[20];
	char name2[20];

	printf("Enter the first name : ");
	scanf("%s", name1);
	printf("Enter the second name : ");
	scanf("%s", name2);

	if (stringCompare(name1, name2) == 0)
		printf("두개의 이름은 같다.\n");
	else if (stringCompare(name1, name2) == 1)
		printf("두개의 이름은 다르며 정렬되어있지않다.\n");
	else
		printf("두개의 이름은 다르며 정렬되어있다.\n");

	stringCat(name1, name2);
	printf("The concatenated name is %s\n", name1);

	stringChange(name1, 'u', 'x');
	printf("The changed name is %s\n", name1);
}
*/

// HW8_3
// 2차원 배열을 함수의 매개변수로 전달
// LAB8_4a에서의 2차원배열 array의 엘리먼트들의 합을 구하는 함수 sum_array를 추가하라.
// int sum_array(int pa[][3], int size)		// sum_array(int(*pa)[3], int size)와 같음
// 
// 실행 결과
// 1 22 70 23 80 34 90 20 4 40 99 30
// 가장 큰 값은 99
// 엘리먼트들의 합은 513
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_array(int pa[][3], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			printf("%d ", pa[i][j]);
}

int max_array(int pa[][3], int size)
{
	int i, j, max;
	max = pa[0][0];
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			if (max < pa[i][j])
				max = pa[i][j];
	return max;
}

int sum_array(int pa[][3], int size)		// sum_array(int(*pa)[3], int size)와 같음
{
	int i, j, sum = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			sum += pa[i][j];
	return sum;
}

int main(void)
{
int array[][3] = { {1, 22, 70}, {23, 80, 34}, {90, 20, 4}, {40, 99, 30} };
	int rowNb = sizeof(array) / sizeof(array[0]);

	print_array(array, rowNb);
	printf("\n가장 큰 값은 %d\n", max_array(array, rowNb));
	printf("엘리먼트들의 합은 %d\n", sum_array(array, rowNb));
}
*/

// 7주차 강의자료 참고
// Project 4_2 (SNS 발전)
// 모든 사용자가 최대 몇 촌 관계인지 알아내는 과제를 할 것이다.
// 이번 과제는 랜덤하게 생성된 1촌 관계가 
// 몇 번의 연결을 통하면 모두 알게 되는지를 구하는 프로그램을 작성하는 것이다.
// 즉, 1촌 관계를 표시하는 행렬 A가 몇 번의 논리곱을 하면
// 모든 원소가 1이 되는지를 구하는 것이다.
// 모두가 친구가 되면(즉, 모두 1이 되면) 실행을 끝낸다.

/*
#define _CRT_SECURE_NO_WARNINGS
#define NUM_OF_MEMBERS 15			// 나중에 70, 100, 300, ..., 500, 1000으로 바꾸어 실행해보자.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int check_links(int data[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		for (j = 0; j < NUM_OF_MEMBERS; j++)
			if (data[i][j] == 0)
				return 0;
	return 1;
}

void matrix_copy(int dest[][NUM_OF_MEMBERS], int src[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		for (j = 0; j < NUM_OF_MEMBERS; j++)
			dest[i][j] = src[i][j];
}

void matrix_multiplication(int data1[][NUM_OF_MEMBERS], int data2[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS])
{
	int i, j, k;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		for (j = 0; j < NUM_OF_MEMBERS; j++)
		{
			result[i][j] = 0;
			for (k = 0; k < NUM_OF_MEMBERS; k++)
				result[i][j] += data1[i][k] * data2[k][j];
			if (result[i][j] > 0)
				result[i][j] = 1;
		}
}
void print_links(int data[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
	{
		for (j = 0; j < NUM_OF_MEMBERS; j++)
			printf("%d ", data[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int link_data[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };
	int link_data2[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };
	int link_result[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };

	int i = 0, j = 0;
	int num_of_steps = 0;
	int ALL_ONES = 0;

	//srand((unsigned int)time(NULL));
	srand(100);
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		link_data[i][i] = 1;		// 역 대각선 셀들은 모두 1로(자신은 자기 자신과 1촌)

	for (i = 0; i < NUM_OF_MEMBERS; i++)
	{
		j = 0;
		while (j < 2)
		{
			int new_link = rand() % NUM_OF_MEMBERS;
			if (new_link != i)
			{
				link_data[i][new_link] = 1;
				link_data[new_link][i] = 1;
				j++;
			}
		}
	}
	printf("\n초기 1촌 상태\n");
	print_links(link_data);		// 사용자가 70명 이상이면 출력이 매끄럽지 않으니, 주석문으로 처리한다.
	matrix_copy(link_data2, link_data);
	while (1)
	{
		num_of_steps++;

		matrix_multiplication(link_data, link_data2, link_result);

		printf("\n%d steps\n", num_of_steps);
		print_links(link_result);		// 사용자가 70명 이상이면 주석처리

		ALL_ONES = check_links(link_result);
		if (ALL_ONES) break;

		matrix_copy(link_data2, link_result);
	}
	printf("It takes %d steps.\n", num_of_steps);
}
*/