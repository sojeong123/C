//20201012 ��ǻ���а� �Ӽ���

// LAB6_0 (���ڿ��� ����, ǥ�����, ���ڿ� ������)
// ���� ���� ���α׷��� ����� ������ ������.
// �׸��� ���α׷��� ������ �� �ڽ��� ���� ����� ���� ������
// 1)2)3)4)�� �� ���캸��.

/*
#include <stdio.h>
int main(void)
{
	int i;

	// 1) ���ڿ��� �����ϴ� �������� ������Դϴ�.
	char digits[] = "0123456789";
	char abc[] = { 'A', 'B', 'C', 'D', '\0' };
	char lan[5] = "java";

	// 2) ��� �����?
	printf("%s %s\n", digits, abc);		//%s�� ����Ѵ�.

	// 3) �Ʒ�ó�� lan ���ڿ������� 2���� ������� ����� �� �ִ�.
	//	  %c�� %s�� ���ӻ��� �ָ��϶�.
	printf("%s\n", lan);

	for (i = 0; lan[i] != '\0'; i++)	// A)���ڿ��� �������� Ȯ���ϴ� ����� �����غ���.
		printf("%c", lan[i]);

	// 4) digits[]�� �߰��� null character�� �����ϸ�
	digits[6] = '\0';
	printf("\n%s\n", digits);
	
	return 0;
}
*/

// LAB6_a_1
//�ϳ��� ���ڿ� ���� word�� �о�鿩�� (%s ���),
// �̸� ���(%s ���)�ϴ� ������ ���α׷��� �ۼ��϶�.
// word�� ���̴� �ִ� 10�̶� ��������.
// ��, char word[11]�̶� �����Ͽ� ����ϸ� �ȴ�.
// 
// ���� ����
// Enter a word(<= 10 chars) : Happy
// Happy

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char word[11];

	printf("Enter a word(<= 10 chars) : ");
	scanf("%s", word);
	printf("%s\n", word);

	return 0;
}
*/

// LAB6_a_2
// ���� ���α׷��� �����Ͽ� ����� ��, word���� ���ڸ� �ϳ��ϳ��� ����ϵ��� �϶�.
// ��, ���� ���ô� �״���̴�.
// (���� Lab6_0�� A�κ��� �����϶�.)


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char word[11];
	int i;

	printf("Enter a word(<= 10 chars) : ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		printf("%c", word[i]);
	printf("\n");

	return 0;
}

