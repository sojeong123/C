/////////////컴퓨터학과 20201012 임소정/////////////
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct QueueNode {
	element item;
	struct QueueNode* link;
} QueueNode;

typedef struct {
	QueueNode* front, * rear;
} QueueType;

void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init(QueueType* q)
{
	q->front = q->rear = NULL;
}

int is_empty(QueueType* q)
{
	return q->front == NULL;
}

int is_full(QueueType* q)
{
	return 0;
}

void enqueue(QueueType* q, element item)
{
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
	if (temp == NULL)
		error("메모리를 할당할 수 없습니다\n");
	else {
		temp->item = item;
		temp->link = NULL;
		if (is_empty(q))
			q->front = q->rear = temp;
		else {
			q->rear->link = temp;
			q->rear = temp;
		}
	}
}

element dequeue(QueueType* q)
{
	QueueNode* temp = q->front;
	element item;
	if (is_empty(q))
		error("큐가 비어있습니다\n");
	else {
		item = temp->item;
		q->front = temp->link;
		if (q->front == NULL)
			q->rear = NULL;
		free(temp);
		return item;
	}
}

element peek(QueueType* q)
{
	if (is_empty(q))
		error("큐가 비어있습니다\n");
	return q->front->item;
}






typedef struct {
	char name[20];
} element;

int get_count(QueueType* q)
{
	QueueNode* temp = q->front;
	int cnt = 0;
	while (temp != NULL) {
		cnt++;
		temp = temp->link;
	}
	return cnt;
}

void print_queue(QueueType* q)
{
	QueueNode* temp;
	for (temp = q->front; temp != NULL; temp = temp->link)
		printf("%s ", temp->item.name);
	printf("\n");
}

void match(QueueType* q1, QueueType* q2, element item)
{
	if (is_empty(q2)) {
			printf("아직 대상자가 없습니다. 기다려주십시오.\n");
			enqueue(q1, item);
		}
	else {
		enqueue(q1, item);
		printf("커플이 탄생했습니다! %s과 %s\n", q1->front->item.name, q2->front->item.name);
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

	printf("미팅 주선 프로그램입니다.\n");

	printf("i(nsert, 고객 입력), c(heck, 대기자 체크), q(uit):");
	scanf_s("%c", &choice);

	while (choice != 'q') {
		if (choice == 'i') {
			printf("이름을 입력: ");
			scanf_s("%s", newPerson.name);
			pritnf("성별을 입력(m or f): ");
			scanf_s("%c", &gender);

			if (gender == 'm')
				match(&manQ, &womanQ, newPerson);
			else
				match(&womanQ, &manQ, newPerson);
		}
		else {
			printf("남성 대기자 %d명: ", get_count(&manQ));
			print_queue(&manQ);
			printf("여성 대기자 %d명: ", get_count(&womanQ));
			print_queue(&womanQ);
		}
		printf("i(nsert, 고객 입력), c(heck, 대기자 체크), q(uit): ");
		scanf_s("%c", &choice);
	}
}