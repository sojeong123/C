////컴퓨터학과 20201012 임소정////
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
		printf("아직 대상자가 없습니다. 대기자가 꽉 찼으니 담기회를 이용\n");
	else {
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->queue[q->rear] = item;
	}
}

element dequeue(QueueType* q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->queue[q->front];
}

element peek(QueueType* q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다");

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

	printf("i(nsert, 고객입력), c(heck, 대기자 체크), q(uit): ");
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
			printf("이름을 입력: ");
			fgets(newPerson.name, MAX_STRING_SIZE, stdin);
			for (i = 0; i < MAX_STRING_SIZE; i++) {
				if (newPerson.name[i] == '\n') {
					newPerson.name[i] = '\0';
					break;
				}
			}

			printf("성별을 입력(m of f): ");
			scanf_s("%c", &gender, sizeof(gender));
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
			else if (gender == 'f') {
				if (is_empty(&manQ)) {
					enqueue(&womanQ, newPerson);
					if (!is_full(&womanQ))
						printf("아직 대상자가 없습니다. 기다려주세요\n");
				}
				else {
					enqueue(&womanQ, newPerson);

					printf("커플이 탄생했습니다! %s과 ", dequeue(&manQ).name);
					printf("%s \n\n", dequeue(&womanQ).name);
				}
			}
			break;
		case 'c':
			printf("남성 대기자 %d 명: ", cnt(&manQ));
			printQueue(&manQ);
			printf("\n");
			printf("여성 대기자 %d 명: ", cnt(&womanQ));
			printQueue(&womanQ);
			printf("\n");
			break;
		}
	}

	while (getchar() != '\n');
}