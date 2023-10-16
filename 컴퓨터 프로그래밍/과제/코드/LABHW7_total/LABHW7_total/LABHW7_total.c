// LAB7_0
// 조사식을 사용하여 빈칸을 채워넣어보자.
// 조사식은 내가 원하는 값을 입력하여 확인하는 것이고,
// 자동은 컴파일러가 자동으로 값을 입력하여 확인하는 것이다.
/*
#include <stdio.h>
int main(void)
{
	char c = 'A';
	int n = 100;
	double d = 3.14;

	char* pC;
	int* pN;
	double* pD;

	pC = &c;
	pN = &n;
	pD = &d;

	// c, pC, *pC, n, pN, d, pD, *pD에 어떤 수가 들어가나 예상 후
	// 조사식창에 위의 이름들을 입력하여 확인
	// c: A, pC: c의 주소, *pC: c의 값(A)
	// n: 100, pN: n의 주소, *pN: n의 값(100)
	// d: 3.14, pD: d의 주소, *pD: d의 값(3.14)

	*pC = 'Z';
	*pN = 199;
	*pD = 3.1415;

	pC++;	//1byte 증가
	pN++;	//4byte 증가
	pD++;	//8byte 증가
	// pC, pN, pD의 값이 어떻게 바뀌었는가?
	// pC: c의 주소 + 1
	// pN: n의 주소 + 4
	// pD: d의 주소 + 8

	pC = pC + 2;
	pN = pN + 2;
	pD = pD + 2;
	// pC, pN, pD의 값이 어떻게 바뀌었는가?
	// pC: c의 주소 + 2
	// pN: n의 주소 + 8
	// pD: d의 주소 + 16
}
*/

// LAB7_2
/*
#include <stdio.h>
void main(void)
{
	int n[] = { -1, 1, 2, 3, 4 };
	int* p1 = n;
	int* p2 = p1;

	printf("%d\n", n[0]);		// -1
	printf("%d\n", (*p1)++);	// -1
	printf("%d\n", n[0]);		// 0

	printf("%d\n", *p2++);
	// *(간접지정 연산)과 ++은 우선순위(p69)가 같다. 이때 결합방향이 <- 이므로 오른 쪽에
	// 위치한 ++를 먼저 수행하고 그다음 *를 수행한다. 즉 *(p2++)와 같다.
	printf("%d\n", *p2);
	printf("%d\n", *++p1);
	printf("%d\n", *p1);
}
*/

// LAB7_3 (중간고사 범위 아님)
// 여지껏 포인터를 실습하면서 어렵다고, 복잡하다고 느꼈을 것이다.
// 위의 문제들은 포인터를 연습하기위한 인위적인 문제들이었다.
// 이제, 포인터의 <기본적인> 활용법을 익혀보자.
// 1차원 배열과 2차원 배열에 포인터를 활용하는 연습이다.
// A) 부분은 LAB7_1의 라)에서 다룬 부분이다.

/*
#include <stdio.h>
int main(void)
{
	int* pi;
	int arr1[] = { 10, 20, 30, 40, 50 };
	int arr2[][3] = { {1, 2, 3}, {10, 20, 30}, {100, 200, 300}, {1000, 2000, 3000} };
	int i, sum;
	sum = 0;
	pi = arr1; // pi = &arr1[0];
	for (i = 0; i < sizeof(arr1) / sizeof(int); i++)
		// A) arr1을 사용하지말고, pi를 사용하라.
		sum += *(pi + i);

	printf("The sum of arr1 elements: %d\n", sum);

	sum = 0;
	pi = (int*)arr2; // pi = &arr[0][0]
	for (i = 0; i < sizeof(arr2) / sizeof(int); i++)
		// B) arr2를 사용하지말고, pi를 사용하라.
		sum += *(pi + i);

	printf("The sum of arr2 elements: %d\n", sum);
}
*/

// LAB7_4
// (1차원 배열과 포인터)
// 크기가 10인 data 배열에 난수를 넣고(generateData 함수)
// 이를 출력하고, (printData함수)
// 엘리먼트들의 합을 구하여(totalData함수)
// 출력하는 프로그램을 작성하라.
// 주어진 변수 외에는 어떤 변수도 추가로 사용하지 마시오.
// 그리고 data는 더 사용하지말고 p나 pi를 이용하여
// (p나 pi를 변화시키면서… 교안의 예제B처럼)
// data 배열 값에 접근 / 수정한다.또한[ , ]도 더 사용하지 말라.
// 실행 예시
// 발생된 10개의 난수:
// 91 80 60 71 86 11 63 86 0 14
// 10개의 난수의 합 = 562

/*
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int data[10]; // 계산 수행에 사용할 전역 변수

int main(void)
{
	srand(200); // random 값 출력에 사용하는 함수. Seed 값을 부여
	srand(time(NULL));
	generateData();

	printf("발생된 10개의 난수:\n");
	printData();

	printf("10개 난수의 합 = %d \n", totalData());
}

// generateData 함수는 data[0]..data[9]에 난수를 넣는다.
void generateData()
{
	int k;
	int* p;
	p = data;				 //혹은 p = &data[0]
	for (k = 0; k < 10; k++) // Index 0..9까지 난수값 부여
	{
		*p = rand() % 100;   // 0..99 사이의 난수 부여
		p++;			     // 다음 엘리먼트를 가리키도록 포인터 증가
		//*p++ = rand() % 100;		이도 가능하다.
	}
}

// printData 함수는 data[0]..data[9]의 값을 출력한다.
void printData()
{
	int* pi = data;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *pi);
		pi++;
	}

	printf("\n");
}

// totalData 함수는 data[0]에서 data[9]까지의 값을 모두 더해 그 결과를 반환한다.
int totalData()
{
	int* pi = data, sum = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		sum += *pi;
		pi++;
	}

	return sum;
}
*/

// HW7_1
// (1차원 배열과 포인터)
// LAB7_4에 10개의 엘리먼트중 가장 큰수를 찾아 출력하는 기능을
// 추가하는 프로그램을 작성하라.
// 포인터를 사용하라.
// 실행 예시
// 발생된 10개의 난수:
// 91 80 60 71 86 11 63 86 0 14
// 10개 난수의 합 = 562
// 10개 난수중 가장 큰 수 = 91

/*
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // 계산 수행에 사용할 전역 변수

int main(void)
{
	srand(200); // random 값 출력에 사용하는 함수. Seed 값을 부여
	srand(time(NULL));
	generateData();

	printf("발생된 10개의 난수:\n");
	printData();

	printf("10개 난수의 합 = %d \n", totalData());
	printf("10개 난수중 가장 큰 수 = %d \n", maxData());
}

// generateData 함수는 data[0]..data[9]에 난수를 넣는다.
void generateData()
{
	int k;
	int* p;
	p = data;				 //혹은 p = &data[0]
	for (k = 0; k < 10; k++) // Index 0..9까지 난수값 부여
	{
		*p = rand() % 100;   // 0..99 사이의 난수 부여
		p++;			     // 다음 엘리먼트를 가리키도록 포인터 증가
		//*p++ = rand() % 100;		이도 가능하다.
	}
}

// printData 함수는 data[0]..data[9]의 값을 출력한다.
void printData()
{
	int* pi = data;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *pi);
		pi++;
	}

	printf("\n");
}

// totalData 함수는 data[0]에서 data[9]까지의 값을 모두 더해 그 결과를 반환한다.
int totalData()
{
	int* pi = data, sum = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		sum += *pi;
		pi++;
	}

	return sum;
}

// maxData 함수는 data[0]에서 data[9]까지의 값중 가장 큰 값을 반환한다.
int maxData()
{
	int* pi = data, max = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		if (*pi > max)
			max = *pi;
		pi++;
	}

	return max;
}
*/

// HW7_2
// (2차원 배열과 포인터)
// 다음와 같은 2차원 배열int data[3][10]에
// 0에서 99사이의 난수를 저장한후(generateData함수)
// 출력하고(printData함수)
// 전체의 합을 계산(totalData함수)해서
// 출력하는 프로그램을 작성하라.
// 실행 예시
// 91 80 60 71 86 11 63 86  0 14
// 40 42 37 46 22 31 59 46 92 22
// 17 18 65  2  0 23 50 77 70 91
//
// 전체의 합은 : 1412

/*
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
static int data[3][10]; // 계산 수행에 사용할 정적 변수

void main()
{
	srand(200); // random 값 출력에 사용하는 함수. Seed 값을 부여
	srand(time(NULL));
	generateData();
	printData();
	printf("전체의 합은: %d\n", totalData());
}

void generateData()
{
	int* p = &data[0][0];
	int i;
	for (i = 0; i < 30; i++)
	{
		*p = rand() % 100;
		p++;
	}
}

void printData()
{
	int i, j;
	int* p = &data[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", *p);
			p++;
		}
		printf("\n");
	}
}

int totalData()
{
	int* p = &data[0][0];
	int i, total = 0;
	for (i = 0; i < 30; i++)
	{
		total += *p;
		p++;
	}
	return total;
}
*/

// LAB1(재귀)

// LAB2(재귀)
// 10진수를 2진수로 변환하여 출력하는 함수를 재귀호출로 작성하시오.
// void to_binary(int n);
// 실행 예시
// 16
// 10000
//
// 15
// 1111

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void to_binary(int n);

void main()
{
	int n;
	printf("");
	scanf("%d", &n);
	to_binary(n);
	printf("\n");
}

void to_binary(int n)
{
	if (n == 0)
		return;
	else
	{
		to_binary(n / 2);
		printf("%d", n % 2);
	}
}
*/

// HW6_2 (문자열)
// 적당한 길이의 문자열을 입력받아서,
// 그 안에 존재하는 숫자들의 총합을 계산하여 출력하는 프로그램을 작성하라.
// ‘0’의 아스키값은 48임을 활용하라.
// 예를 들어, ‘1’은 49값을 갖으므로 ‘1’ - 48 계산을 통해서 1이라는 숫자 값을 얻을 수 있음을 참고하라.
// 실행 예시
// Enter one word : ab3cd4e56f
// 안에 있는 숫자들의 합은 18
// 
// Enter one word : Dongduk2010
// 안에 있는 숫자들의 합은 3

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
	char str[MAX];
	int i, sum = 0;

	printf("Enter one word : ");
	scanf("%s", str);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			sum += str[i] - '0';
	}

	printf("안에 있는 숫자들의 합은 %d\n", sum);
}
*/

// HW6_3
// (문자열 palindrome 만들기)
// 문자열(word)을 입력받아 그 속의 문자들을 거꾸로 하여
// 문자열(newWord)을 만들어 출력하는 프로그램을 작성하라.
// 실행 예시
// Enter one word : abcde
// The reversed word is edcba

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, len;

	printf("Enter one word : ");
	scanf("%s", word);

	len = strlen(word);
	for (i = 0; i < len; i++)
	{
		newWord[i] = word[len - i - 1];
	}
	newWord[i] = '\0';

	printf("The reversed word is %s\n", newWord);
}
*/

// Challenge6b
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* word) {
	int answer = 0;
	int i, j;
	int len = strlen(word);
	int count = 0;
	int sum = 0;

	for (i = 0; i < len; i++) {
		if (word[i] >= '0' && word[i] <= '9') {
			count++;
		}
		else {
			if (count > 0) {
				char* temp = (char*)malloc(sizeof(char) * (count + 1));
				for (j = 0; j < count; j++) {
					temp[j] = word[i - count + j];
				}
				temp[j] = '\0';
				sum += atoi(temp);
				free(temp);
				count = 0;
			}
		}
	}

	if (count > 0) {
		char* temp = (char*)malloc(sizeof(char) * (count + 1));
		for (j = 0; j < count; j++) {
			temp[j] = word[i - count + j];
		}
		temp[j] = '\0';
		sum += atoi(temp);
		free(temp);
		count = 0;
	}

	answer = sum;

	return answer;
}

int main(void)
{
	char word[81];
	int total;

	printf("Enter one word : ");
	scanf("%s", word);
	total = solution(word);
	printf("글자 안의 수의 합은 %d\n", total);

	return 0;

}
*/

// Project 01
// (4주차 21p)
// (배열과 함수)
//  정수형 집합 두 개를 입력 받고
// 입력 받은 두 개의 집합을 이용하여 합집합, 교집합, 차집합 연산을 수행하고
// 그 결과를 출력하는 것이다.
// 이 때 중요한 것은 집합의 원소는 중복될 수 없다는 것이다.
// 집합의 최대 크기는 MAX_SET_SIZE로 정의되고, 입력받을 집합 두 개를 각각 setA, setB라 하자.
// 합집합, 교집합, 차집합의 결과를 저장하기 위한 변수를 setC로 정의한다.
// sizeA, sizeB, sizeC는 각 집합의 크기이다.
// 
// 실행 예시
// Enter the size of Set A : 4
// Enter the number for Set A <1/4>: 1
// Enter the number for Set A <2/4>: 2
// Enter the number for Set A <3/4>: 2								//중복입력
// It is redundant. Please retry.
// Enter the number for Set A <3/4>: 3
// Enter the number for Set A <4/4>: 4
// Enter the size of Set B : 3
// Enter the number for Set B <1/3>: 1
// Enter the number for Set B <2/3>: 2
// Enter the number for Set B <3/3>: 2
// It is redundant. Please retry.
// Enter the number for Set B <3/3>: 3
// Set A : < 1, 2, 3, 4 >												//집합 A 출력
// Set B : < 1, 2, 3 >												//집합 B 출력
// Union of SetA and SetB : < 1, 2, 3, 4 >							//합집합
// Intersection of SetA and SetB : < 1, 2, 3 >						//교집합
// Set-theoretic difference of SetA and SetB <SetA - SetB> : < 4 >	//차집합

/*
#include <stdio.h>
#include <stdlib.h>

#define MAX_SET_SIZE 100
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

int hasElement(int set[], int size, int element);
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]);
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[]);
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[]);
void printSet(int set[], int size);
int addOneElement(int set[], int size, int element);

int main(int argc, char* argv[])
{
	int i;

	int setA[MAX_SET_SIZE];
	int setB[MAX_SET_SIZE];
	int setC[MAX_SET_SIZE * 2];

	int sizeA;
	int sizeB;
	int sizeC;

	printf("Enter the size of Set A:");
	scanf_s("%d", &sizeA);
	i = 0;
	while (i < sizeA)
	{
		printf("Enter the number for Set A (%d/%d):", i + 1, sizeA);
		scanf_s("%d", &setA[i]);
		i = addOneElement(setA, i, setA[i]);
	}

	printf("Enter the size of Set B:");
	scanf_s("%d", &sizeB);
	i = 0;
	while (i < sizeB)
	{
		printf("Enter the number for Set B (%d/%d):", i + 1, sizeB);
		scanf_s("%d", &setB[i]);
		i = addOneElement(setB, i, setB[i]);
	}

	printf("Set A: ");
	printSet(setA, sizeA);
	printf("Set B: ");
	printSet(setB, sizeB);

	sizeC = setUnion(setA, sizeA, setB, sizeB, setC); // Union, setC is the result set
	printf("Union of setA and setB: ");
	printSet(setC, sizeC);

	sizeC = setIntersecton(setA, sizeA, setB, sizeB, setC); //Intersection, setC is the result set
	printf("Intersection of setA and setB: ");
	printSet(setC, sizeC);

	sizeC = setComplements(setA, sizeA, setB, sizeB, setC); //Complements, setC is the result set
	printf("Set-theoretic difference of setA and setB (setA - setB): ");
	printSet(setC, sizeC);

	return 0;
}

// If the set has the element, returns 1;
// else return 0;
int hasElement(int set[], int size, int element)
{
	int i = 0;
	for (i = 0; i < size; i++)
		if (set[i] == element)
			return HAVE_ELEMENT; // we found it!

	return DO_NOT_HAVE_ELEMENT;
}

// 원소를 집합에 추가. 이미 존재하면 추가하지 않고 redundant라고 출력한다. 현재의 집합 크기를 반환한다.
int addOneElement(int set[], int size, int element)
{
	if (hasElement(set, size, element) == HAVE_ELEMENT)
	{
		printf("It is redundant. Please retry.\n");
		return size;
	}
	else
	{
		set[size] = element;
		return size + 1;
	}
}

// 집합을 출력한다.
void printSet(int set[], int size)
{
	int i;
	printf("< ");
	for (i = 0; i < size; i++)
	{
		printf("%d", set[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf(" >\n");
}

// 합집합을 구한다. setResult는 결과 집합이다. 결과 집합의 크기를 반환한다.
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i, j, size = 0;
	for (i = 0; i < size1; i++)
	{
		setResult[size] = set1[i];
		size++;
	}
	for (i = 0; i < size2; i++)
	{
		if (hasElement(setResult, size, set2[i]) == DO_NOT_HAVE_ELEMENT)
		{
			setResult[size] = set2[i];
			size++;
		}
	}
	return size;
}

// 교집합을 구한다. setResult는 결과 집합이다. 결과 집합의 크기를 반환한다.
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i, j, size = 0;
	for (i = 0; i < size1; i++)
	{
		if (hasElement(set2, size2, set1[i]) == HAVE_ELEMENT)
		{
			setResult[size] = set1[i];
			size++;
		}
	}
	return size;
}

// 차집합을 구한다. setResult는 결과 집합이다. 결과 집합의 크기를 반환한다.
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i, j, size = 0;
	for (i = 0; i < size1; i++)
	{
		if (hasElement(set2, size2, set1[i]) == DO_NOT_HAVE_ELEMENT)
		{
			setResult[size] = set1[i];
			size++;
		}
	}
	return size;
}
*/

// LAB1 (재귀)
// 자연수 n을 입력받아,
// sum = "(1*10+2) + (2*10+2) + (3*10+2) + ... + (n*10+2)의 합"을 계산하는 프로그램을 재귀호출로 작성하시오.
// 실행 예시
// 5			// 입력
// 160			// 출력
// 
// 6			// 입력
// 222			// 출력

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int n);

void main()
{
	int n;
	printf("");
	scanf("%d", &n);
	printf("%d", sum(n));
}

int sum(int n)
{
	if (n == 1)
		return 12;
	else
		return sum(n - 1) + n * 10 + 2;
}
*/