//20201012 ��ǻ���а� �Ӽ���
//LABHW3_3_2
#include <stdio.h>
#define SIZE 10

char askReservation(int* num);
void printSeats(int s[], int size);
void processReservation(int a[], int size, int num);

char askReservation(int* num)
{
	char choice;
	printf("\n�¼��� �����Ͻðڽ��ϱ�(���)? ");
	scanf_s("%d", num);
	while (getchar() != '\n');
	return 'y';
}

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