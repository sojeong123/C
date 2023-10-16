// LAB7_0
// ������� ����Ͽ� ��ĭ�� ä���־��.
// ������� ���� ���ϴ� ���� �Է��Ͽ� Ȯ���ϴ� ���̰�,
// �ڵ��� �����Ϸ��� �ڵ����� ���� �Է��Ͽ� Ȯ���ϴ� ���̴�.
/*
#include <stdio.h>
int main(void)
{
	char c = 'A';
	int n = 100;
	double d = 3.14;

	char* pC;
	int* pN;
	double* pD;

	pC = &c;
	pN = &n;
	pD = &d;

	// c, pC, *pC, n, pN, d, pD, *pD�� � ���� ���� ���� ��
	// �����â�� ���� �̸����� �Է��Ͽ� Ȯ��
	// c: A, pC: c�� �ּ�, *pC: c�� ��(A)
	// n: 100, pN: n�� �ּ�, *pN: n�� ��(100)
	// d: 3.14, pD: d�� �ּ�, *pD: d�� ��(3.14)

	*pC = 'Z';
	*pN = 199;
	*pD = 3.1415;

	pC++;	//1byte ����
	pN++;	//4byte ����
	pD++;	//8byte ����
	// pC, pN, pD�� ���� ��� �ٲ���°�?
	// pC: c�� �ּ� + 1
	// pN: n�� �ּ� + 4
	// pD: d�� �ּ� + 8

	pC = pC + 2;
	pN = pN + 2;
	pD = pD + 2;
	// pC, pN, pD�� ���� ��� �ٲ���°�?
	// pC: c�� �ּ� + 2
	// pN: n�� �ּ� + 8
	// pD: d�� �ּ� + 16
}
*/

// LAB7_2
/*
#include <stdio.h>
void main(void)
{
	int n[] = { -1, 1, 2, 3, 4 };
	int* p1 = n;
	int* p2 = p1;

	printf("%d\n", n[0]);		// -1
	printf("%d\n", (*p1)++);	// -1
	printf("%d\n", n[0]);		// 0

	printf("%d\n", *p2++);
	// *(�������� ����)�� ++�� �켱����(p69)�� ����. �̶� ���չ����� <- �̹Ƿ� ���� �ʿ�
	// ��ġ�� ++�� ���� �����ϰ� �״��� *�� �����Ѵ�. �� *(p2++)�� ����.
	printf("%d\n", *p2);
	printf("%d\n", *++p1);
	printf("%d\n", *p1);
}
*/

// LAB7_3 (�߰���� ���� �ƴ�)
// ������ �����͸� �ǽ��ϸ鼭 ��ƴٰ�, �����ϴٰ� ������ ���̴�.
// ���� �������� �����͸� �����ϱ����� �������� �������̾���.
// ����, �������� <�⺻����> Ȱ����� ��������.
// 1���� �迭�� 2���� �迭�� �����͸� Ȱ���ϴ� �����̴�.
// A) �κ��� LAB7_1�� ��)���� �ٷ� �κ��̴�.

/*
#include <stdio.h>
int main(void)
{
	int* pi;
	int arr1[] = { 10, 20, 30, 40, 50 };
	int arr2[][3] = { {1, 2, 3}, {10, 20, 30}, {100, 200, 300}, {1000, 2000, 3000} };
	int i, sum;
	sum = 0;
	pi = arr1; // pi = &arr1[0];
	for (i = 0; i < sizeof(arr1) / sizeof(int); i++)
		// A) arr1�� �����������, pi�� ����϶�.
		sum += *(pi + i);

	printf("The sum of arr1 elements: %d\n", sum);

	sum = 0;
	pi = (int*)arr2; // pi = &arr[0][0]
	for (i = 0; i < sizeof(arr2) / sizeof(int); i++)
		// B) arr2�� �����������, pi�� ����϶�.
		sum += *(pi + i);

	printf("The sum of arr2 elements: %d\n", sum);
}
*/

// LAB7_4
// (1���� �迭�� ������)
// ũ�Ⱑ 10�� data �迭�� ������ �ְ�(generateData �Լ�)
// �̸� ����ϰ�, (printData�Լ�)
// ������Ʈ���� ���� ���Ͽ�(totalData�Լ�)
// ����ϴ� ���α׷��� �ۼ��϶�.
// �־��� ���� �ܿ��� � ������ �߰��� ������� ���ÿ�.
// �׸��� data�� �� ����������� p�� pi�� �̿��Ͽ�
// (p�� pi�� ��ȭ��Ű�鼭�� ������ ����Bó��)
// data �迭 ���� ���� / �����Ѵ�.����[ , ]�� �� ������� ����.
// ���� ����
// �߻��� 10���� ����:
// 91 80 60 71 86 11 63 86 0 14
// 10���� ������ �� = 562

/*
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int data[10]; // ��� ���࿡ ����� ���� ����

int main(void)
{
	srand(200); // random �� ��¿� ����ϴ� �Լ�. Seed ���� �ο�
	srand(time(NULL));
	generateData();

	printf("�߻��� 10���� ����:\n");
	printData();

	printf("10�� ������ �� = %d \n", totalData());
}

// generateData �Լ��� data[0]..data[9]�� ������ �ִ´�.
void generateData()
{
	int k;
	int* p;
	p = data;				 //Ȥ�� p = &data[0]
	for (k = 0; k < 10; k++) // Index 0..9���� ������ �ο�
	{
		*p = rand() % 100;   // 0..99 ������ ���� �ο�
		p++;			     // ���� ������Ʈ�� ����Ű���� ������ ����
		//*p++ = rand() % 100;		�̵� �����ϴ�.
	}
}

// printData �Լ��� data[0]..data[9]�� ���� ����Ѵ�.
void printData()
{
	int* pi = data;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *pi);
		pi++;
	}

	printf("\n");
}

// totalData �Լ��� data[0]���� data[9]������ ���� ��� ���� �� ����� ��ȯ�Ѵ�.
int totalData()
{
	int* pi = data, sum = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		sum += *pi;
		pi++;
	}

	return sum;
}
*/

// HW7_1
// (1���� �迭�� ������)
// LAB7_4�� 10���� ������Ʈ�� ���� ū���� ã�� ����ϴ� �����
// �߰��ϴ� ���α׷��� �ۼ��϶�.
// �����͸� ����϶�.
// ���� ����
// �߻��� 10���� ����:
// 91 80 60 71 86 11 63 86 0 14
// 10�� ������ �� = 562
// 10�� ������ ���� ū �� = 91

/*
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // ��� ���࿡ ����� ���� ����

int main(void)
{
	srand(200); // random �� ��¿� ����ϴ� �Լ�. Seed ���� �ο�
	srand(time(NULL));
	generateData();

	printf("�߻��� 10���� ����:\n");
	printData();

	printf("10�� ������ �� = %d \n", totalData());
	printf("10�� ������ ���� ū �� = %d \n", maxData());
}

// generateData �Լ��� data[0]..data[9]�� ������ �ִ´�.
void generateData()
{
	int k;
	int* p;
	p = data;				 //Ȥ�� p = &data[0]
	for (k = 0; k < 10; k++) // Index 0..9���� ������ �ο�
	{
		*p = rand() % 100;   // 0..99 ������ ���� �ο�
		p++;			     // ���� ������Ʈ�� ����Ű���� ������ ����
		//*p++ = rand() % 100;		�̵� �����ϴ�.
	}
}

// printData �Լ��� data[0]..data[9]�� ���� ����Ѵ�.
void printData()
{
	int* pi = data;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *pi);
		pi++;
	}

	printf("\n");
}

// totalData �Լ��� data[0]���� data[9]������ ���� ��� ���� �� ����� ��ȯ�Ѵ�.
int totalData()
{
	int* pi = data, sum = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		sum += *pi;
		pi++;
	}

	return sum;
}

// maxData �Լ��� data[0]���� data[9]������ ���� ���� ū ���� ��ȯ�Ѵ�.
int maxData()
{
	int* pi = data, max = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		if (*pi > max)
			max = *pi;
		pi++;
	}

	return max;
}
*/

// HW7_2
// (2���� �迭�� ������)
// ������ ���� 2���� �迭int data[3][10]��
// 0���� 99������ ������ ��������(generateData�Լ�)
// ����ϰ�(printData�Լ�)
// ��ü�� ���� ���(totalData�Լ�)�ؼ�
// ����ϴ� ���α׷��� �ۼ��϶�.
// ���� ����
// 91 80 60 71 86 11 63 86  0 14
// 40 42 37 46 22 31 59 46 92 22
// 17 18 65  2  0 23 50 77 70 91
//
// ��ü�� ���� : 1412

/*
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
static int data[3][10]; // ��� ���࿡ ����� ���� ����

void main()
{
	srand(200); // random �� ��¿� ����ϴ� �Լ�. Seed ���� �ο�
	srand(time(NULL));
	generateData();
	printData();
	printf("��ü�� ����: %d\n", totalData());
}

void generateData()
{
	int* p = &data[0][0];
	int i;
	for (i = 0; i < 30; i++)
	{
		*p = rand() % 100;
		p++;
	}
}

void printData()
{
	int i, j;
	int* p = &data[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", *p);
			p++;
		}
		printf("\n");
	}
}

int totalData()
{
	int* p = &data[0][0];
	int i, total = 0;
	for (i = 0; i < 30; i++)
	{
		total += *p;
		p++;
	}
	return total;
}
*/

// LAB1(���)

// LAB2(���)
// 10������ 2������ ��ȯ�Ͽ� ����ϴ� �Լ��� ���ȣ��� �ۼ��Ͻÿ�.
// void to_binary(int n);
// ���� ����
// 16
// 10000
//
// 15
// 1111

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void to_binary(int n);

void main()
{
	int n;
	printf("");
	scanf("%d", &n);
	to_binary(n);
	printf("\n");
}

void to_binary(int n)
{
	if (n == 0)
		return;
	else
	{
		to_binary(n / 2);
		printf("%d", n % 2);
	}
}
*/

// HW6_2 (���ڿ�)
// ������ ������ ���ڿ��� �Է¹޾Ƽ�,
// �� �ȿ� �����ϴ� ���ڵ��� ������ ����Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
// ��0���� �ƽ�Ű���� 48���� Ȱ���϶�.
// ���� ���, ��1���� 49���� �����Ƿ� ��1�� - 48 ����� ���ؼ� 1�̶�� ���� ���� ���� �� ������ �����϶�.
// ���� ����
// Enter one word : ab3cd4e56f
// �ȿ� �ִ� ���ڵ��� ���� 18
// 
// Enter one word : Dongduk2010
// �ȿ� �ִ� ���ڵ��� ���� 3

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
	char str[MAX];
	int i, sum = 0;

	printf("Enter one word : ");
	scanf("%s", str);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			sum += str[i] - '0';
	}

	printf("�ȿ� �ִ� ���ڵ��� ���� %d\n", sum);
}
*/

// HW6_3
// (���ڿ� palindrome �����)
// ���ڿ�(word)�� �Է¹޾� �� ���� ���ڵ��� �Ųٷ� �Ͽ�
// ���ڿ�(newWord)�� ����� ����ϴ� ���α׷��� �ۼ��϶�.
// ���� ����
// Enter one word : abcde
// The reversed word is edcba

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, len;

	printf("Enter one word : ");
	scanf("%s", word);

	len = strlen(word);
	for (i = 0; i < len; i++)
	{
		newWord[i] = word[len - i - 1];
	}
	newWord[i] = '\0';

	printf("The reversed word is %s\n", newWord);
}
*/

// Challenge6b
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* word) {
	int answer = 0;
	int i, j;
	int len = strlen(word);
	int count = 0;
	int sum = 0;

	for (i = 0; i < len; i++) {
		if (word[i] >= '0' && word[i] <= '9') {
			count++;
		}
		else {
			if (count > 0) {
				char* temp = (char*)malloc(sizeof(char) * (count + 1));
				for (j = 0; j < count; j++) {
					temp[j] = word[i - count + j];
				}
				temp[j] = '\0';
				sum += atoi(temp);
				free(temp);
				count = 0;
			}
		}
	}

	if (count > 0) {
		char* temp = (char*)malloc(sizeof(char) * (count + 1));
		for (j = 0; j < count; j++) {
			temp[j] = word[i - count + j];
		}
		temp[j] = '\0';
		sum += atoi(temp);
		free(temp);
		count = 0;
	}

	answer = sum;

	return answer;
}

int main(void)
{
	char word[81];
	int total;

	printf("Enter one word : ");
	scanf("%s", word);
	total = solution(word);
	printf("���� ���� ���� ���� %d\n", total);

	return 0;

}
*/

// Project 01
// (4���� 21p)
// (�迭�� �Լ�)
//  ������ ���� �� ���� �Է� �ް�
// �Է� ���� �� ���� ������ �̿��Ͽ� ������, ������, ������ ������ �����ϰ�
// �� ����� ����ϴ� ���̴�.
// �� �� �߿��� ���� ������ ���Ҵ� �ߺ��� �� ���ٴ� ���̴�.
// ������ �ִ� ũ��� MAX_SET_SIZE�� ���ǵǰ�, �Է¹��� ���� �� ���� ���� setA, setB�� ����.
// ������, ������, �������� ����� �����ϱ� ���� ������ setC�� �����Ѵ�.
// sizeA, sizeB, sizeC�� �� ������ ũ���̴�.
// 
// ���� ����
// Enter the size of Set A : 4
// Enter the number for Set A <1/4>: 1
// Enter the number for Set A <2/4>: 2
// Enter the number for Set A <3/4>: 2								//�ߺ��Է�
// It is redundant. Please retry.
// Enter the number for Set A <3/4>: 3
// Enter the number for Set A <4/4>: 4
// Enter the size of Set B : 3
// Enter the number for Set B <1/3>: 1
// Enter the number for Set B <2/3>: 2
// Enter the number for Set B <3/3>: 2
// It is redundant. Please retry.
// Enter the number for Set B <3/3>: 3
// Set A : < 1, 2, 3, 4 >												//���� A ���
// Set B : < 1, 2, 3 >												//���� B ���
// Union of SetA and SetB : < 1, 2, 3, 4 >							//������
// Intersection of SetA and SetB : < 1, 2, 3 >						//������
// Set-theoretic difference of SetA and SetB <SetA - SetB> : < 4 >	//������

/*
#include <stdio.h>
#include <stdlib.h>

#define MAX_SET_SIZE 100
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

int hasElement(int set[], int size, int element);
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]);
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[]);
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[]);
void printSet(int set[], int size);
int addOneElement(int set[], int size, int element);

int main(int argc, char* argv[])
{
	int i;

	int setA[MAX_SET_SIZE];
	int setB[MAX_SET_SIZE];
	int setC[MAX_SET_SIZE * 2];

	int sizeA;
	int sizeB;
	int sizeC;

	printf("Enter the size of Set A:");
	scanf_s("%d", &sizeA);
	i = 0;
	while (i < sizeA)
	{
		printf("Enter the number for Set A (%d/%d):", i + 1, sizeA);
		scanf_s("%d", &setA[i]);
		i = addOneElement(setA, i, setA[i]);
	}

	printf("Enter the size of Set B:");
	scanf_s("%d", &sizeB);
	i = 0;
	while (i < sizeB)
	{
		printf("Enter the number for Set B (%d/%d):", i + 1, sizeB);
		scanf_s("%d", &setB[i]);
		i = addOneElement(setB, i, setB[i]);
	}

	printf("Set A: ");
	printSet(setA, sizeA);
	printf("Set B: ");
	printSet(setB, sizeB);

	sizeC = setUnion(setA, sizeA, setB, sizeB, setC); // Union, setC is the result set
	printf("Union of setA and setB: ");
	printSet(setC, sizeC);

	sizeC = setIntersecton(setA, sizeA, setB, sizeB, setC); //Intersection, setC is the result set
	printf("Intersection of setA and setB: ");
	printSet(setC, sizeC);

	sizeC = setComplements(setA, sizeA, setB, sizeB, setC); //Complements, setC is the result set
	printf("Set-theoretic difference of setA and setB (setA - setB): ");
	printSet(setC, sizeC);

	return 0;
}

// If the set has the element, returns 1;
// else return 0;
int hasElement(int set[], int size, int element)
{
	int i = 0;
	for (i = 0; i < size; i++)
		if (set[i] == element)
			return HAVE_ELEMENT; // we found it!

	return DO_NOT_HAVE_ELEMENT;
}

// ���Ҹ� ���տ� �߰�. �̹� �����ϸ� �߰����� �ʰ� redundant��� ����Ѵ�. ������ ���� ũ�⸦ ��ȯ�Ѵ�.
int addOneElement(int set[], int size, int element)
{
	if (hasElement(set, size, element) == HAVE_ELEMENT)
	{
		printf("It is redundant. Please retry.\n");
		return size;
	}
	else
	{
		set[size] = element;
		return size + 1;
	}
}

// ������ ����Ѵ�.
void printSet(int set[], int size)
{
	int i;
	printf("< ");
	for (i = 0; i < size; i++)
	{
		printf("%d", set[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf(" >\n");
}

// �������� ���Ѵ�. setResult�� ��� �����̴�. ��� ������ ũ�⸦ ��ȯ�Ѵ�.
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i, j, size = 0;
	for (i = 0; i < size1; i++)
	{
		setResult[size] = set1[i];
		size++;
	}
	for (i = 0; i < size2; i++)
	{
		if (hasElement(setResult, size, set2[i]) == DO_NOT_HAVE_ELEMENT)
		{
			setResult[size] = set2[i];
			size++;
		}
	}
	return size;
}

// �������� ���Ѵ�. setResult�� ��� �����̴�. ��� ������ ũ�⸦ ��ȯ�Ѵ�.
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i, j, size = 0;
	for (i = 0; i < size1; i++)
	{
		if (hasElement(set2, size2, set1[i]) == HAVE_ELEMENT)
		{
			setResult[size] = set1[i];
			size++;
		}
	}
	return size;
}

// �������� ���Ѵ�. setResult�� ��� �����̴�. ��� ������ ũ�⸦ ��ȯ�Ѵ�.
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i, j, size = 0;
	for (i = 0; i < size1; i++)
	{
		if (hasElement(set2, size2, set1[i]) == DO_NOT_HAVE_ELEMENT)
		{
			setResult[size] = set1[i];
			size++;
		}
	}
	return size;
}
*/

// LAB1 (���)
// �ڿ��� n�� �Է¹޾�,
// sum = "(1*10+2) + (2*10+2) + (3*10+2) + ... + (n*10+2)�� ��"�� ����ϴ� ���α׷��� ���ȣ��� �ۼ��Ͻÿ�.
// ���� ����
// 5			// �Է�
// 160			// ���
// 
// 6			// �Է�
// 222			// ���

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int n);

void main()
{
	int n;
	printf("");
	scanf("%d", &n);
	printf("%d", sum(n));
}

int sum(int n)
{
	if (n == 1)
		return 12;
	else
		return sum(n - 1) + n * 10 + 2;
}
*/