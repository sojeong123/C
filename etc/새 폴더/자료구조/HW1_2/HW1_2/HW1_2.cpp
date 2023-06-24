/////////////////컴퓨터학과 20201012 임소정/////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_STACK_SIZE 100

typedef struct {
	char data[MAX_STACK_SIZE];
	int top;
} StackType;

void init_stack(StackType* s) {
	s->top = -1;
}

int is_empty(StackType* s) {
	return (s->top == -1);
}

int is_full(StackType* s) {
	return (s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType* s, char item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else s->data[++(s->top)] = item;
}

char pop(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

void check(char str[])
{
	StackType s;
	init_stack(&s);
	char ch;
	bool is_success = true;
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		str[i] = tolower(str[i]);
		ch = str[i];
		if (ch >= 'a' && ch <= 'z') {
			push(&s, ch);
		}
	}
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			if (str[i] != pop(&s)) {
				is_success = false;
				break;
			}
		}
	}
	if (is_success == false)
		printf("palindrome이 아닙니다.\n");
	else
		printf("palindrome입니다.\n");
}

int main(void)
{
	char str[100];
	printf("Enter a word to check palindrome: ");
	scanf_s("%[^\t\n]", str, sizeof(str));
	check(str);
	return 0;
}