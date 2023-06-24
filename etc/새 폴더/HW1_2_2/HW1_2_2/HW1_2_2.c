/////////////컴퓨터학과 20201012 임소정/////////////
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct StackNode {
	element item;
	struct StackNode* link;
} StackNode;

typedef struct {
	StackNode *top;
} LinkedStackType;

void init(LinkedStackType* s)
{
	s->top = NULL;
}

int is_empty(LinkedStackType* s)
{
	return s->top == NULL;
}

int is_full(LinkedStackType* s)
{
	return 0;
}

void push(LinkedStackType* s, element item)
{
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
	if (temp == NULL) {
		fprintf(stderr, "메모리 할당 에러\n");
		return;
	}
	temp->item = item;
	temp->link = s->top;
	s->top = temp;
}

element pop(LinkedStackType* s)
{
	StackNode* temp;
	element item;
	if (is_empty(s)) {
		frpintf(stderr, "스택이 비어있음\n");
		exit(1);
	}
	temp = s->top;
	item = temp->item;
	s->top = temp->link;
	free(temp);
	return item;
}

element peek(LinkedStackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택이 비어있음\n");
		exit(1);
	}
	return s->top->item;
}

int main(void)
{
	LinkedStackType s;

	init(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	printf("&d\n", pop(&s));
	printf("&d\n", pop(&s));
	printf("&d\n", pop(&s));
	printf("&d\n", is_empty(&s));
}

typedef struct {
	int num;
	char str[20];
} element;

void stack_print(StackType* s)
{
	int i;

	if (is_empty(s))
		printf("<empty>\n");
	else {
		for (i = s->top; i >= 0; i--)
			if (i == s->top)
				printf("[%d, %s] <- top\n", s->data[i].num, s->data[i].str);
			else
				printf("[%d, %s]\n", s->data[i].num, s->data[i].str);
	}
	printf("--\n");
}

int main(void)
{
	StackType s;
	element d;

	init(&s);
	stack_print(&s);
	d.num = 10;
	strcpy(d.str, "ten");
	push(&s, d);
	stack_print(&s);
	d.num = 20;
	strcpy(d.str, "twenty");
	push(&s, d);
	stack_print(&s);
	d.num = 30;
	strcpy(d.str, "thirty");
	push(&s, d);
	stack_print(&s);
	d.num = 40;
	strcpy(d.str, "fourty");
	push(&s, d);
	stack_print(&s);
	pop(&s);
	d.num = 50;
	strcpy(d.str, "fifty");
	stack_print(&s);
	push(&s, d);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
}