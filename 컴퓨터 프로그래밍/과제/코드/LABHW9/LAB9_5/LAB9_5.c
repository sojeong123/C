// 20201012 ��ǻ���а� �Ӽ���
// LAB9_5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50];
	int i;
	char* name, * age;
	printf("�̸�(������� ���ĺ���� ����)�� ���̸� �Է��϶�(��: Abba 50):");
	gets(str);
	puts("�Է��� ����: ");
	puts(str); // �ٷ� ����غ���.

	name = strtok(str, " ");
	age = strtok(NULL, " ");

	printf("�̸��� %s�̰� �ѱ� ���̴� %s�Դϴ�.\n", name, age);
	printf("10�� �Ŀ��� %d���Դϴ�.\n", atoi(age) + 10);
}