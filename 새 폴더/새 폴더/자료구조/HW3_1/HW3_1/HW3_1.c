///////////20201012 컴퓨터학과 임소정///////////
#include <stdio.h>
#include <stdlib.h>
#define MAX_LIST_SIZE 5

typedef int element;
typedef struct {
	element array[MAX_LIST_SIZE];
	int size;
} ArrayListType;

// 오류 처리 함수
void error(const char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// 리스트 초기화
void init(ArrayListType* L)
{
	L->size = 0;
}

int is_empty(ArrayListType* L)
{
	return L->size == 0;
}

int is_full(ArrayListType* L)
{
	return L->size == MAX_LIST_SIZE;
}

element get_entry(ArrayListType* L, int pos)
{
	if (pos < 0 || pos >= L->size)
		error("위치 오류");
	return L->array[pos];
}

void print_list(ArrayListType* L)
{
	int i;
	for (i = 0; i < L->size; i++)
		printf("%d->", L->array[i]);
	printf("리스트끝\n");
}

void insert_last(ArrayListType* L, element item)
{
	if (is_full(L))
		error("리스트 오버플로우\n");
	L->array[L->size++] = item;
}

void insert_pos(ArrayListType* L, int pos, element item)
{
	int i;
	if (!is_full(L) && (pos >= 0 && pos <= L->size)) {
		for (i = L->size - 1; i >= pos; i--)
			L->array[i + 1] = L->array[i];
		L->array[pos] = item;
		L->size++;
	}
	else
		printf("리스트 오버플로우");
}

element delete_pos(ArrayListType* L, int pos)
{
	int i;
	element item;
	if (pos < 0 || pos >= L->size)
		error("위치 오류");
	item = L->array[pos];
	for (i = pos; i < L->size - 1; i++)
		L->array[i] = L->array[i + 1];
	L->size--;
	return item;
}

void clear(ArrayListType* L)
{
	L->size = 0;
}

void insert_first(ArrayListType* L, element item)
{
	int i;
	if (is_full(L))
		printf("리스트 오버플로우\n");
	else {
		for (i = L->size - 1; i >= 0; i--)
			L->array[i + 1] = L->array[i];
		L->array[0] = item;
		L->size++;
	}
}

int get_length(ArrayListType* L)
{
	return L->size;
}

void replace(ArrayListType* L, int pos, element item)
{
	if (pos < 0 || pos >= L->size)
		printf("위치 오류");
	else
		L->array[pos] = item;
}

int is_in_list(ArrayListType* L, element item)
{
	int i;
	for (i = 0; i < L->size; i++)
		if (L->array[i] == item)
			return 1;
	return 0;
}

void delete_by_key(ArrayListType* L, element key)
{
	int i;
	for (i = 0; i < L->size; i++)
		if (L->array[i] == key) {
			delete_pos(L, i);
			return;
		}
	printf("삭제하려는 key값 %d은 리스트에 없습니다\n", key);
}

int main(void)
{
	ArrayListType list;
	init(&list);
	insert_pos(&list, 0, 20);
	insert_pos(&list, 0, 10); print_list(&list);
	clear(&list); print_list(&list);

	insert_last(&list, 90); print_list(&list);

	insert_pos(&list, 0, 30);
	insert_pos(&list, 0, 20);
	insert_pos(&list, 0, 10);

	delete_pos(&list, 2); print_list(&list);

	printf("추가 함수 테스트\n");
	insert_first(&list, 9); print_list(&list);
	insert_last(&list, 99); print_list(&list);

	insert_first(&list, 1); print_list(&list);

	printf("길이는 %d\n", get_length(&list));
	printf("3번째 데이터는 %d\n", get_entry(&list, 2));

	replace(&list, 3, 40); print_list(&list);
	printf("20은 리스트에 %s\n", is_in_list(&list, 20) ? "있습니다" : "없습니다");
	printf("22은 리스트에 %s\n", is_in_list(&list, 22) ? "있습니다" : "없습니다");

	delete_by_key(&list, 20); print_list(&list);
	delete_by_key(&list, 22); print_list(&list);
}