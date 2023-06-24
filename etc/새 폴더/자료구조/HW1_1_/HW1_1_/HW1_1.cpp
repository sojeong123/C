/////////컴퓨터학과 20201012 임소정/////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;
typedef struct StackNode
{
	element item;
	char* str;
	struct StackNode* link;
} StackNode;

typedef struct
{
	StackNode* top;
} LinkedStackType;

void s_init(LinkedStackType* s)
{
	s->top = NULL;
}

int is_empty(LinkedStackType* s)
{
	return (s->top == NULL);
}

void push(LinkedStackType* s, element item, char* str)
{
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
	temp->str = (char*)malloc(sizeof(s->top->str + 1));

	if (temp == NULL)
	{
		fprintf(stderr, "<empty>\n");
		return;
	}
	else
	{
		temp->item = item;
		strcpy(temp->str, str);
		temp->link = s->top;
		s->top = temp;
	}
}

void pop(LinkedStackType* s)
{
	StackNode* temp;
	element item;
	char* str = (char*)malloc(sizeof(s->top->str + 1));

	if (is_empty(s))
	{
		frprintf(stderr, "<empty>\n");
		exit(1);
	}
	else
	{
		temp = s->top;
		item = s->top->item;
		strcpy(str, s->top->str);
		s->top = s->top->link;
		printf("pop : %d %s\n", item, str);

		free(temp);
		free(str);
	}
}

int main()
{
	LinkedStackType s;
	
	s_init(&s);
	push(&s, 10, "ten");
	push(&s, 20, "twenty");
	push(&s, 30, "thirty");
	push(&s, 40, "forty");
	pop(&s);
	push(&s, 50, "fifty");
	pop(&s);
	pop(&s);
	pop(&s);

	return 0;
}