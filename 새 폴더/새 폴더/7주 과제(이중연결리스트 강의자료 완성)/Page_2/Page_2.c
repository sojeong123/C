//////////////컴퓨터학과 20201012 임소정//////////////
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct DListNode { //이중연결 노드 타입
	element data;
	struct DListNode* llink;
	struct DListNode* rlink;
} DListNode;

// 이중 연결 리스트를 초기화
void init(DListNode* phead)
{
	phead->llink = phead;
	phead->rlink = phead;
}

// 이중 연결 리스트의 노드를 출력
void print_dlist(DListNode* phead)
{
	DListNode* p;
	for (p = phead->rlink; p != phead; p = p->rlink) {
		printf("<-| |%d| |-> ", p->data);
	}
	printf("\n");
}

// 새 노드를 before의 오른쪽에 삽입
void dinsert(DListNode* before, element data)
{
	DListNode* newNode = (DListNode*)malloc(sizeof(DListNode));
	newNode->data = data;
	newNode->llink = before;
	newNode->rlink = before->rlink;
	before->rlink->llink = newNode;
	before->rlink = newNode;
}

// 노드 removed를 삭제
void ddelete(DListNode* head, DListNode* removed)
{
	if (removed == head) return;
	removed->llink->rlink = removed->rlink;
	removed->rlink->llink = removed->llink;
	free(removed);
}

// 역순으로 순회하면서 저장된 데이터 값 출력
void print_reverse_dlist(DListNode* head)
{
	DListNode* p;
	for (p = head->llink; p != head; p = p->llink)
		printf("<-| |%d| |-> ", p->data);
	printf("\n");
}

// data를 갖는 노드 반환
DListNode* search(DListNode* head, element data)
{
	DListNode* p;
	for (p = head->rlink; p != head; p = p->rlink)
	{
		if (p->data == data)
			return p;
	}
	return NULL;
}

// 이중 연결 리스트 테스트 프로그램
int main(void)
{
	DListNode* head = (DListNode*)malloc(sizeof(DListNode));
	DListNode* s;
	element data;
	init(head);
	printf("추가 단계\n");

	// 처음에 삽입
	dinsert(head, 10);
	print_dlist(head);
	dinsert(head, 20);
	print_dlist(head);
	dinsert(head, 30);
	print_dlist(head);

	// 뒤에 삽입
	dinsert(head->llink, 99);
	print_dlist(head);

	printf("\n삭제 단계\n");

	// 앞의 것을 삭제
	ddelete(head, head->rlink);
	print_dlist(head);

	// 뒤의 것을 삭제
	ddelete(head, head->llink);
	print_dlist(head);


	printf("역순 출력\n");
	print_reverse_dlist(head);

	printf("search 함수 테스트\n");
	scanf_s("%d", &data);
	s = search(head, data);
	if (s == NULL)
		printf("일치하는 값이 없음\n");
	else
		printf("%d\n", s->data);


	free(head);
	return 0;
}