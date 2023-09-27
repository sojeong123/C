//LABHW3_5
//선택 정렬을 이용하여 다음과 같은 프로그램을 작성하라.
//0이상 100미만의 난수를 발생시켜 이를정렬하여 아래와 같이 출력하라.
//배열을 정렬하는 함수 selectionSort를 이용하라.
//원형은 다음과 같다
//void selectionSort(int list[], int size);

//실행 예시
//발생된 난수 :		17 71 79  5 89 93 82 27 84 41
//정렬 후 : 			 5 17 27 41 71 79 82 84 89 93

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void selectionSort(int list[], int size);

int main(void)
{
	int list[SIZE];
	int i;

	srand(time(NULL));

	printf("발생된 난수 : ");
	for (i = 0; i < SIZE; i++)
	{
		list[i] = rand() % 100;
		printf("%3d ", list[i]);
	}
	printf("\n");

	selectionSort(list, SIZE);

	printf("정렬 후 : ");
	for (i = 0; i < SIZE; i++)
		printf("%3d ", list[i]);
	printf("\n");

	return 0;
}

void selectionSort(int list[], int size)
{
	int i, j, min, temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (list[j] < list[min])
				min = j;
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}
}
*/


//LAB16_1
//(2차원 배열 연습)
//아래의 실행 결과를 갖도록 (가)부터 차례로 코드를 추가하여 프로그램하라.

//(가) 아래와 같은 값을 갖도록 2차원 배열 table을 선언과 동시에 초기화한 후 그대로 출력하는 프로그램을 작성하라
//실행 예시
//가>
//0 0 0
//0 0 0
//0 0 0
//0 0 0
//0 0 0


/*
#include <stdio.h>

int main(void)
{
	int table[5][3] = { 0 };
	int i, j;

	printf("가>\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}

	return 0;
}
*/

//(나) table 요소들의 값을 아래와 같이 배정하는 코드(for문 사용)를 작성하라.
//열과 행의 index를 더한 값을 해당 요소가 갖게 된다.
//그대로 출력하는 프록르매을 while문을 사용하여 작성하라.
//실행 예시
//나>
//0 1 2
//1 2 3
//2 3 4
//3 4 5
//4 5 6

/*
#include <stdio.h>

int main(void)
{
	int table[5][3] = { 0 };
	int i, j;

	printf("나>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", table[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
*/

//(다) 각 요소의 합을 구하여 출력하는 프로그램을 작성하라.
//실행 예시
//다>
//Total is 45.

/*
#include <stdio.h>
int main(void)
{
	int table[5][3] = { 0 };
	int i, j, sum = 0;

	printf("다>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			sum += table[i][j];

	printf("Total is %d.\n", sum);

	return 0;
}
*/

//(가나다)를 하나의 프로그램으로 작성하라.
//실행 예시
//가>
//0 0 0
//0 0 0
//0 0 0
//0 0 0
//0 0 0
//나>
//0 1 2
//1 2 3
//2 3 4
//3 4 5
//4 5 6
//다>
//Total is 45.

/*
#include <stdio.h>
int main(void)
{
	int table[5][3] = { 0 };
	int i, j, sum = 0;

	printf("가>\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}

	printf("나>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", table[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	printf("다>\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			sum += table[i][j];

	printf("Total is %d.\n", sum);

	return 0;
}
*/

//LAB16_3
//아래와 같이 text 변수가 있다고 하자.
//이때 아래의 지시들을 수행해 보시오.
//char text[][10] = { "ABC", "abcd", "Hello" };
//(가) 변수 text의 메모리 크기는 얼마인가 적어보시오. (자신이 예상한 값을 먼저 적고, sizeof 연산자를 이용하여 체크해 본다.)
//(나) text 변수에 어떻게 값들이 저장되어 있는지 그려본다.
//(다) 다음과 같은 출력을 내는 프로그램을 작성해보시오. (각 string의 끝은 null문자로 끝나며 null문자는 '\0’로 표현하며, null문자의 아스키 코드값은 0이다.)

//실행 예시
//text의 메모리 크기는 30이다.
//
//1번째 스트링 : ABC, 아스키 코드값 : 65 66 67
//2번째 스트링 : abcd, 아스키 코드값 : 97 98 99 100
//3번째 스트링 : Hello, 아스키 코드값 : 72 101 108 108 111

/*
#include <stdio.h>
int main(void)
{
	char text[][10] = { "ABC", "abcd", "Hello" };
	int i, j;

	printf("text의 메모리 크기는 %d이다.\n\n", sizeof(text));

	for (i = 0; i < 3; i++)
	{
		printf("%d번째 스트링 : %s, 아스키 코드값 : ", i + 1, text[i]);


		//for (j = 0; j < 10; j++)
			//printf("%d ", text[i][j]);
		//뒤에 불필요한 0들이 출력되지 않도록 수정하자.

		for (j = 0; text[i][j] != '\0'; j++)
			printf("%d ", text[i][j]);


		printf("\n");
	}
	return 0;
}
*/

//LAB16_4
//다음과 같은 2차원 배열에 대해 아래의 지시를 수행해 보시오. (가),(나),(다),(라)의 순서로 코딩하시오.
//int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
//(가) 앞의 선언 및 초기화 구문에서 초기화되지 않은 엘리먼트는 몇 개이고, 이들 엘리먼트들은 어떤 것들인지 말해보시오. test의 메모리 구조를 2차운 형태로 그림을 그려보시오.
//실행 예시
//베열 test의 엘리면트를 출력합니다.
//
//1번째 row :	8	7	0
//2번째 row :	6	5	0
//3번째 row :	1	2	0
//4번째 row :	3	4	0

/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("가>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 row : ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
		printf("\n");
	}

	return 0;
}
*/

//(나) 아래와 같은 형태의 구문을 사용하여 배열 test를 각 row 별로 출력하는 프로그램을 작성하시오.
//실행 예시
//베열 test의 엘리면트를 출력합니다.
//
//1번째 row :	8	7	-1
//2번째 row :	6	5	-1
//3번째 row :	1	2	-1
//4번째 row :	3	4	-1

/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("나>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row : ", i + 1);

		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
	}
	printf("\n");
	
	return 0;
}
*/

//(다) 아래와 같은 형태의 for문을 사용하여 test 배열에서 초기화 되지 않은 4개의 엘리먼트들 값을 모두 -1로 수정한후, 다시 한 번 (나)의 코드를 이용하여 출력하시오.
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;

	printf("다>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row : ", i + 1);

		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1");
	}
	printf("\n");
	return 0;
}
*/

//(라) 앞의 (다)를 수행한 후에 test의 모든 엘리먼트(12개) 값의 합과 그 평균을 출력하는 프로그램을 작성해보시오.
//for 반복문과 적당한 변수를 추가하여 프로그램을 완성하시오.
//전체 합으로는 32를, 평균값으로는 2.67을 출력함

//엘리먼트를 출력하지마시오.
//평균값은 소수점 이하 2자리까지만 출력하며, 반올림하시오.

//실행 예시
//라>
//Total is 32.
//Average is 2.67.

/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };

	int i, j, total = 0;
	double avg;

	printf("라>\n");

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				total += test[i][j];
			else
				//test[i][j] = -1;			#틀림
				//초기화 되지 않은 엘리먼트들 값을 모두 -1로 수정한 후, 그 값들도 포함하여 평균과 합을 구하시오.
				total += -1;

	printf("Total is %d.\n", total);
	avg = (double)total / 12;
	printf("Average is %.2lf.\n", avg);

	return 0;
}
*/

//(마) 앞의 (라)를 수행한 후에 다음과 같은 기능을 수행하는 프로그램을 작성하시오.
//test 배열의 각 row에 있는 엘리먼트 중 최대값을 출력하라.
//출력된 최대값 4개의 함을 출력하라.

//실행 예시
//마>
//1번째 row에서의 최대값 : 8
//2번째 row에서의 최대값 : 6
//3번째 row에서의 최대값 : 2
//4번째 row에서의 최대값 : 4
//최대값들의 합 : 20

/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, max, bigsum = 0;

	printf("마>\n");

	for (i = 0; i < 4; i++)
	{
		max = test[i][0];
		for (j = 1; j < 3; j++)
			if (max < test[i][j])
				max = test[i][j];
		printf("%d번째 row에서의 최대값 : %d\n", i + 1, max);
		bigsum += max;
	}
	printf("최대값들의 합 : %d\n", bigsum);

	return 0;
}
*/

//(가)(나)(다)(라)(마)를 하나의 프로그램으로 작성하시오.
//실행 예시
//가>
//배열 test의 엘리면트를 출력합니다.
//
//1번째 row :	8	7	0
//2번째 row :	6	5	0
//3번째 row :	1	2	0
//4번째 row :	3	4	0
// 
//나>
//배열 test의 엘리면트를 출력합니다.
//
//1번째 row :	8	7	-1
//2번째 row :	6	5	-1
//3번째 row :	1	2	-1
//4번째 row :	3	4	-1
//
//다>
//배열 test의 엘리면트를 출력합니다.
//
//1번째 row :	8	7	-1
//2번째 row :	6	5	-1
//3번째 row :	1	2	-1
//4번째 row :	3	4	-1
//
//라>
//Total is 32.
//Average is 2.67.
//
//마>
//1번째 row에서의 최대값 : 8
//2번째 row에서의 최대값 : 6
//3번째 row에서의 최대값 : 2
//4번째 row에서의 최대값 : 4
//최대값들의 합 : 20

//(라)에서 모든 엘리먼트의 합인 32는 변수를 Total로 선언하고, (마)에서 최대값의 합은 변수 Bigsum으로 선언하시오.
/*
#include <stdio.h>
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j, max, total = 0, bigsum = 0;
	double avg;

	printf("가>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 row : ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
		printf("\n");
	}

	printf("\n나>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 row : ", i + 1);
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1 ");
		printf("\n");
	}

	printf("\n다>\n");
	printf("배열 test의 엘리면트를 출력합니다.\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 row : ", i + 1);
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				printf("%d ", test[i][j]);
			else
				printf("-1 ");
		printf("\n");
	}

	printf("\n라>\n");

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			if (test[i][j] != 0)
				total += test[i][j];
			else
				total += -1;

	printf("Total is %d.\n", total);
	avg = (double)total / 12;
	printf("Average is %.2lf.\n", avg);

	printf("\n마>\n");

	for (i = 0; i < 4; i++)
	{
		max = test[i][0];
		for (j = 1; j < 3; j++)
			if (max < test[i][j])
				max = test[i][j];
		printf("%d번째 row에서의 최대값 : %d\n", i + 1, max);
		bigsum += max;
	}
	printf("최대값들의 합 : %d\n", bigsum);

	return 0;
}
*/

//HW16_1
//아래와 같이 int형 2차원 배열을 선언하여, 그 안에 구구단의 결과를 9단까지 저장하자.
//다음과 같은 형태로 저장되어야 한다. 그리고 나서 제대로 저장되었음을 확인하기 위해서 구구단표를 출력한 후,
//사용자 입력으로 숫자를 읽어들여서 선언한 2차원 배열을 이용하여 해당 구구단을 출력하는 프로그램을 작성하라.

//실행 예시
//--구구단 표는 다음과 같습니다.
//  2	4	6	8	10	12	14	16	18
//  3	6	9	12	15	18	21	24	27
//  4	8	12	16	20	24	28	32	36
//  5	10	15	20	25	30	35	40	45
//  6	12	18	24	30	36	42	48	54
//  7	14	21	28	35	42	49	56	63
//  8	16	24	32	40	48	56	64	72
//  9	18	27	36	45	54	63	72	81
//--원하는 구구단은? 6
//  6	12	18	24	30	36	42	48	54

/*
#include <stdio.h>
int main(void)
{
	int gugudan[9][9] = { 0 };
	int i, j, dan;

	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			gugudan[i][j] = (i + 2) * (j + 1);

	printf("--구구단 표는 다음과 같습니다.\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%3d ", gugudan[i][j]);
		printf("\n");
	}

	printf("--원하는 구구단은? ");
	scanf_s("%d", &dan);

	for (i = 0; i < 9; i++)
		printf("%3d ", gugudan[dan - 2][i]);
	printf("\n");

	return 0;
}
*/

//HW16_2
//문제2의 배열 A(arr1)을 선언과 도잇에 초기화하고, 이 배열 A의 값을 대입문을 이용하여 배열 B(arr2)와 배열 C(arr3)에 값을 넣어서 출력하는 프로그램을 작성하라.
//실행 예시
//--배열 A
//  1	2	3	4
//  5	6	7	8
//
//--배열 B
//  1	5
//  2	6
//  3	7
//  4	8
//
//--배열 C
//  1	2	3	4	5	6	7	8

/*
#include <stdio.h>
int main(void)
{
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[4][2];
	int arr3[8];
	int i, j;		//더 이상의 인덱스 변수는 사용하지 말라.

	//이동 (복사) A -> B
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arr2[j][i] = arr1[i][j];

	//이동 (복사) A -> C
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arr3[i * 4 + j] = arr1[i][j];

	//A, B, C 출력
	printf("--배열 A\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d ", arr1[i][j]);
		printf("\n");
	}

	printf("\n--배열 B\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%3d ", arr2[i][j]);
		printf("\n");
	}

	printf("\n--배열 C\n");
	for (i = 0; i < 8; i++)
		printf("%3d ", arr3[i]);

	printf("\n");

	return 0;
}
*/

//HW16_3
//4명의 학생의 중간고사, 기말고사, 숙제의 성적이 아래와 같이 배열에 저장되어 있다.
//이를 이용하여 각 학생의 총점과 고사별 총점을 구하여 홤녀에 출력하는 프로그램ㅇ르 적상하세오.
//교재의 답처럼 함수를 여러개 쓰지 말고 main함수 하나로 프로그램하라.

//(a)선언과 같이 아래와 같은 배열로 초기화 한후 이를 출력한다.
//(b)각 학생의 총점과 고사별 총점을 구한 후 이를 출력한다.

//실행 예시
//a>
//	10	15	20	0
//  30  35  20  0
//  60  65  20  0
//  90  95  20  0
//  0   0   0   0
//b>
//  10  15  20  45
//  30  35  20  85
//  60  65  20  145
//  90  95  20  205
//  190 210 80  0

/*
#include <stdio.h>
int main(void)
{
	int gradeTable[5][4] = { {10, 15, 20, 0}, {30, 35, 20, 0}, {60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0} };
	int i, j;

	printf("a>\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d ", gradeTable[i][j]);
		printf("\n");
	}

	printf("\nb>\n");

	//가장 오른쪽 줄은 총점을 저장할 공간으로 사용한다.
	//그리고 그 총점은 매줄마다 0으로 초기화한다.
	for (i = 0; i < 5; i++)
		gradeTable[i][3] = 0;

	for (i = 0; i < 4; i++)
		gradeTable[4][i] = 0;

	//각 학생의 총점을 구한다.
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			gradeTable[i][3] += gradeTable[i][j];

	//각 과목의 총점을 구한다.
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			gradeTable[4][i] += gradeTable[j][i];

	//출력한다.
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d ", gradeTable[i][j]);
		printf("\n");
	}

	return 0;
}
*/

//LAB16_5
//세로 3, 가로 5인 테이블에 난수(0~99)를 채우고, 전체의 평균을 계산해서 출력한 후 테이블을 출력하는 프로그램을 작성하라.
//실행 예시1 (실행시마다 다른 값이 나옴)
//발생된 난수의 평균은 50입니다.
//  96  30  64  33   8
//  31  16  58  39  65
//  59  65  99   2  93

//실행 예시2 (실행시마다 다른 값이 나옴)
//발생된 난수의 평균은 52입니다.
//  13  56  82  76  16
//  53  92  80  32  10
//  35  50  67  46  78

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 5

int main(void)
{
	int table[ROW][COL];
	int i, j, sum = 0;
	double avg;

	srand(time(NULL));

	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			table[i][j] = rand() % 100;
	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			sum += table[i][j];

	avg = (double)sum / (ROW * COL);

	printf("발생된 난수의 평균은 %.0lf입니다.\n", avg);

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%4d ", table[i][j]);
		printf("\n");
	}

	return 0;
}
*/

//위의 프로그램을 아래오 ㅏ같이 함수로 나누어 다시 작성하라. 실행예시는 위와 같다.
//initTable: 난수를 배열에 넣는다.
//totalTable: 총 합을 계산하여 반환한다.
//printTable: 배열의 내용을 출력한다.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 5

void initTable(int table[][5], int row);
int totalTable(int table[][5], int row);
void printTable(int table[][5], int row);

int main(void)
{
	int table[3][5];
	int i, j;
	int total = 0;

	srand(time(NULL));

	initTable(table, 3);
	printf("발생된 난수의 평균은 %d입니다.\n", totalTable(table, 3) / 15);

	printTable(table, 3);			//호출

	return 0;
}

void initTable(int table[][5], int row)
{
	int i, j;

	for (i = 0; i < row; i++)
		for (j = 0; j < 5; j++)
			table[i][j] = rand() % 100;
}

int totalTable(int table[][5], int row)
{
	int i, j, sum = 0;

	for (i = 0; i < row; i++)
		for (j = 0; j < 5; j++)
			sum += table[i][j];

	return sum;
}

void printTable(int table[][5], int row)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%4d ", table[i][j]);
		printf("\n");
	}
}
