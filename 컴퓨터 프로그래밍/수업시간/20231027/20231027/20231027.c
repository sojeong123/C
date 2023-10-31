// ��ǻ�����α׷��� (02)
// 3�г� 2�б�
// 2023. 10. 27 (��)
// �����ڷ� 9���� ������2

// 1-1������
/*
void f(int a[])
{
	printf(a[0]);
}
int c[3] = {1, 2, 3};
result = f(c);
*/

// ������ ���
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
	f2(&a);			// �Լ� ȣ�� �߰�
	printf("%d\n", a);
}
*/

// ��� �� #1
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

// ��� �� #2
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
// ������ ǥ������ ����
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

// 1-2������
// ��� �� #3
// �׸� ����
// �Ʒ��� �� ��쿡�� const�� ������ ��������.
// � �ǹ��ΰ�?
// 
// const int * ptr = &num;
// : ����� ����Ű�� ������
// ptr�� ���� �ִ� ���� ����̹Ƿ� ���� �ٲ��� ����, �������� ����
// - *ptr = 100; (x)
// ������ ������ ���� �Ǵ� �������� ����� �� �� ���.
// 
// int * const ptr = &num;
// : ��� ������
// int Ÿ���� �ּҸ� ����Ų��. ���� �ּҸ� ����.
// ptr ��ü�� ���
// ptr�� ������ ���� �ٲ� �� ����.
// - ptr = &a; (x)
// - ptr++; (x)

// ��� �� #4
/*
void print_array(int pa[][3], int size) //print_array(int (* pa)[3], int size)�� ����
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
// 1, 22, 70, ..., 30 -> ���� 4byte
*/