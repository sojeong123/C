////컴퓨터학과 20201012 임소정////
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
		error("큐가 포화상태입니다\n");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

element dequeue(QueueType* q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다\n");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

element peek(QueueType* q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다\n");
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
			printf("아직 대상자가 없습니다. 대기자가 꽉 찼으니 다음 기회를 이용해주십시오.\n");
		else {
			printf("아직 대상자가 없습니다. 기다려주십시오.\n");
			enqueue(q1, item);
		}
	else {
		enqueue(q1, item);
		printf("커플이 탄생했습니다! %s과 %s\n"), q1->data[(q1->front + 1) % MAX_QUEUE_SIZE].name, q2->data[(q2->front + 1) % MAX_QUEUE_SIZE].name;
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

	printf("미팅 주선 프로그램입니다\n");

	printf("i(nsert, 고객 입력), c(heck, 대기자체크), q(uit): ");
	scanf_s("%c", &choice);

	while (choice != 'q') {
		getchar();
		switch (choice) {
		case 'i':
		{
			printf("이름을 입력: ");
			fgets(newPerson.name, MAX_STRING_SIZE, stdin);

			for (i = 0; i < MAX_STRING_SIZE; i++) {
				if (newPerson.name[i] == '\n') {
					newPerson.name[i] = '\0';
					break;
				}
			}

			printf("성별을 입력(m or f): ");
			scanf_s(" %c", &gender, sizeof(gender));
			getchar();

			if (gender == 'm')
			{
				if (is_empty(&womanQ))
				{
					enqueue(&manQ, newPerson);
					if (!is_full(&manQ))
						printf("아직 대상자가 없습니다. 기다려주세요\n");
				}
				else
				{
					enqueue(&manQ, newPerson);
					printf("커플이 탄생했습니다! %s과 ", dequeue(&manQ).name);
					printf("%s \n\n", dequeue(&womanQ).name);
				}
			}
		break;

		case 'c':
		{
			printf("남성 대기자 %d명: ", get_count(&manQ));
			print_queue(&manQ);
			printf("여성 대기자 %d명: ", get_count(&womanQ));
			print_queue(&womanQ);
		}
		break;
		printf("i(sert, 고객 입력), c(heck, 대기자 체크), q(uit): ");
		scanf_s(" %c", &choice);
		}
		}
	}
}