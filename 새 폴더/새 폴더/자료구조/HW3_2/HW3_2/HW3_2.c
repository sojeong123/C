////////////20201012 컴퓨터학과 임소정////////////
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

ListNode* insert_next(ListNode* head, ListNode* pre, element value)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->data = value;
	newNode->link = pre->link;
	pre->link = newNode;
	return head;
}

ListNode* insert_first(ListNode* head, element value)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->data = value;
	newNode->link = head;
	head = newNode;
	return head;
}

ListNode* insert_last(ListNode* head, element value)
{
	ListNode *p;
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->data = value;
	newNode->link = NULL;

	if (head == NULL)
		head = newNode;
	else {
		for (p = head; p->link != NULL; p = p->link);
		p->link = newNode;
	}
	return head;
}

ListNode* delete_next(ListNode* head, ListNode* pre)
{
	ListNode* p = pre->link;
	pre->link = p->link;
	free(p);
	return head;
}

ListNode* delete_first(ListNode* head)
{
	ListNode* p = head;
	if (head == NULL) error("삭제할 항목이 없음");
	head = p->link;
	free(p);
	return head;
}

ListNode* delete_last(ListNode* head)
{
	ListNode* p;
	ListNode* prev;
	if (head == NULL) error("삭제할 항목이 없음");
	if (head->link == NULL) 
	{
		free(head);
		head = NULL;
	}
	else {
		for (p = head; p->link != NULL; p = p->link)
			prev = p;
		free(p);
		prev->link = NULL;
	}
	return head;
}

void print_list(ListNode* head)
{
	ListNode *p;
	for (p = head; p != NULL; p = p->link)
		printf("%d->", p->data);
	printf("리스트끝\n");
}

ListNode* search(ListNode* head, element x)
{
	ListNode* p;
	for (p = head; p != NULL; p = p->link)
		if (p->data == x)
			return p;
	return NULL;
}

ListNode* concat(ListNode* head1, ListNode* head2)
{
	ListNode* p;
	if (head1 == NULL)return head2;
	else if (head2 == NULL) return head1;
	else {
		for (p = head1; p->link != NULL; p = p->link);
		p->link = head2;
		return head1;
	}
}

ListNode* reverse(ListNode* head)
{
	ListNode* p, * q, * r;
	p = head;
	q = NULL;
	while (p != NULL)
	{
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	return q;
}

int is_in_list(ListNode* head, element item)
{
	ListNode* p;
	for (p = head; p != NULL; p = p->link)
		if (p->data == item) return 1;
	return 0;
}

int get_length(ListNode* head)
{
	ListNode* p;
	int len = 0;
	for (p = head; p != NULL; p = p->link)
		len++;
	return len;
}

int get_total(ListNode* head)
{
	ListNode* p;
	int sum = 0;
	for (p = head; p != NULL; p = p->link)
		sum += p->data;
	return sum;
}

element get_entry(ListNode* head, int pos)
{
	ListNode* p = head;
	int i;

	if (pos < 0 || pos >= get_length(head)) error("위치 오류");

	for (i = 0; i < pos; i++)
		p = p->link;
	return p->data;
}

ListNode* insert_pos(ListNode* head, int pos, element value)
{
	ListNode* p = head;
	int i;

	if (pos < 0 || pos > get_length(head)) error("위치 오류");

	if (pos == 0)
		return insert_first(head, value);
	else {
		for (i = 0; i < pos - 1; i++)
			p = p->link;
		return insert_next(head, p, value);
	}
}

ListNode* delete_pos(ListNode* head, int pos)
{
	ListNode* p = head;
	int i;

	if (pos < 0 || pos >= get_length(head)) error("위치 오류");

	if (pos == 0)
		return delete_first(head);
	else {
		for (i = 0; i < pos - 1; i++)
			p = p->link;
		return delete_next(head, p);
	}
}

ListNode* delete_bt_key(ListNode* head, element key)
{
	ListNode* p = head;
	int pos = 0;

	while (p != NULL) {
		if (p->data == key)
			return delete_pos(head, pos);
		p = p->link;
		pos++;
	}
	printf("%d값을 지닌 노드는 존재하지 않는다\n", key);
	return head;
}

int main(void)
{
	ListNode* list1 = NULL, * list2 = NULL, * list3;
	element is_in, key, value;
	int pos;

	list1 = insert_first(list1, 10);
	list1 = insert_first(list1, 20);
	list1 = insert_first(list1, 30);


	printf("list1 = ");
	print_list(list1);

	list1 = delete_first(list1);

	printf("list1 = ");
	print_list(list1);

	list2 = insert_last(list2, 11);
	list2 = insert_last(list2, 22);
	list2 = insert_last(list2, 33);
	list2 = insert_last(list2, 44);

	printf("list2 = ");
	print_list(list2);

	list2 = delete_last(list2);

	printf("list2 = ");
	print_list(list2);

	list3 = reverse(list2);

	printf("list3 = ");
	print_list(list3);

	list1 = concat(list1, list3);

	printf("list1 = ");
	print_list(list1);

	printf("\n[새로 추가한 함수 테스트]\n");

	printf("존재 유무 확인할 값: ");
	scanf_s("%d", &is_in);
	if (is_in_list(list1, is_in))
		printf("%d은 리스트에 있다\n", is_in);
	else
		printf("%d은 리스트에 없다\n", is_in);

	printf("리스트의 노드의 수는 %d\n", get_length(list1));

	printf("리스트의 모든 노드의 합은 %d\n", get_total(list1));

	printf("값을 알고 싶은 노드의 인덱스: ");
	scanf_s("%d", &pos);
	printf("넣을 값:");
	scanf_s("%d", &value);
	list1 = insert_pos(list1, pos, value);
	printf("list1 = ");
	print_list(list1);

	printf("값을 삭제하고 싶은 노드의 인덱스: ");
	scanf_s("%d", &pos);
	list1 = delete_pos(list1, pos);
	printf("list1 = ");
	print_list(list1);

	printf("삭제하고 싶은 값: ");
	scanf_s("%d", &key);
	list1 = delete_by_key(list1, key);
	printf("list1 = ");
	print_list(list1);
}