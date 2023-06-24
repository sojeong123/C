////��ǻ���а� 20201012 �Ӽ���////
#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_SIZE 100
#define MAX_QUEUE_SIZE 3

typedef struct {
	char name[100];
	int num;
} element;
typedef struct {
	element queue[MAX_QUEUE_SIZE];
	int front, rear;
}QueueType;

void error(const char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init(QueueType* q)
{
	q->front = q->rear = 0;
}

int is_empty(QueueType* q)
{
	return q->front == q->rear;
}

int is_full(QueueType* q)
{
	return (q->rear + 1) % MAX_QUEUE_SIZE == q->front;
}

void enqueue(QueueType* q, element item)
{
	if (is_full(q))
		printf("���� ����ڰ� �����ϴ�. ����ڰ� �� á���� ���ȸ�� �̿�\n");
	else {
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->queue[q->rear] = item;
	}
}

element dequeue(QueueType* q)
{
	if (is_empty(q))
		error("ť�� ��������Դϴ�");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->queue[q->front];
}

element peek(QueueType* q)
{
	if (is_empty(q))
		error("ť�� ��������Դϴ�");

	return q->queue[(q->front + 1) % MAX_QUEUE_SIZE];
}

int cnt(QueueType* q)
{
	int count = 0;

	if (q->front == q->rear)
		return 0;

	if (q->rear < q->front)
		count = q->rear + MAX_QUEUE_SIZE - q->front;
	else
		count = q->rear - q->front;

	return count;
}

void printQueue(QueueType* q)
{
	int i;

	for (i = q->front + 1; i <= q->rear; i++)
		printf("%s ", q->queue[i].name);
}

char askChoice(void)
{
	char choice;

	printf("i(nsert, ���Է�), c(heck, ����� üũ), q(uit): ");
	scanf_s("%c", &choice, sizeof(choice)); 

	return choice;
}

int main(void)
{
	QueueType manQ;
	QueueType womanQ;
	element newPerson;
	char choice;
	char gender;
	int i;


	init(&manQ);
	init(&womanQ);

	while ((choice = askChoice()) != 'q')
	{
		getchar();
		switch (choice) {
		case 'i':
			printf("�̸��� �Է�: ");
			fgets(newPerson.name, MAX_STRING_SIZE, stdin);
			for (i = 0; i < MAX_STRING_SIZE; i++) {
				if (newPerson.name[i] == '\n') {
					newPerson.name[i] = '\0';
					break;
				}
			}

			printf("������ �Է�(m of f): ");
			scanf_s("%c", &gender, sizeof(gender));
			getchar();

			if (gender == 'm')
			{
				if (is_empty(&womanQ))
				{
					enqueue(&manQ, newPerson);
					if (!is_full(&manQ))
						printf("���� ����ڰ� �����ϴ�. ��ٷ��ּ���\n");
				}
				else
				{
					enqueue(&manQ, newPerson);
					printf("Ŀ���� ź���߽��ϴ�! %s�� ", dequeue(&manQ).name);
					printf("%s \n\n", dequeue(&womanQ).name);

				}
			}
			else if (gender == 'f') {
				if (is_empty(&manQ)) {
					enqueue(&womanQ, newPerson);
					if (!is_full(&womanQ))
						printf("���� ����ڰ� �����ϴ�. ��ٷ��ּ���\n");
				}
				else {
					enqueue(&womanQ, newPerson);

					printf("Ŀ���� ź���߽��ϴ�! %s�� ", dequeue(&manQ).name);
					printf("%s \n\n", dequeue(&womanQ).name);
				}
			}
			break;
		case 'c':
			printf("���� ����� %d ��: ", cnt(&manQ));
			printQueue(&manQ);
			printf("\n");
			printf("���� ����� %d ��: ", cnt(&womanQ));
			printQueue(&womanQ);
			printf("\n");
			break;
		}
	}

	while (getchar() != '\n');
}