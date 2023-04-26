////��ǻ���а� 20201012 �Ӽ���////
#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 3
#define MAX_STRING_SIZE 100

typedef struct {
	char name[100];
	int num;
} element;

typedef struct {
	element data[MAX_QUEUE_SIZE];
	int front, rear;
} QueueType;

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
	return q->front == (q->rear + 1) % MAX_QUEUE_SIZE;
}

void enqueue(QueueType* q, element item)
{
	if (is_full(q))
		error("ť�� ��ȭ�����Դϴ�\n");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

element dequeue(QueueType* q)
{
	if (is_empty(q))
		error("ť�� ��������Դϴ�\n");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

element peek(QueueType* q)
{
	if (is_empty(q))
		error("ť�� ��������Դϴ�\n");
	return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

int get_count(QueueType* q)
{
	if (q->rear >= q->front)
		return q->rear - q->front;
	else
		return MAX_QUEUE_SIZE - (q->front - q->rear);
}

void print_queue(QueueType* q)
{
	int i;
	if (!is_empty(q))
		for (i = (q->front + 1) % MAX_QUEUE_SIZE; i <= q->rear; i++)
			printf("%s ", q->data[i].name);
	printf("\n");
}

void match(QueueType* q1, QueueType* q2, element item)
{
	if (is_empty(q2))
		if (is_full(q1))
			printf("���� ����ڰ� �����ϴ�. ����ڰ� �� á���� ���� ��ȸ�� �̿����ֽʽÿ�.\n");
		else {
			printf("���� ����ڰ� �����ϴ�. ��ٷ��ֽʽÿ�.\n");
			enqueue(q1, item);
		}
	else {
		enqueue(q1, item);
		printf("Ŀ���� ź���߽��ϴ�! %s�� %s\n"), q1->data[(q1->front + 1) % MAX_QUEUE_SIZE].name, q2->data[(q2->front + 1) % MAX_QUEUE_SIZE].name;
		dequeue(q1);
		dequeue(q2);
	}
}

int main(void)
{
	QueueType manQ, womanQ;
	element newPerson;
	char choice, gender;

	init(&manQ);
	init(&womanQ);
	int i;

	printf("���� �ּ� ���α׷��Դϴ�\n");

	printf("i(nsert, �� �Է�), c(heck, �����üũ), q(uit): ");
	scanf_s("%c", &choice);

	while (choice != 'q') {
		getchar();
		switch (choice) {
		case 'i':
		{
			printf("�̸��� �Է�: ");
			fgets(newPerson.name, MAX_STRING_SIZE, stdin);

			for (i = 0; i < MAX_STRING_SIZE; i++) {
				if (newPerson.name[i] == '\n') {
					newPerson.name[i] = '\0';
					break;
				}
			}

			printf("������ �Է�(m or f): ");
			scanf_s(" %c", &gender, sizeof(gender));
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
		break;

		case 'c':
		{
			printf("���� ����� %d��: ", get_count(&manQ));
			print_queue(&manQ);
			printf("���� ����� %d��: ", get_count(&womanQ));
			print_queue(&womanQ);
		}
		break;
		printf("i(sert, �� �Է�), c(heck, ����� üũ), q(uit): ");
		scanf_s(" %c", &choice);
		}
		}
	}
}