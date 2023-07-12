//1번
//(감시값 반복 이용)
//0보다 큰 수에 대하여
//그 수들의 합이 50 이상이 될 때까지
//데이터의 합과 개수를 반복하여 입력받아
//데이터의 합과 개수를 출력하는 프로그램을 작성하라.

//0보다 큰 수가 입력될 때까지 반복해서 입력을 받는다.
//음수의 합을 계산할 때 이용되지 않는다.

//실행 예시 1
//0보다 큰(1번째) 수 입력 : -9
//0보다 큰(1번째) 수 입력 : 5
//0보다 큰(2번째) 수 입력 : 23
//0보다 큰(3번째) 수 입력 : -9
//0보다 큰(3번째) 수 입력 : 12
//0보다 큰(4번째) 수 입력 : 56
//합 = 96
//더해진 데이터의 수 = 4

//실행 예시 2
//0보다 큰(1번째) 수 입력 : 10
//0보다 큰(2번째) 수 입력 : 20
//0보다 큰(3번째) 수 입력 : 30
//합 = 60
//더해진 데이터의 수 = 3

//실행 예시 3
//0보다 큰(1번째) 수 입력 : -10
//0보다 큰(1번째) 수 입력 : -40
//0보다 큰(1번째) 수 입력 : -50
//0보다 큰(1번째) 수 입력 : 20
//0보다 큰(2번째) 수 입력 : -80
//0보다 큰(2번째) 수 입력 : 30
//합 = 50
//더해진 데이터의 수 = 2
/*
#include<stdio.h>
int main(void)
{
	int num, sum = 0, cnt = 0;

	while (1)
	{
		printf("0보다 큰(%d번째) 수 입력 : ", cnt + 1);
		scanf_s("%d", &num);

		if (num <= 0)
		{
			continue;
		}

		sum += num;
		cnt++;

		if (sum >= 50)
		{
			break;
		}
	}

	printf("합 = %d\n", sum);
	printf("더해진 데이터의 수 = %d\n", cnt);

	return 0;
}
*/

//2번
//(함수 이용)
//2자리 이상의 정수를 입력받아
//그 수가 회문인지 아닌지를 판별하는 프로그램을 작성하라.

//1)회문 여부는 isPalindrom()함수를 이용하여 판별하며, 회문이면 1, 아니면 0을 반환한다.
//2)회문(palindrom)은 앞에서 읽으나 뒤에서 읽으나 같은 수를 말한다. (예, 12321, 11, 2552)

//실행 예시 1
//2자리 이상의 정수를 입력하시오. : 123321
//123321은 회문이다.

//실행 예시 2
//2자리 이상의 정수를 입력하시오. : 12331
//12331은 회문이 아니다.

/*
#include <stdio.h>
int isPalindrom(int a);
int main(void)
{
	int num;

	printf("2자리 이상의 정수를 입력하시오. : ");
	scanf_s("%d", &num);

	if (isPalindrom(num) == 1)
	{
		printf("%d은 회문이다.\n", num);
	}
	else
	{
		printf("%d은 회문이 아니다.\n", num);
	}

	return 0;
}

int isPalindrom(int a)
{
	int i, j, k, cnt = 0;
	int arr[10] = { 0 };

	for (i = 0; i < 10; i++)
	{
		arr[i] = a % 10;
		a /= 10;
		if (a == 0)
		{
			break;
		}
	}

	for (j = 0; j <= i; j++)
	{
		if (arr[j] == arr[i - j])
		{
			cnt++;
		}
	}

	if (cnt == i + 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
*/

//3번
//(난수, 함수, 배열)
//n(50개 이하)개의 난수를 생성하여
//배열에 저장한 후 생성된 난수 중 소수만을 골라 출력하는 프로그램을 작성하시오.
//단, 난수의 범위는 10이상 99이하이다.
//소수 판별은 int isPrime(int a)를 이용하여 소수이면 1을 소수가 아니면 0을 반환하도록 한다.
//생성된 난수 중에 소수가 없으면 '소수가 없다.'라는 메세지를 출력한다.
//소수를 출력할 때 한 줄에 7개씩만 출력되도록 한다.

//실행 예시 1
//Enter the number : 50
//
//=== 원본 데이터 출력 ===
//43 87 12 57 58 97 85
//41 70 77 15 11 17 87
//31 50 18 47 23 73 54
//85 83 44 35 14 96 12
//17 97 25 64 57 23 78
//14 34 93 78 25 76 45
//47 44 20 79 72 78 12
//50
//=== 소수 데이터 출력 ===
//43 97 41 11 17 31 47
//23 73 83 17 97 23 47
//79

//실행 예시 2
//Enter the number : 5
//
//=== 원본 데이터 출력 ===
//69 97 93 78 97
//=== 소수 데이터 출력 ===
//97 97

//실행 예시 3
//Enter the number : 2
//
//=== 원본 데이터 출력 ===
//51 68
//소수가 없다.

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int isPrime(int a);
int main(void)
{
	int n, i, j, cnt = 0;
	int arr[50] = { 0 };
	int prime[50] = { 0 };

	srand(time(NULL));

	printf("Enter the number : ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 90 + 10;
	}

	printf("\n=== 원본 데이터 출력 ===\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		if ((i + 1) % 7 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");

	printf("=== 소수 데이터 출력 ===\n");
	for (i = 0; i < n; i++)
	{
		if (isPrime(arr[i]) == 1)
		{
			prime[cnt] = arr[i];
			cnt++;
		}
	}

	if (cnt == 0)
	{
		printf("소수가 없다.\n");
	}
	else
	{
		for (i = 0; i < cnt; i++)
		{
			printf("%d ", prime[i]);
			if ((i + 1) % 7 == 0)
			{
				printf("\n");
			}
		}
		printf("\n");
	}

	return 0;
}

int isPrime(int a)
{
	int i;

	if (a == 1)
	{
		return 0;
	}

	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}

	return 1;
}
*/

//4번
//(문자열 배열)
//모음과 자음만으로 구성된 하나의 문자열을 입력받아
//그 문자열 중에서 자음과 모음을 각각 분리하여
//새로운 문자열로 만든후 각각을 출력하는 프로그램을 작성하라.

//1)입력받는 문자열의 최대 길이는 40으로 한다.
//2)알파벳26개 글자 중 모음은 a, e, i, o, u 5개이다.
//3)대문자는 모두 소문자로 변환한다.
//4)모음과 자음을 분리하여 새로운 문자열을 만들지않고 바로 출력하면 안된다.

//실행 예시 1
//Enter the String : AaBbCcEeXx
//
//원본 문자열 : AaBbCcEeXx
//모음만 추출 : aaee
//자음만 추출 : bbccxx

//실행 예시 2
//Enter the String : BCDXYZ
//
//원본 문자열 : BCDXYZ
//모음만 추출 :
//자음만 추출 : bcdxyz

//실행 예시 3
//Enter the String : ComputerScience
//
//원본 문자열 : ComputerScience
//모음만 추출 : oueiee
//자음만 추출 : cmptscnc

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[41] = { 0 };
	char vowel[41] = { 0 };
	char consonant[41] = { 0 };
	int i, j = 0, k = 0;

	printf("Enter the String : ");
	scanf_s("%s", str, sizeof(str));

	printf("\n원본 문자열 : %s\n", str);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'a' || str[i] == 'A' ||
			str[i] == 'e' || str[i] == 'E' ||
			str[i] == 'i' || str[i] == 'I' ||
			str[i] == 'o' || str[i] == 'O' ||
			str[i] == 'u' || str[i] == 'U')
		{
			vowel[j] = str[i];
			j++;
		}
		else
		{
			consonant[k] = str[i];
			k++;
		}
	}

	for (i = 0; i < strlen(vowel); i++)
	{
		if (vowel[i] >= 'A' && vowel[i] <= 'Z')
		{
			vowel[i] += 32;
		}
	}

	for (i = 0; i < strlen(consonant); i++)
	{
		if (consonant[i] >= 'A' && consonant[i] <= 'Z')
		{
			consonant[i] += 32;
		}
	}

	printf("모음만 추출 : %s\n", vowel);
	printf("자음만 추출 : %s\n", consonant);

	return 0;
}
*/

//5번
//실행 예시 1
//Enter a number : 20
//Enter a number : 10
//Enter a number : 50
//Enter a number : 30
//Enter a number : 25
//
//데이터 : 20 10 50 30 25
//평균은 27.
//
//평균과의 거리 : 7 17 23 3 2
//50 : **************************************************
//25 : *************************

//실행 예시 2
//Enter a number : 20
//Enter a number : 15
//Enter a number : 25
//Enter a number : 50
//Enter a number : 30
//
//데이터 : 20 15 25 50 30
//평균은 28.
//
//평균과의 거리 : 8 13 3 22 2
//50 : **************************************************
//30 : *************************


//(숫자열 배열, 함수)
//양의 정수 5개를 배열에 저장한 후
//평균을 구하여 평균과 거리가 가장 가까운 수와
//평균과 거리가 가장 먼 수를 구하여
//그 수만큼 별을 출력하는 프로그램을 작성하라.

//1)입력되는 수는 1이상 50이하다.
//2)입력받은 수를 출력하기 위해, printArray()함수를 만들어 사용한다.
//3)평균으로부터 거리가 가장 먼 수를 찾아 반환하기 위해, getMax()함수를 만들어 사용한다.
//4)평균으로부터 거리가 가장 가까운 수를 찾아 반환하기 위해, getMin()함수를 만들어 사용한다.
//5)거리가 같은 경우 어떤 것을 선택해도 된다.
//6)평균과 가장 가까운 수와 평균과 가장 먼 수만큼 별(*)을 출력하기 위해 printStar()함수를 만들어 사용한다.
//7)조건은 제시한 함수 외에 다른 함수가 필요하면 만들어 사용하라.
//8)거리란 평균과의 간격의 크기를 의미하므로, 음수가 아닌 양수이다.

/*
#include <stdio.h>
int getMax(int a[], int n);
int getMin(int a[], int n);
void printArray(int a[], int n);
void printStar(int a[], int n);
int main(void)
{
	int arr[5] = { 0 };
	int i, sum = 0, avg = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &arr[i]);
	}

	printf("\n데이터 : ");
	printArray(arr, 5);

	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}

	avg = sum / 5;

	printf("\n평균은 %d.\n", avg);

	printf("\n평균과의 거리 : ");
	for (i = 0; i < 5; i++)
	{
		if (avg - arr[i] < 0)
		{
			printf("%d ", arr[i] - avg);
		}
		else
		{
			printf("%d ", avg - arr[i]);
		}
	}

	printf("\n");
	printStar(arr, 5);

	return 0;
}

int getMax(int a[], int n)
{
	int i, max = a[0];

	for (i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}

	return max;
}

int getMin(int a[], int n)
{
	int i, min = a[0];

	for (i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}

	return min;
}

void printArray(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void printStar(int a[], int n)
{
	int i, max, min;

	max = getMax(a, n);
	min = getMin(a, n);

	printf("%d : ", max);
	for (i = 0; i < max; i++)
	{
		printf("*");
	}

	printf("\n%d : ", min);
	for (i = 0; i < min; i++)
	{
		printf("*");
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
void printArray(int arr[], int size);
int getMax(int arr[], int size);
int getMin(int arr[], int size);
void printStar(int num);
int main(void)
{
	int arr[5];
	int i;
	int sum = 0;
	int avg = 0;
	int max = 0;
	int min = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / 5;

	printf("\n데이터 : ");
	printArray(arr, 5);
	printf("\n평균은 %d.\n", avg);

	printf("\n평균과의 거리 : ");
	for (i = 0; i < 5; i++)
	{
		if (avg > arr[i])
		{
			printf("%d ", avg - arr[i]);
		}
		else
		{
			printf("%d ", arr[i] - avg);
		}
	}
	printf("\n");

	max = getMax(arr, 5);
	min = getMin(arr, 5);

	printStar(max);
	printStar(min);

	return 0;
}

void printArray(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int getMax(int arr[], int size)
{
	int i;
	int max = 0;

	for (i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	return max;
}

int getMin(int arr[], int size)
{
	int i;
	int min = 0;

	for (i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	return min;
}

void printStar(int num)
{
	int i;

	printf("\n%d : ", num);
	for (i = 0; i < num; i++)
	{
		printf("*");
	}
	printf("\n");
}
*/

include <stdio.h>
int getMax(int arr[], int size);
int getMin(int arr[], int size);
void printArray(int arr[], int size);
void printStar(int num);

int main(void)
{
	int arr[5];
	int i;
	int sum = 0;
	int avg = 0;
	int max = 0;
	int min = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a number : ");
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / 5;
	printf("\n데이터 : ");
	printArray(arr, 5);
	printf("\n평균은 %d.\n", avg);
	printf("\n평균과의 거리 : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", avg - arr[i]);
	}
	printf("\n");
	max = getMax(arr, 5);
	min = getMin(arr, 5);
	printStar(max);
	printStar(min);
	return 0;
}

int getMax(int arr[], int size)
{
	int i;
	int max = 0;
	int avg = 0;
	int maxIndex = 0;
	avg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
	for (i = 0; i < size; i++)
	{
		if (max < avg - arr[i])
		{
			max = avg - arr[i];
			maxIndex = i;
		}
	}
	return arr[maxIndex];
}

int getMin(int arr[], int size)
{
	int i;
	int min = 0;
	int avg = 0;
	int minIndex = 0;
	avg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
	for (i = 0; i < size; i++)
	{
		if (min > avg - arr[i])
		{
			min = avg - arr[i];
			minIndex = i;
		}
	}
	return arr[minIndex];
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void printStar(int num)
{
	int i;
	printf("\n%d : ", num);
	for (i = 0; i < num; i++)
	{
		printf("*");
	}
	printf("\n");
}

