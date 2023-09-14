///20201012 ��ǻ���а� �Ӽ���
//LABHW3_3_1
// �ϼ���
/*
#define SIZE 10
#include <stdio.h>
int main(void)
{
	int seatChoice;
	char choice;		//��� ����
	int seats[SIZE] = { 0 };
	int i;

	printf("******�¼� ���� �ý���******\n");

	printf("\n�¼��� �����Ͻðڽ��ϱ�? (y/n) ");
	scanf_s("%c", &choice);
	while (choice == 'y')
	{
		//�¼�ǥ ���
		printf("----------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf("----------------------\n");
		for (i = 0; i < SIZE; i++)
			printf("%2d", seats[i]);
		printf("\n");

		printf("���° �¼�? ");
		scanf_s("%d", &seatChoice);

		if (seats[seatChoice - 1] == 0)
		{
			//���� �����̸�
			seats[seatChoice - 1] = 1;
			printf("����Ǿ����ϴ�.\n");

			//���೻�� �ݿ��� �¼�ǥ ���
			printf("----------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("----------------------\n");
			for (i = 0; i < SIZE; i++)
				printf("%2d", seats[i]);
			printf("\n");
		}
		else		//�̹� ����Ǿ�����
			printf("�̹� ����� �¼��Դϴ�.\n");

		while (getchar() != '\n');		//���� ���� getchar() �� �ѱ��ھ� �޾ƿ��� �Լ�

		printf("\n�¼��� �����Ͻðڽ��ϱ�? (y/n) ");
		scanf_s("%c", &choice);
	}
}
*/

/*
//���� �ڵ带 �Լ�ȭ
#define SIZE 10
#include <stdio.h>

char askReservation();
void printSeats(int s[], int size);
void processReservation(int a[], int size, int seaatNumber);

int main(void)
{
	int seatChoice;
	int seats[SIZE] = { 0 };

	printf("******�¼� ���� �ý���******\n");

	while (askReservation() == 'y')
	{
		printSeats(seats, SIZE);

		printf("���° �¼�? ");
		scanf_s("%d", &seatChoice);

		processReservation(seats, SIZE, seatChoice);

		while (getchar() != '\n');		//���� ���� getchar() �� �ѱ��ھ� �޾ƿ��� �Լ�
	}
}

char askReservation()
{
	char choice;
	printf("\n�¼��� �����Ͻðڽ��ϱ�? (y/n) ");
	scanf_s("%c", &choice);
	return choice;
}

void processReservation(int a[], int size, int seatNumber)
{
	if (a[seatNumber - 1] == 0)
	{
		//���� �����̸�
		a[seatNumber - 1] = 1;
		printf("����Ǿ����ϴ�.\n");

		//���೻�� �ݿ��� �¼�ǥ ���
		printSeats(a, size);
	}
	else		//�̹� ����Ǿ�����
		printf("�̹� ����� �¼��Դϴ�.\n");
}

void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");
}
*/

/*
//LABHW3_3_2
//���� �����ʹ� ���� ���� ����� �ٸ� ����ǥ ���� ���α׷��� �ۼ�����.
//������ ������ ���ؼ� �¼��� ��� 10����� ����.
//������ �¼����� �Է¹޾�, �� �ڸ��� �տ������� ���ʷ� �Ҵ��Ѵ�.
//0�� ���Ű���, 1�� �̹� ����Ǿ����� �ǹ��Ѵ�.
//�� �̻� ������ �ڸ��� �������� ������ ���α׷��� �����Ѵ�.

//���� : ���� �ڸ���ŭ �����ڼ��� ��Ȯ�� �Էµȴٰ� ��������.
//��, 3�� 4���� ����� �� �������� ���� �¼��� 3�ڸ��̹Ƿ� 3���� �Էµȴ�. (���࿹�� ����)

//�䱸���� : �����ϸ� ���α׷��� ���ȭ�϶�.(�Լ� ���!)
//��Ʈ : ���� ���������� �����ϰ� ���ȭ �� �� �ִ�.
//��, askReservation, processReservation�� �����ϰ�, printSeats�� �״�� ����Ѵ�.

//���� ����
//******�¼� ���� �ý���******
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//0 0 0 0 0 0 0 0 0 0
//�¼��� �����ϽÁٽ��ϱ�(���)? 3
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 0 0 0 0 0 0 0
//�¼��� �����ϽÁٽ��ϱ�(���)? 4
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 1 1 1 1 0 0 0
//�¼��� �����ϽÁٽ��ϱ�(���)? 3
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 1 1 1 1 1 1 1

#define SIZE 10
#include <stdio.h>

char askReservation(int* num);
void printSeats(int s[], int size);
void processReservation(int a[], int size, int num);

int main(void)
{
	int seats[SIZE] = { 0 };
	int num;

	printf("******�¼� ���� �ý���******\n");

	while (askReservation(&num) == 'y')
	{
		processReservation(seats, SIZE, num);
	}
}

//�¼��� �����Ͻðڽ��ϱ�(���)?
char askReservation(int* num)
{
	char choice;
	printf("\n�¼��� �����Ͻðڽ��ϱ�(���)? ");
	scanf_s("%d", num);
	while (getchar() != '\n');		//���� ���� getchar() �� �ѱ��ھ� �޾ƿ��� �Լ�
	return 'y';
}

//�¼� ���� �� �¼�ǥ ���
void processReservation(int a[], int size, int num)
{
	int i, j;
	int count = 0;
	for (i = 0; i < size; i++)
	{
		if (a[i] == 0)
		{
			a[i] = 1;
			count++;
		}
		if (count == num)
			break;
	}
	printSeats(a, size);
}

//�¼�ǥ ���
void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%d ", s[i]);
	printf("\n");
}
*/

/*
//LABHW3_3_challenge
//���� ������ ������ ���� ��������.
//���� : ���� �¼����� ���� �ڸ��� �����Ϸ��� �� ��
//������ �� �� ���� �ο����� ����϶�.

//���� ����
//******�¼� ���� �ý���******
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//0 0 0 0 0 0 0 0 0 0
//�¼��� �����ϽÁٽ��ϱ�(���)? 3
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 0 0 0 0 0 0 0
//�¼��� �����ϽÁٽ��ϱ�(���)? 4
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 1 1 1 1 0 0 0
//�¼��� �����ϽÁٽ��ϱ�(���)? 5
//>>>2���� ���� �ȵ�.
//----------------------
//1 2 3 4 5 6 7 8 9 10
//----------------------
//1 1 1 1 1 1 1 1 1 1


#include <stdio.h>
#define SIZE 10

char askReservation(int* num);
void printSeats(int s[], int size);
int processReservation(int a[], int size, int num);

int main(void)
{
	int seats[SIZE] = { 0 };
	int num;

	printf("******�¼� ���� �ý���******\n");

	while (askReservation(&num) == 'y')
	{
		int unavailable = processReservation(seats, SIZE, num);
		if (unavailable > 0)
		{
			printf(">>>%d���� ���� �ȵ�.\n", unavailable);
		}
	}
}

// �¼��� �����Ͻðڽ��ϱ�(���)?
char askReservation(int* num)
{
	char choice;
	printf("\n�¼��� �����Ͻðڽ��ϱ�(���)? ");
	scanf_s("%d", num);
	while (getchar() != '\n'); // ���� ���� getchar() �� �ѱ��ھ� �޾ƿ��� �Լ�
	return 'y';
}

// �¼� ���� �� �¼�ǥ ���
int processReservation(int a[], int size, int num)
{
	int i, j;
	int count = 0;
	for (i = 0; i < size; i++)
	{
		if (a[i] == 0)
		{
			a[i] = 1;
			count++;
		}
		if (count == num)
			break;
	}
	printSeats(a, size);
	return num - count; // Return the number of people who couldn't make a reservation
}

// �¼�ǥ ���
void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%d ", s[i]);
	printf("\n");
}
*/

/*
//LABHW3_4_1(��������)
//���п����� ��������(multiset)�� ������ �ߺ��� ����Ѵ�.
//�ִ� 5���� ������ ���Ҹ� ������ �� �ִ�
//���� ���տ� ������ �Է¹޾� ���Ҹ� �߰��ϰ�,
//�� ������ ���������� ���ҵ��� ����Ͻÿ�.

//���������� ���Ұ� 5���� �Ǹ� ���α׷��� �����Ѵ�.

//-�Լ��� ����Ͽ� ���ȭ�϶�. (���� : printSet ���)

//���� ����
//�������տ� �߰��� ���� : 30
//{ 30 }
//�������տ� �߰��� ���� : 30
//{ 30, 30 }
//�������տ� �߰��� ���� : 20
//{ 30, 30, 20 }
//�������տ� �߰��� ���� : 10
//{ 30, 30, 20, 10 }
//�������տ� �߰��� ���� : 20
//{ 30, 30, 20, 10, 20 }

#include <stdio.h>
#define SIZE 5

void printSet(int s[], int size);
void addElement(int s[], int size, int element);

int main(void)
{
	int set[SIZE] = { 0 };
	int element;

	while (1)
	{
		printf("�������տ� �߰��� ���� : ");
		scanf_s("%d", &element);
		addElement(set, SIZE, element);
		printSet(set, SIZE);
	}
}

void printSet(int s[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size; i++)
	{
		if (s[i] != 0)
			printf("%d ", s[i]);
	}
	printf("}\n");
}

void addElement(int s[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (s[i] == 0)
		{
			s[i] = element;
			break;
		}
	}
}
*/

/*
//LABHW3_4_2
//���п��� ����(set)�� ��������(multiset)�� �ٸ��� ������ �ߺ��� ������� �ʴ´�.
//�ִ� 5���� ������ ���Ҹ� ������ �� �ִ�
//����(set)�� �����Ͻÿ�.
//������ �Է¹޾� ������ ��ʼҷ� �߰��ϰ�, �׶����� ������ ���ҵ��� ����Ͻÿ�.
//������ ���Ұ� 5���� �Ǹ� ���α׷��� �����Ѵ�.

//���� ����
//���տ� �߰��� ���� : 20
//{ 20 }
//���տ� �߰��� ���� : 20
//20�� �̹� ���տ� ����.
//���տ� �߰��� ���� : 10
//{ 20, 10 }
//���տ� �߰��� ���� : 30
//{ 20, 10, 30 }
//���տ� �߰��� ���� : 10
//10�� �̹� ���տ� ����.
//���տ� �߰��� ���� : 50
//{ 20, 10, 30, 50 }
//���տ� �߰��� ���� : 40
//{ 20, 10, 30, 50, 40 }

#include <stdio.h>
#define SIZE 5

void printSet(int s[], int size);
void addElement(int s[], int size, int element);
int isExist(int s[], int size, int element);

int main(void)
{
	int set[SIZE] = { 0 };
	int element;

	while (1)
	{
		printf("���տ� �߰��� ���� : ");
		scanf_s("%d", &element);
		if (isExist(set, SIZE, element) == 1)
		{
			printf("%d�� �̹� ���տ� ����.\n", element);
		}
		else
		{
			addElement(set, SIZE, element);
			printSet(set, SIZE);
		}
	}
}

void printSet(int s[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size; i++)
	{
		if (s[i] != 0)
			printf("%d ", s[i]);
	}
	printf("}\n");
}

void addElement(int s[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (s[i] == 0)
		{
			s[i] = element;
			break;
		}
	}
}

int isExist(int s[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (s[i] == element)
			return 1;
	}
	return 0;
}
*/
