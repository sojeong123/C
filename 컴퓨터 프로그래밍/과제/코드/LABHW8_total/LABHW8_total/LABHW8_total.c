// LAB 8_3_1
/*
# include <stdio.h>
// stringLength()�Լ��� s1, s2�� ���� ��ȭ��Ű�� �ڵ带 �ۼ��Ѵ�.
int stringLength(char* s1)
{
	int len = 0;
	while (*s1)		//'\0'���� üũ
	{
		len++;
		s1++;
	}
	return len;
}

void stringCopy(char* s1, const char* s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

int main(void)
{
	char copied[500];
	char data1[] = "abcde";
	char data2[] = "ABCDEFGH";

	stringCopy(copied, data1);
	printf("ù��° ���縦 �������� copied�� ���̿� ���� %d�� %s�̴�.\n", stringLength(copied), copied);
	stringCopy(copied, data2);
	printf("�ι�° ���縦 �������� copied�� ���̿� ���� %d�� %s�̴�.\n", stringLength(copied), copied);
}
*/

// LAB 8_3_2
/*
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int stringEqual(const char* s1, const char* s2)
{
	while (*s1 != '\0' && *s2 != '\0')
		if (*s1++ != *s2++)
			return 1;
	return (*s1 == '\0' && *s2 == '\0');
}

int main()
{
	char string1[50];
	char string2[50];

	printf("Enter the first string : ");
	scanf_s("%49s", string1, sizeof(string1));
	printf("Enter the second string : ");
	scanf_s("%49s", string2, sizeof(string2));

	if (stringEqual(string1, string2) == 0)
		printf("�� ���� ���ڿ��� ����\n");
	else
		printf("�� ���� ���ڿ��� �ٸ���\n");

	return 0;
}

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
// stringEqual�Լ���  s1, s2�� ���� ��ȭ��Ű�� �ڵ带 �ۼ��Ѵ�.
int stringEqual(const char* s1, const char* s2)
{
	while(*s1 != '\0' || *s2 != '\0')
		if (*s1++ != *s2++)
			return 1;
	return 0;
}

void main()
{
	char string1[50];
	char string2[50];

	printf("Enter the first string : ");
	scanf_s("%s", string1);
	printf("Enter the second string : ");
	scanf_s("%s", string2);

	if (stringEqual(string1, string2) == 0)
		printf("�ΰ��� ���ڿ��� ����\n");
	else
		printf("�ΰ��� ���ڿ��� �ٸ���\n");
}
*/

// LAB8_4
// 2���� �迭�� �Լ��� �Ű������� ����
// 2���� �迭 array�� ������Ʈ���� ����ϰ� �׵� �� ���� ū ���� ����ϴ� ���α׷��̴�.
// 
// main�Լ����� rowNb���� �����غ���.
// int rowNb = sizeof(array) / sizeof(array[0]);
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_array(int pa[][3], int size)
{
	int i, j;
	for(i = 0; i < size; i++)
		for(j = 0; i < size; i++)
			printf("%d ", *(pa[i]+ j));
}

// �Լ� print_array���� �Ű������� pa�� ǥ���� ��ó�� max_array�Լ��� �����϶�.
int max_array(int pa[][3], int size)
{
	int i, j, max;
	max = pa[0][0];
	for (i = 0; i < size; i++)
		for (j = 0; i < size; i++)
			if (max < pa[i][j])
				max = pa[i][j];
	return max;
}

int main(void)
{
	int array[][3] = { {1, 22, 70}, {23, 80, 34}, {90, 20, 4}, {40, 99, 30} };
	int rowNb = sizeof(array) / sizeof(array[0]);

	print_array(array, rowNb);
	printf("\n���� ū ���� %d�̴�.\n", max_array(array, rowNb));
}
*/

// HW8_1
// �迭�� �Լ��� �Ű����� ����
// �Ʒ��� ���� ����� �������� ���α׷��� �ϼ��϶�.
// ������ 3���� �Լ��� ���Ǻκ��� �ϼ��϶�.
// �����߻��� ���� seed�� ������ �ð��� �̿��ϴ� time�Լ��� ��������Ƿ�,
// �������� �Ź� �ٸ� ������	 ����� ���̴�.
// ���� ���
// ������Ʈ�� ���� 482
// ������Ʈ���� 54 60 69 28 54 17 65 17 50 68
// ������Ʈ�� �� ���� ū ���� 69

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumUpData(int*, int);
void printData(int*, int);
int maxData(int*, int);

void main()
{
	int k;
	int* p;
	int sum;

	int data[10];					// ��� ���࿡ ����� ���� ����

	p = data;						// Ȥ�� p = &data[0];
	srand(time(NULL));				// random �� ��¿� ���Ǵ� �Լ�. Seed ���� �ο�

	for (k = 0; k < 10; k++)	    // Index 0..9����
		*p++ = rand() % 100;		// ������ �ʱ�ȭ. 0���� 99������ Random ���� ���.

	sum = sumUpData(data, 10);
	printf("������Ʈ�� ���� %d\n", sum);

	printf("������Ʈ���� ");
	printData(data, 10);

	printf("\n������Ʈ�� �� ���� ū���� %d \n", maxData(data, 10));
}

int sumUpData(int *p, int size)		// int p[]�� �ᵵ �ȴ�
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += *p++;
	return sum;
}

void printData(int* p, int size)    // int p[]�� �ᵵ �ȴ�
{
	for (int i = 0; i < size; i++)
		printf("%d ", *p++);
}

int maxData(int* p, int size) // int p[]�� �ᵵ �ȴ�
{
	int max = *p;
	for (int i = 0; i < size; i++)
		if (max < *p)
			max = *p;
	return max;
}
*/

// HW8_2
// ���ڿ��� �Լ��� �Ű������� ����
// �Ʒ��� ����� �ϴ� �Ѥ��α۸��� �ۼ��϶�.
// - �� �ΰ��� �̸��� ������, Ȥ�� ���ĺ����� �ռ��°�(��, ���ĵǾ��ִ°�)�� �Ǻ��Ͽ� ����ϰ�,
// �� �̸��� �ٿ��� ����ϰ�
// �� �̸����� 'u'���ڸ� 'x'�� �ٲپ� ����϶�.
// 
// ���� ���
// Enter the first nuame : Suehee
// Enter the second name : Suehee
// �ΰ��� �̸��� ����.
// The concatenated name is SueheeSuehee
// The changed name is SxeheeSxehee
// 
// Enter the first nuame : Abba
// Enter the second name : Suehee
// �ΰ��� �̸��� �ٸ��� ���ĵǾ��ִ�.
// The concatenated name is AbbaSuehee
// The changed name is AbbaSxehee
// 
// Enter the first nuame : Suehee
// Enter the second name : Abba
// �ΰ��� �̸��� �ٸ��� ���ĵǾ������ʴ�
// The concatenated name is SueheeAbba
// The changed name is SxeheeAbba

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// stringCompare(s1, s2)�Լ���
// s1�� s2�� ������ 0��, s1�� s2���� �ռ��� 1��, s1�� s2���� �ڿ� ������ -1�� ��ȯ�Ѵ�.
int stringCompare(const char* s1, const char* s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
			return 1;
		else if (*s1 < *s2)
			return -1;
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return 0;
	else if (*s1 == '\0')
		return -1;
	else
		return 1;
}

// stringCat(s1, s2)�Լ��� s2�� s1�� �ڿ� ���δ�.
void stringCat(char* s1, const char* s2)
{
	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

// stringChange(s, ch, newCh)�Լ��� s���� ch�� newCh�� �ٲ۴�.
void stringChange(char* s, char ch, char newCh)
{
	while (*s)
	{
		if (*s == ch)
			*s = newCh;
		s++;
	}
}

int main(void)
{
	char name1[20];
	char name2[20];

	printf("Enter the first name : ");
	scanf("%s", name1);
	printf("Enter the second name : ");
	scanf("%s", name2);

	if (stringCompare(name1, name2) == 0)
		printf("�ΰ��� �̸��� ����.\n");
	else if (stringCompare(name1, name2) == 1)
		printf("�ΰ��� �̸��� �ٸ��� ���ĵǾ������ʴ�.\n");
	else
		printf("�ΰ��� �̸��� �ٸ��� ���ĵǾ��ִ�.\n");

	stringCat(name1, name2);
	printf("The concatenated name is %s\n", name1);

	stringChange(name1, 'u', 'x');
	printf("The changed name is %s\n", name1);
}
*/

// HW8_3
// 2���� �迭�� �Լ��� �Ű������� ����
// LAB8_4a������ 2�����迭 array�� ������Ʈ���� ���� ���ϴ� �Լ� sum_array�� �߰��϶�.
// int sum_array(int pa[][3], int size)		// sum_array(int(*pa)[3], int size)�� ����
// 
// ���� ���
// 1 22 70 23 80 34 90 20 4 40 99 30
// ���� ū ���� 99
// ������Ʈ���� ���� 513
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_array(int pa[][3], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			printf("%d ", pa[i][j]);
}

int max_array(int pa[][3], int size)
{
	int i, j, max;
	max = pa[0][0];
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			if (max < pa[i][j])
				max = pa[i][j];
	return max;
}

int sum_array(int pa[][3], int size)		// sum_array(int(*pa)[3], int size)�� ����
{
	int i, j, sum = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			sum += pa[i][j];
	return sum;
}

int main(void)
{
int array[][3] = { {1, 22, 70}, {23, 80, 34}, {90, 20, 4}, {40, 99, 30} };
	int rowNb = sizeof(array) / sizeof(array[0]);

	print_array(array, rowNb);
	printf("\n���� ū ���� %d\n", max_array(array, rowNb));
	printf("������Ʈ���� ���� %d\n", sum_array(array, rowNb));
}
*/

// 7���� �����ڷ� ����
// Project 4_2 (SNS ����)
// ��� ����ڰ� �ִ� �� �� �������� �˾Ƴ��� ������ �� ���̴�.
// �̹� ������ �����ϰ� ������ 1�� ���谡 
// �� ���� ������ ���ϸ� ��� �˰� �Ǵ����� ���ϴ� ���α׷��� �ۼ��ϴ� ���̴�.
// ��, 1�� ���踦 ǥ���ϴ� ��� A�� �� ���� ������ �ϸ�
// ��� ���Ұ� 1�� �Ǵ����� ���ϴ� ���̴�.
// ��ΰ� ģ���� �Ǹ�(��, ��� 1�� �Ǹ�) ������ ������.

/*
#define _CRT_SECURE_NO_WARNINGS
#define NUM_OF_MEMBERS 15			// ���߿� 70, 100, 300, ..., 500, 1000���� �ٲپ� �����غ���.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int check_links(int data[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		for (j = 0; j < NUM_OF_MEMBERS; j++)
			if (data[i][j] == 0)
				return 0;
	return 1;
}

void matrix_copy(int dest[][NUM_OF_MEMBERS], int src[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		for (j = 0; j < NUM_OF_MEMBERS; j++)
			dest[i][j] = src[i][j];
}

void matrix_multiplication(int data1[][NUM_OF_MEMBERS], int data2[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS])
{
	int i, j, k;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		for (j = 0; j < NUM_OF_MEMBERS; j++)
		{
			result[i][j] = 0;
			for (k = 0; k < NUM_OF_MEMBERS; k++)
				result[i][j] += data1[i][k] * data2[k][j];
			if (result[i][j] > 0)
				result[i][j] = 1;
		}
}
void print_links(int data[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
	{
		for (j = 0; j < NUM_OF_MEMBERS; j++)
			printf("%d ", data[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int link_data[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };
	int link_data2[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };
	int link_result[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };

	int i = 0, j = 0;
	int num_of_steps = 0;
	int ALL_ONES = 0;

	//srand((unsigned int)time(NULL));
	srand(100);
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		link_data[i][i] = 1;		// �� �밢�� ������ ��� 1��(�ڽ��� �ڱ� �ڽŰ� 1��)

	for (i = 0; i < NUM_OF_MEMBERS; i++)
	{
		j = 0;
		while (j < 2)
		{
			int new_link = rand() % NUM_OF_MEMBERS;
			if (new_link != i)
			{
				link_data[i][new_link] = 1;
				link_data[new_link][i] = 1;
				j++;
			}
		}
	}
	printf("\n�ʱ� 1�� ����\n");
	print_links(link_data);		// ����ڰ� 70�� �̻��̸� ����� �Ų����� ������, �ּ������� ó���Ѵ�.
	matrix_copy(link_data2, link_data);
	while (1)
	{
		num_of_steps++;

		matrix_multiplication(link_data, link_data2, link_result);

		printf("\n%d steps\n", num_of_steps);
		print_links(link_result);		// ����ڰ� 70�� �̻��̸� �ּ�ó��

		ALL_ONES = check_links(link_result);
		if (ALL_ONES) break;

		matrix_copy(link_data2, link_result);
	}
	printf("It takes %d steps.\n", num_of_steps);
}
*/