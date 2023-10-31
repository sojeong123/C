// 컴퓨터프로그래밍 (02)
// 3학년 2학기
// 2023. 10. 27 (금)
// 강의자료 9주차 포인터2

// 1-1페이지
/*
void f(int a[])
{
	printf(a[0]);
}
int c[3] = {1, 2, 3};
result = f(c);
*/

// 포인터 방식
/*
void f(int *a)
{
	printf(a[0]);
}
*/

// Call by value
/*
void f1(int x)
{
	x = x + 10;
}

int main(void)
{
	int a = 5;
	f1(a);
	printf("%d\n", a);
}
*/

// Call by reference
/*
void f2(int *p)
{
	*p = *p + 10;
}

int main(void)
{
	int a = 5;
	f2(&a);			// 함수 호출 추가
	printf("%d\n", a);
}
*/

// 사용 예 #1
// Call by reference
/*
void swap(int *x, int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(void)
{
	int a = 100, b = 200;
	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
}
*/

// Call by value
/*
void swap(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main(void)
{
	int a = 100, b = 200;
	printf("a=%d b=%d\n", a, b);
	swap(a, b);
	printf("a=%d b=%d\n", a, b);
}
*/

// 사용 예 #2
// Call by value
/*
void changeData(int p[], int size)
	int i;
	for (i = 0; i < size; i++)
		p[i] = 99;
}
void printData(int p[], int size) 
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", p[i]);
	printf("\n");
}
int main(void)
{
	int data[5] = { 1, 2, 3, 4, 5 };
	changeData(data, 5);
	printData(data, 5);
}
*/

// Call by reference
// 포인터 표현으로 변경
/*
void changeData(int *p, int size)
{
	int i;
	for (i = 0; i < size; i++)
		p[i] = 99;
}

void printData(int *p, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", p[i]);
	printf("\n");
}

int main(void)
{
	int data[5] = { 1, 2, 3, 4, 5 };
	changeData(data, 5);
	printData(data, 5);
}
*/

// 1-2페이지
// 사용 예 #3
// 네모 상자
// 아래의 두 경우에서 const의 쓰임을 이해하자.
// 어떤 의미인가?
// 
// const int * ptr = &num;
// : 상수를 가리키는 포인터
// ptr이 갖고 있는 값이 상수이므로 값을 바꾸지 못함, 고정값을 가짐
// - *ptr = 100; (x)
// 데이터 원본을 변경 또는 수정하지 말라고 할 떄 사용.
// 
// int * const ptr = &num;
// : 상수 포인터
// int 타입의 주소를 가리킨다. 고정 주소를 가짐.
// ptr 자체가 상수
// ptr이 가지는 값을 바꿀 수 없다.
// - ptr = &a; (x)
// - ptr++; (x)

// 사용 예 #4
/*
void print_array(int pa[][3], int size) //print_array(int (* pa)[3], int size)와 같음
{
	int i, j;
	for (i = 0; i < size; i++)
	for (j = 0; j < 3; j++)
	printf("%d ", pa[i][j]);
}

int main(void)
{
	int array[][3] = {{1, 22, 70}, {23, 80, 34}, {90, 20, 4}, {40, 99, 30}};
	int rowNb = sizeof(array) / sizeof(array[0]);
	print_array(array, rowNb);
}

// array[0]		 1  22  70
// array[1]		23  80  34
// array[2]		90  20   4
// array[3]		40  99  30
// 1, 22, 70, ..., 30 -> 개당 4byte
*/