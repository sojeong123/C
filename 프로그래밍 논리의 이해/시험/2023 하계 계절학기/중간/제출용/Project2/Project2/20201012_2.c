//20201012 ��ǻ���а� �Ӽ���

//2��
#include <stdio.h>
int main(void)
{
	char grade;

	printf("��� �Է� : ");
	scanf_s("%c", &grade);

	switch (grade)
	{
	case 'V':
		printf("V��� ���� �������� 30%%�̴�.\n");
		break;
	case 'G':
		printf("G��� ���� �������� 30%%�̴�.\n");
		break;
	case 'S':
		printf("S��� ���� �������� 20%%�̴�.\n");
		break;
	case 'F':
		printf("F��� ���� �������� 10%%�̴�.\n");
		break;
	case 'N':
		printf("N��� ���� �������� 0%%�̴�.\n");
		break;
	}
	return 0;
}