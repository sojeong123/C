
// LAB8_1
// Call-by-value�� Call-by-reference�� ���� �����̴�. �Ʒ��� ���α׷��� ���� ����� �����Ͻÿ�.
// ���� ����
// a = 20 b = 30 sum = 50
/*
#include <stdio.h>
void add_two(int x, int y, int *s)
{
	*s = x + y;
}

void main()
{
	int a = 20, b = 30;
	int sum = 0;

	// add_two �Լ��� �̿��Ͽ� a�� b�� ���� ���ϰ� �� ����� sum�� �����Ѵ�.

	add_two(a, b, &sum);
	printf("a = %d b = %d sum = %d\n", a, b, sum);
}
*/

// LAB8_2
// 

// LAB8_3_1 (����)
// �Ʒ��� �ڵ�� copy()�Լ���.
// ��, copy(char *s1, char *s2) �Լ��� s2 ���ڿ��� ������ s1�� �����ϴ� �Լ��̴�.
// (���⼭�� s1, s2�� ���� ��ȭ��Ű�鼭 �ڵ带 �ۼ��ߴ�)
// ���� ����
// ù��° ���縦 �������� copied�� ���̿� ���� 5�� abcde�̴�.
// �ι��� ���縦 �������� copied�� ���̿� ���� 8�� ABCDEFGH��.
/*
# include <stdio.h>

// stringLength()�Լ��� s1, s2�� ���� ��ȭ��Ű�� �ڵ带 �ۼ��Ѵ�.
int stringLength(char* s)
{
	int i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return i;
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

// stringLength()�Լ��� s1, s2�� ���� ��ȭ��Ű�� �ʴ� �ڵ带 �ۼ��Ѵ�.
/*
int stringLength(char* s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}
*/

// ���� ���
/*
# include <stdio.h>

// stringLength()�Լ��� s1, s2�� ���� ��ȭ��Ű�� �ڵ带 �ۼ��Ѵ�.
int stringLength(char* s)
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

// LAB8_3_2 (����)
// (���ڿ��� �Լ��� �Ű������� �����ϴ� �Լ��� �Ѱ��� �� �����غ���.
// 2���� ���ڿ��� ���ؼ� ������ 0�� �ٸ��� 1�� ��ȯ�ϴ� stringEqual�Լ��� �����Ͽ�
// �Ʒ��� �������� ������ �϶�.
// ���� ����
// Enter the first string : Suehee
// Enter the second string : Sue
// �ΰ��� ���ڿ��� �ٸ���
// 
// Enter the first string : Suehee
// Enter the second string : Suehee
// �ΰ��� ���ڿ��� ����
/*
# include <stdio.h>

// stringEqual�Լ���  s1, s2�� ���� ��ȭ��Ű�� �ڵ带 �ۼ��Ѵ�.
int stringEqual(const char* s1, const char* s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return 1;
		s1++;
		s2++;
	}

	if (*s2 != '\0')
		return 1;
	else
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

/*
// stringEqual�Լ���  s1, s2�� ���� ��ȭ��Ű�� �ʴ� �ڵ带 �ۼ��Ѵ�.
int stringEqual(const char* s1, const char* s2)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return 1;
		i++;
	}

	if (s2[i] != '\0')
		return 1;
	else
		return 0;
}
*/

// �������
/*
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

// HW 8_1
// �迭�� �Լ� �Ű����� ����
// �Ʒ��� ���� ����� �������� ���α׷��� �ϼ��϶�.
// ���� �߻��� ���� seed�� ������ �ð��� �̿��ϴ� time()�Լ��� ��������Ƿ�,
// �������� �Ź� �ٸ� ���� ������ ���̴�.
// ���� ���
// ������Ʈ�� ���� 482
// ������Ʈ���� 54 60 69 28 54 17 65 17 50 68
// ������Ʈ�� �� ���� ū ���� 69
// 
// pa���� ��ȭ��Ű�� ���

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumUpData(int *, int);
void printData(int *, int);
int maxData(int *, int);

void main()
{
	int k;
	int* p;
	int sum;

	int data[10];		// ��� ���࿡ ����� ���� ����

	p = data;			// Ȥ�� p = &data[0];
	srand(time(NULL));	// random�� ��¿� ����ϴ� �Լ�, Seed���� �ο�

	for (k = 0; k < 10; k++) // Index 0..9����
		*p++ = rand() % 100; // ������ �ʱ�ȭ. 0���� 99������ Random ���� ���.
	
	sum = sumUpData(data, 10);
	printf("������Ʈ�� ���� %d\n", sum);

	printf("������Ʈ���� ");
	printData(data, 10);

	printf("\n������Ʈ�� �� ���� ū���� %d \n", maxData(data, 10));
}

// pa�� �������� �ʴ� ���
/*
int sumUpData(int* p, int size)			//int p[]�� �ᵵ �ȴ�.
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *p;
		p++;
	}
	return sum;
}
*/

// pa�� �����̴� ���
int sumUpData(int* p, int size)			//int p[]�� �ᵵ �ȴ�.
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *p++;
	}
	return sum;
}

// pa�� �������� �ʴ� ���
/*
* 
*/

// HW 8_2 (����)
// HW 8_3 (����)

// �迭�� �Լ��� �Ű������� �ñ�� ��
// �����͸� �������� �ʴ� ��
// �����Ͱ� �̻簡�� ��

// �����Ͱ� �̻簡�� ��
// sum += *pa++;		// pa�� ����Ű�� ���� sum�� ���ϰ� pa�� 1 ������Ų��.

// �����͸� �������� �ʴ� ��
// sum += *pa;			// pa�� ����Ű�� ���� sum�� ���Ѵ�.

// �迭�� �Լ��� �Ű������� �ñ�� ��
// sum += pa[i];		// pa�� ����Ű�� ���� sum�� ���Ѵ�.