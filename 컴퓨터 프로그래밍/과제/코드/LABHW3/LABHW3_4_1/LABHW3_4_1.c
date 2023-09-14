//20201012 컴퓨터학과 임소정
//LABHW3_4_1
#include <stdio.h>
#define SIZE 5

void printSet(int s[], int size);
void addElement(int s[], int size, int element);

int main(void)
{
	int set[SIZE] = { 0 };
	int element;

	while (1)
	{
		printf("다중집합에 추가할 원소 : ");
		scanf_s("%d", &element);
		addElement(set, SIZE, element);
		printSet(set, SIZE);
	}
}

void printSet(int s[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size; i++)
	{
		if (s[i] != 0)
			printf("%d ", s[i]);
	}
	printf("}\n");
}

void addElement(int s[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (s[i] == 0)
		{
			s[i] = element;
			break;
		}
	}
}