// 1��
#include <stdio.h>
int main(void)
{
	int arr[10];
	int i;

	printf("�� 10���� ���� �Է�\n");
	for (i = 0; i < 10; i++)
	{
		printf("�Է� : ");
		scanf_s("%d", &arr[i]);
	}

	printf("Ȧ�� ��� : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d, ", arr[i]);
	}
	printf("\n");

	printf("¦�� ��� : ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}
	printf("\n");

	return 0;
}