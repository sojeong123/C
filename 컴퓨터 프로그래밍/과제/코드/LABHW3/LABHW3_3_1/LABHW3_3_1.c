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